const int redLEDPin = 5;
const int greenLEDPin = 4;
const int blueLEDPin = 3;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redVal = 0;
int greenVal = 0;
int blueVal = 0;

int redSensorVal = 0;
int greenSensorVal = 0;
int blueSensorVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  redSensorVal = analogRead(redSensorPin);
  delay(5);
  greenSensorVal = analogRead(greenSensorPin);
  delay(5);
  blueSensorVal = analogRead(blueSensorPin);

  Serial.print("Raw Sensor Values ");
  Serial.print("\t Red: ");
  Serial.print(redSensorVal);
  Serial.print("\t Green: ");
  Serial.print(greenSensorVal);
  Serial.print("\t Blue: ");
  Serial.print(blueSensorVal);
  Serial.println();
  
  redVal = redSensorVal/2;
  greenVal = greenSensorVal/2;
  blueVal = blueSensorVal/2;

  Serial.print("Mapped Sensor Values ");
  Serial.print("\t Red: ");
  Serial.print(redVal);
  Serial.print("\t Green: ");
  Serial.print(greenVal);
  Serial.print("\t Blue: ");
  Serial.print(blueVal);
  Serial.println();

  analogWrite(redLEDPin, redVal);
  analogWrite(greenLEDPin, greenVal);
  analogWrite(blueLEDPin, blueVal);
}
