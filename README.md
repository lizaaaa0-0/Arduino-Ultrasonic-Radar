Arduino Ultrasonic Radar System

Project Overview

This project is an Arduino-based ultrasonic radar system. An HC-SR04 ultrasonic sensor measures the distance to nearby objects while an SG90 servo motor rotates the sensor to scan different directions.

An LED and a buzzer provide visual and audio alerts when an object is detected, according to the programmed detection conditions.

Components Required

- Arduino Uno
- HC-SR04 ultrasonic distance sensor
- SG90 servo motor
- LED
- Buzzer
- Breadboard and jumper wires
- USB cable and computer

Working Principle

1. The servo rotates the ultrasonic sensor through a scanning range.
2. The HC-SR04 measures the distance to objects in front of it.
3. The Arduino processes the distance measurements.
4. When an object meets the programmed detection condition, the LED and buzzer provide alerts.

Circuit Connections

Led anode pin -> Digital Pin 2
Led cathode pin -> Arduino GND
Servo pin ( yellow) -> Pin 6
Ultrasonic's TRIG pin -> Pin 9
Ultrasonic's ECHO pin -> Pin 10
Buzzer positive pin -> Pin 2
Buzzer negative pin -> GND 
Servo red wire -> Arduino 5V pin
Servo brown wire -> GND
Ultrasonic's VCC -> 5V pin


Software Requirements

- Arduino IDE
- Arduino Servo library


How to Run

1. Connect the components according to the circuit diagram.
2. Open "radar.ino" in Arduino IDE.
3. Select the correct Arduino board and port.
4. Verify the sketch and upload it to the Arduino.
5. Power the circuit and observe the radar scanning and detection behavior.

Future Improvements

- Add a radar visualization on a computer.
- Improve the detection display.
- Add adjustable detection distance and scanning range.

Author

Created as a personal Arduino learning project.