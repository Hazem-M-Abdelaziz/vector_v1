//including servo library for steering servo
#include <Servo.h>

Servo steering;

//Identifying pins connected to the arduino board
const int steeringPin = 11;
const int dcEnablePin = 9;
const int dcIn1 = 8;
const int dcIn2 = 7;

void setup() {
  //Setup Serial for communication, make sure same seria channel and freq, for ex 115200
  Serial.begin(115200);

  //Attach servo and write 95 (mid position)
  steering.attach(steeringPin);
  steering.write(95);

  //Setting pinMode
  pinMode(dcEnablePin, OUTPUT);
  pinMode(dcIn1, OUTPUT);
  pinMode(dcIn2, OUTPUT);

  //Initializing low signal for dc motor
  digitalWrite(dcIn1, LOW);
  digitalWrite(dcIn2, LOW);
  analogWrite(dcEnablePin, 0);
}

/*
For the main loop it is like a communication method established between arduino and rpi
So the arduino expects message or command like this
for servo -> "Servo:<Val>"
for dc -> "DC:<Direction>:<Val>" and for direction its whether BACKWARD, FORWARD, or STOP
*/

void loop() {
  if (Serial.available() > 0) {

    //Reading command sent from rpi
    String command = Serial.readStringUntil('\n');

    //Determine command type (for switch-case)
    int cmdType = 0;
    if (command.startsWith("DC:")) {
      cmdType = 1;   // DC command
    } else if (command.startsWith("SERVO:")) {
      cmdType = 2;   // Servo command
    }

    switch (cmdType) {
      
      case 1: {

        //Handling DC STOP command
        if (command == "DC:STOP") {
          digitalWrite(dcIn1, LOW);
          digitalWrite(dcIn2, LOW);
          analogWrite(dcEnablePin, 0);
          break;
        }

        //Handling DC command with direction + speed
        int firstColon = command.indexOf(':');
        int secondColon = command.indexOf(':', firstColon + 1);

        String dir = command.substring(firstColon + 1, secondColon);
        int vel = command.substring(secondColon + 1).toInt();
        vel = constrain(vel, 0, 255);

        if (dir == "FORWARD") {
          digitalWrite(dcIn1, HIGH);
          digitalWrite(dcIn2, LOW);
        }
        else if (dir == "BACKWARD") {
          digitalWrite(dcIn1, LOW);
          digitalWrite(dcIn2, HIGH);
        }

        analogWrite(dcEnablePin, vel);
        break;
      }

      case 2: {

        //Handling Servo command
        int angle = command.substring(6).toInt();

        //Setting constrains for servo angle for safety of the hardware used
        angle = constrain(angle, 70, 120);

        steering.write(angle);
        break;
      }

      //Unknown command
      default:
        break;
    }
  }
}
