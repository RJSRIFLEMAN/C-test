#include <Servo.h>

Servo myServo;

const int trigPin = 3;
const int echoPin = 4;
const int servoPin = 5;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  myServo.attach(servoPin);
  myServo.write(0); 
  
  Serial.begin(9600); 
}

void loop() {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Logika pembukaan tong sampah
  if (distance > 0 && distance <= 20) {
    myServo.write(180); // Tong sampah membuka 180 derajat
    delay(3000);        // Jeda 3 detik agar pengguna bisa membuang sampah
  } else {
    myServo.write(0);   // Tong sampah kembali menutup jika objek lebih dari 20cm
  }

  delay(100); 
}