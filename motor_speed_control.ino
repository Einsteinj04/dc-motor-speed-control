// DC Motor Speed Control using Potentiometer
// Description: PWM-based control of a DC motor using a 10k potentiometer
//              for analog speed adjustment. Smooth control from 0 to 2500 RPM.

#define motorPin 9     // PWM pin connected to motor driver/transistor
#define potPin A0      // Analog input from potentiometer

int potValue = 0;      // Raw input (0–1023)
int motorSpeed = 0;    // PWM output (0–255)
float rpm = 0.0;       // Estimated motor speed (in RPM)

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);  // Read analog input
  motorSpeed = map(potValue, 0, 1023, 0, 255);  // Convert to PWM duty cycle
  
  analogWrite(motorPin, motorSpeed);  // Output PWM to motor driver

  // Approximate linear relationship: 0–255 PWM → 0–2500 RPM
  rpm = (motorSpeed / 255.0) * 2500.0;

  // Output data for monitoring
  Serial.print("Pot: "); Serial.print(potValue);
  Serial.print(" | PWM: "); Serial.print(motorSpeed);
  Serial.print(" | Est. RPM: "); Serial.println(rpm, 0);

  delay(100);  // Stable refresh rate
}
