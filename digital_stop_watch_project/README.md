# LPC2129 Digital Stopwatch ⏱️

A simple digital stopwatch project developed using the **LPC2129 ARM7 microcontroller**, **Embedded C**, and a **16×2 LCD**.

## 📌 Project Overview

This project implements a basic digital stopwatch using the LPC2129 microcontroller.

The stopwatch displays the elapsed time in **MM:SS** format on a 16×2 LCD and provides three control buttons:

* ▶️ **START** – Starts the stopwatch
* ⏹️ **STOP** – Stops/pauses the stopwatch
* 🔄 **RESET** – Resets the stopwatch to `00:00`

## 🛠️ Hardware Used

* LPC2129 ARM7 Microcontroller
* 16×2 LCD
* Push Buttons
* Development Board
* Connecting Wires
* Power Supply

## 💻 Software & Tools

* Embedded C
* Keil µVision
* ARM7 / LPC2129
* Git & GitHub

## 🔧 Project Modules

| File                | Description                           |
| ------------------- | ------------------------------------- |
| `main.c`            | Main stopwatch application            |
| `delay.c`           | Delay routines using Timer0           |
| `lcd_4bit_driver.c` | 4-bit LCD driver functions            |
| `header.h`          | Function declarations and definitions |

## ⚙️ Working Principle

1. Initialize the LCD.
2. Wait for the START button.
3. Start counting elapsed time.
4. Display the current time on the LCD in `MM:SS` format.
5. STOP pauses the stopwatch.
6. START resumes the stopwatch.
7. RESET returns the display to `00:00`.

## 📟 Display Format

```text
----------------
|    00:00     |
----------------
```

The first two digits represent **minutes** and the last two digits represent **seconds**.

## 🎯 Learning Objectives

This project helped me practice:

* LPC2129 GPIO programming
* Timer programming
* LCD interfacing
* Push-button interfacing
* Embedded C programming
* Modular driver development
* Git and GitHub basics

## 👨‍💻 Author

**Vishwa Hegadihal**

GitHub: [@Vishwa0111](https://github.com/Vishwa0111)

---

⭐ This project was developed as a learning project while studying ARM7/LPC2129 embedded systems.
