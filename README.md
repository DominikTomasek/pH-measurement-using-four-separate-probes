# pH-measurement-using-four-separate-probes
This device is aimed at measuring four different pH values using four separate probes connected to an Arduino UNO board. Each individual probe is connected via an analog input to the Arduino board and subsequently the measured values are displayed on the LCD display.


pH Measurement System for Multiple Probes
This project is designed for individuals monitoring pH levels in various liquids, such as water or solutions. The system utilizes Arduino, a set of pH probes, and a LiquidCrystal display for real-time monitoring. The pH readings are displayed on the LCD and can be easily expanded to support additional probes.

![image](https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/a2a9e6bc-2a04-4264-a45d-d0f7a3c9bc6a)

Features
Multi-Probe Measurement: 
The system supports up to four pH probes, allowing simultaneous measurement of different samples.

LCD Display: 
Real-time pH values are displayed on a 16x2 LiquidCrystal display for easy monitoring.

Accuracy Enhancement: 
The code includes filtering and sorting algorithms to enhance accuracy by mitigating measurement outliers.

![image](https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/c339eac6-5673-49a3-bc2e-9404ae8d1caf)

![image](https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/77c60af0-3eea-4b21-ae3e-a7c7ab901c34)

How It Works:
The Arduino code reads pH values from each probe using analog pins. The readings are then processed to calculate the pH level, displayed on the LCD.

Components Used:

-> Arduino UNO Board

-> 4 x pH Probes (up to four probes)

-> iquidCrystal Display (16x2)

-> Connecting wires

-> PCB board for connection 

-> 4 x pH modules

-> plastic ABB box 

-> Power source 5V/1A

Code Overview:

-> The code includes functions for each pH probe, sorting and averaging measurements, and displaying the pH values on the LCD. The measurements are further processed for enhanced precision.

Wiring:

->The wiring diagram and pin connections are crucial for accurate readings. Ensure proper connections and refer to the documentation of the pH probes for any specific requirements.
![image](https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/968aa5cc-2aff-498a-8ad0-921d560a0414)

->PCB board scheme and picture 
![image](https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/a6f99b50-9cd0-4cdf-b8bd-c29b694f0f95)

->Wiring scheme in fritzing for better look and simpler understanding.
![zapojeni_2](https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/fe89bddf-e8d0-4098-8a19-a04211a52a58)

Used source: 
[1] https://docs.arduino.cc/learn/electronics/lcd-displays

[2] https://navody.dratek.cz/navody-k-produktum/modul-a-sonda-pro-mereni-ph.html


