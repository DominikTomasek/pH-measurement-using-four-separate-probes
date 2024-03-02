# pH Measurement Using Four Separate Probes

## Introduction

This document details a device designed to measure the pH of four different liquids simultaneously using separate probes connected to an Arduino UNO board.

Each probe is connected through an analog input, and the measured values are displayed on an LCD screen and can be easily expanded to support additional probes.

<p align="center">
    <img width="50%" src="https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/a2a9e6bc-2a04-4264-a45d-d0f7a3c9bc6a">
</p>


## Project Overview

- This project is ideal for individuals who need to monitor pH levels in various solutions, such as water or chemical solutions.

- It utilizes readily available components like Arduino, pH probes, and a LiquidCrystal display for real-time monitoring. The system can be easily expanded to accommodate additional probes for wider application.

<table>
    <td>
        <img src="https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/c339eac6-5673-49a3-bc2e-9404ae8d1caf">
    </td>
    <td>
        <img src="https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/77c60af0-3eea-4b21-ae3e-a7c7ab901c34">
    </td>
</table>

## Features

### Multi-Probe Measurement

The system supports up to four pH probes, allowing simultaneous measurement of different samples.

### LCD Display

Real-time pH values are displayed on a 16x2 LiquidCrystal display for easy monitoring.

### Accuracy Enhancement

The code includes filtering and sorting algorithms to enhance accuracy by mitigating measurement outliers.


## How It Works

- The Arduino code reads the voltage values from each probe through designated analog pins.

- These readings are then processed to calculate the corresponding pH levels, which are subsequently displayed on the LCD screen.  


### Components Used

- Arduino UNO Board
- 4 x pH Probes (up to four probes)
- iquidCrystal Display (16x2)
- Connecting wires
- PCB board for connection 
- 4 x pH modules
- plastic ABB box 
- Power source 5V/1A


### Code Overview

The code includes functions specific to each pH probe, sorting and averaging of measurements, and displaying the calculated pH values on the LCD. Additionally, it incorporates data processing techniques to enhance measurement precision.


### Wiring

<p align="center">
    <img img width="80%" src="https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/968aa5cc-2aff-498a-8ad0-921d560a0414">
    <p align="center">
    The wiring diagram and pin connections are crucial for accurate readings. Ensure proper connections and refer to the documentation of the pH probes for any specific requirements
</p>

<hr><br>
<p align="center">
    <img img width="80%" src="https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/a6f99b50-9cd0-4cdf-b8bd-c29b694f0f95">
    <p align="center">
    PCB board scheme and picture
</p>

<hr><br>
<p align="center">
    <img img width="80%" src="https://github.com/DominikTomasek/pH-measurement-using-four-separate-probes/assets/55549002/fe89bddf-e8d0-4098-8a19-a04211a52a58">
    <p align="center">
    Wiring scheme in fritzing for better look and simpler understanding
</p>


### Used source

[1] https://docs.arduino.cc/learn/electronics/lcd-displays

[2] https://navody.dratek.cz/navody-k-produktum/modul-a-sonda-pro-mereni-ph.htm

<br><b><hr>

### Copyright
README Designed by: *[Laštůvka Lukáš](https://github.com/LastuvkaLukas)*

**© 2024 [Dominik Tomášek](https://github.com/DominikTomasek)**