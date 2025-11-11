#include <Servo.h>

Servo steering;
const int steeringPin = 11;
const int dcEnablePin = 9;
const int dcIn1 = 8;
const int dcIn2 = 7;

void setup() {
  Serial.begin(115200);
  steering.attach(steeringPin);
  steering.write(95);
  pinMode(dcEnablePin, OUTPUT);
  pinMode(dcIn1, OUTPUT);
  pinMode(dcIn2, OUTPUT);
  digitalWrite(dcIn1, LOW);
  digitalWrite(dcIn2, LOW);
  analogWrite(dcEnablePin, 0);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    if (command.startsWith("DC:")) {
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
    } 
    else if (command == "DC:STOP") {
      digitalWrite(dcIn1, LOW);
      digitalWrite(dcIn2, LOW);
      analogWrite(dcEnablePin, 0);
    } 
    else if (command.startsWith("SERVO:")) {
      int angle = command.substring(6).toInt();
      angle = constrain(angle, 70, 120);
      steering.write(angle);
    }
  }
}
