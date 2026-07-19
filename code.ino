#include <WiFi.h>
#define WATER_SENSOR 34
#define HEART_SENSOR 35
#define MOTION_SENSOR 32
#define BUZZER 25
#define LED 26


const char* ssid = "Your_WiFi_Name";
const char* password = "Your_WiFi_Password";


int waterValue = 0; int heartValue = 0; int motionValue = 0;

void setup() { Serial.begin(115200);
pinMode(WATER_SENSOR, INPUT); pinMode(HEART_SENSOR, INPUT); pinMode(MOTION_SENSOR, INPUT); pinMode(BUZZER, OUTPUT); pinMode(LED, OUTPUT);

digitalWrite(BUZZER, LOW); digitalWrite(LED, LOW); WiFi.begin(ssid, password);

Serial.println("Connecting to WiFi...");
while (WiFi.status() != WL_CONNECTED) { delay(1000);
Serial.println("Connecting...");
}


Serial.println("WiFi Connected");
}


void loop() {
waterValue = analogRead(WATER_SENSOR); heartValue = analogRead(HEART_SENSOR); motionValue = analogRead(MOTION_SENSOR);

Serial.print("Water Sensor: "); Serial.println(waterValue); Serial.print("Heart Rate: "); Serial.println(heartValue);

Serial.print("Motion Sensor: "); Serial.println(motionValue);

// Condition for danger detection
if (waterValue > 500 && motionValue < 100 && heartValue < 60) { Serial.println("DANGER: Possible Drowning Detected!");

digitalWrite(BUZZER, HIGH); digitalWrite(LED, HIGH);

// Remote alert simulation
Serial.println("Sending Remote Alert to Mobile...");
}
else {
Serial.println("SAFE: Normal Condition");


digitalWrite(BUZZER, LOW); digitalWrite(LED, LOW);
}


delay(2000);
}


