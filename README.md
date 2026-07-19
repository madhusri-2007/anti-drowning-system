<h1 align="center">🌊 Anti Drowning System with Remote Alerts</h1>

<p align="center">

  🌊 Anti Drowning System with Remote Alerts
📌 Project Overview

This project is an IoT-based Anti Drowning System designed to detect possible drowning situations and send alerts. It uses multiple sensors like water level, heart rate, and motion sensor to monitor a person’s condition in water.

If abnormal conditions are detected, the system triggers a buzzer, LED alert, and remote notification.

🎯 Objective

Prevent drowning accidents
Monitor real-time physical conditions
Send instant alerts during danger situations


🛠️ Components Used

ESP32 / Microcontroller
Water Sensor
Heart Rate Sensor
Motion Sensor
Buzzer
LED
WiFi Module (ESP32 built-in)


⚙️ Working Principle

Sensors continuously read:
Water level
Heart rate
Body movement
System checks conditions:
High water level
No movement
Low heart rate

If all conditions match:
🚨 DANGER detected
Buzzer & LED ON

Alert message sent
Otherwise:
✅ System remains in SAFE mode


💻 Code Explanation

analogRead() → Reads sensor values
if condition → Detects danger
digitalWrite() → Controls buzzer & LED
WiFi.begin() → Connects to internet


🚨 Danger Condition Logic

if (waterValue > 500 && motionValue < 100 && heartValue < 60)


📡 Features

Real-time monitoring
Automatic alert system
Wireless communication using WiFi
Low-cost and efficient solution


📂 Project Structure

Anti-Drowning-System/
│── main.ino / code.cpp
│── README.md


👨‍🎓 Team Members

G. Lakshayaa
K. Madhusri
S. Nisha


🏫 Institution

IFET College of Engineering
Villupuram, Tamil Nadu


📅 Year

2026


🚀 Future Enhancements

Mobile app integration
GPS location tracking
Cloud data monitoring
Wearable device integration
<p align="center">✨ Made with dedication for safety ✨</p>
