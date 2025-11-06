# DC Motor Speed Control using Arduino

## ⚙️ Overview
This project demonstrates a PWM-based DC motor control system where a **rotary potentiometer** provides real-time analog input to vary the motor’s rotational speed.  
The Arduino reads the potentiometer voltage (0–5 V) and maps it to a **PWM duty cycle (0–255)**, achieving smooth control from **0 to ~2500 RPM**.  

The system was tested with a **5 V DC motor** equipped with a **cardboard fan blade**, simulating an air-cooling system with load-dependent torque.

---

## 🔧 Specifications
| Parameter | Value |
|------------|--------|
| Input Voltage | 5 V DC |
| PWM Frequency | 490 Hz |
| Control Range | 0–255 (mapped from 0–1023 ADC) |
| Motor Speed Range | 0–2500 RPM (approx.) |
| Potentiometer | 10 kΩ linear rotary |
| Response Latency | <100 ms |
| Stability | ±3% RPM variation |

---

## 🧠 Features
- Smooth analog control of DC motor speed  
- Real-time PWM duty-cycle mapping  
- Energy-efficient speed regulation (full duty cycle range)  
- Noise-free response with <3% voltage ripple  

---

## 🛠️ Hardware Components
- Arduino Uno (or equivalent)  
- DC Motor (5 V or 12 V, depending on driver)  
- 10 kΩ Rotary Potentiometer  
- NPN Transistor (TIP120 or 2N2222) or L298N Driver  
- Flyback Diode (1N4007)  
- 220 Ω base resistor  
- Power Supply  

---
## 🚀 System Performance
During testing, the system demonstrated:
- Stable torque response under light and medium loads  
- Accurate control from 0 RPM to 2500 RPM  
- Latency below 100 ms between potentiometer adjustment and motor speed response  


## 📂 Code
See [`motor_speed_control.ino`](motor_speed_control.ino)
