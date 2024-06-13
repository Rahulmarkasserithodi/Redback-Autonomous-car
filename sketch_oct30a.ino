// Global Variables
// -------------------------------------------------------
int rightMotorLogicPin1 = 5;
int rightMotorLogicPin2 = 6;
int leftMotorLogicPin1 = 10;
int leftMotorLogicPin2 = 11;
int pwmDutyCycle = 150;
int sensor1Pin = A1;  // IR sensor 1
int sensor2Pin = A0;  // IR sensor 2
// -------------------------------------------------------
// Subroutine: Initialize Motor Pins
// -------------------------------------------------------
void initializeMotorPins() {
  pinMode(rightMotorLogicPin1, OUTPUT);
  pinMode(rightMotorLogicPin2, OUTPUT);
  pinMode(leftMotorLogicPin1, OUTPUT);
  pinMode(leftMotorLogicPin2, OUTPUT);
  // Print the motor pin configuration for wiring
  Serial.print("Right Motor Pin 1 = ");
  Serial.println(rightMotorLogicPin1);
  Serial.print("Right Motor Pin 2 = ");
  Serial.println(rightMotorLogicPin2);
  Serial.print("Left Motor Pin 1 = ");
  Serial.println(leftMotorLogicPin1);
  Serial.print("Left Motor Pin 2 = ");
  Serial.println(leftMotorLogicPin2);
  pinMode(sensor1Pin, INPUT);
  pinMode(sensor2Pin, INPUT);
  // Print the sensor pin configuration for wiring
  Serial.print("IR Sensor 1 Pin = ");
  Serial.println(sensor1Pin);
  Serial.print("IR Sensor 2 Pin = ");
  Serial.println(sensor2Pin);
}

void setup() {
  // Initialize the serial communications
  Serial.begin(9600);
  // Print the program details
  Serial.println("-------------------------------------");
  Serial.println("Program: Motor Controller");
  Serial.println("Initializing ...");
  // Call a subroutine to initialize the motor pins
  initializeMotorPins();
  // Initialization completed successfully
  Serial.println("Initialization complete");
}

void loop() {
  // Read the input from IR sensor 1:
  int sensorValue1 = digitalRead(sensor1Pin);
  // Read the input from IR sensor 2:
  int sensorValue2 = digitalRead(sensor2Pin);

  // Determine the direction based on the sensor readings
  char currentDirection = 'x';

  if (sensorValue1 == LOW && sensorValue2 == LOW) {
    currentDirection = 'f'; // Move forward
    analogWrite(leftMotorLogicPin1, pwmDutyCycle);
    analogWrite(leftMotorLogicPin2, 0);
    analogWrite(rightMotorLogicPin1, pwmDutyCycle);
    analogWrite(rightMotorLogicPin2, 0);
  } else if (sensorValue1 == HIGH && sensorValue2 == LOW) {
    currentDirection = 'l'; // Turn left
    analogWrite(leftMotorLogicPin1, 0);
    analogWrite(leftMotorLogicPin2, pwmDutyCycle);
    analogWrite(rightMotorLogicPin1, pwmDutyCycle);
    analogWrite(rightMotorLogicPin2, 0);
  } else if (sensorValue1 == LOW && sensorValue2 == HIGH) {
    currentDirection = 'r'; // Turn right
    analogWrite(leftMotorLogicPin1, pwmDutyCycle);
    analogWrite(leftMotorLogicPin2, 0);
    analogWrite(rightMotorLogicPin1, 0);
    analogWrite(rightMotorLogicPin2, pwmDutyCycle);
  } else {
    currentDirection = 'x'; // Stop
    analogWrite(leftMotorLogicPin1, 0);
    analogWrite(leftMotorLogicPin2, 0);
    analogWrite(rightMotorLogicPin1, 0);
    analogWrite(rightMotorLogicPin2, 0);
  }

  // Print out the sensor readings (for debugging):
  Serial.print("IR Sensor 1: ");
  Serial.println(sensorValue1);
  Serial.print("IR Sensor 2: ");
  Serial.println(sensorValue2);
  Serial.print("Direction: ");
  Serial.println(currentDirection);
}
