# 8051 GPIO Fundamentals

## 📌 Project Overview

This repository contains basic GPIO (General Purpose Input/Output) experiments using the 8051 microcontroller.

These mini projects demonstrate digital output control and digital input handling using Embedded C.

---

## 📂 Experiments Included

### 1️⃣ LED Blinking

**Folder:** `led-blinking/`

This experiment toggles all LEDs connected to Port 2.

Working:
- Port 2 is configured as output.
- LEDs are turned OFF (0x00).
- LEDs are turned ON (0xFF).
- A software delay is used between transitions.

Concepts:
- Port manipulation
- Software delay generation
- Digital output control

---

### 2️⃣ Switch Interfacing

**Folder:** `switch-interfacing/`

This experiment reads switch input from Port 0 and mirrors the switch state to LEDs connected to Port 2.

Working:
- Port 0 configured as input.
- Port 2 configured as output.
- Switch value is continuously copied to LEDs.

Concepts:
- Digital input reading
- Input-output mapping
- Basic hardware interfacing

---

## 🎯 Objective

To build a strong foundation in:

- GPIO configuration
- Port-level manipulation
- Bit-level operations
- Embedded C programming basics

---

## 🔧 Hardware Used

- 8051 Microcontroller
- LEDs
- Push Button Switch
- Current limiting resistors
- Keil uVision / Proteus Simulation

---

## 🚀 Future Enhancements

- Add LED chasing pattern
- Implement timer-based delay
- Add switch debouncing
- Implement interrupt-based input detection

---

## 📈 Learning Outcome

This repository builds foundational knowledge required before working with advanced peripherals such as UART, SPI, I2C, ADC, and timers.
