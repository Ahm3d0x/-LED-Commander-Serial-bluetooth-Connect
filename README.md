# LED Commander Serial V1 🔴🟢

Control 4 LEDs using your keyboard or a mobile app! This Arduino project lets you toggle each LED individually via serial communication and intelligently detects when all LEDs are turned ON. It's perfect for beginners who want to learn hardware control through serial input.

---

## 🚀 Features

- 🔌 Control 4 LEDs using serial input (`a`, `b`, `c`, `d`)
- 🔁 Automatically detect when all LEDs are ON:
  - First time → sends `'e'`
  - Next time (after some turned OFF) → sends `'f'`
  - Repeats alternately (`e`, `f`, `e`, ...)
- ✅ Clean and responsive serial feedback
- 🧠 Logic-driven design using arrays and flags
- 📱 Can be used via Serial Monitor or Bluetooth mobile apps!

---

## 🧰 Requirements

### 💻 Hardware:
- Arduino Uno (or compatible)
- 4x LEDs
- 4x 220Ω resistors
- Breadboard + jumper wires
- (Optional) HC-05 Bluetooth module (for mobile app)

### 📱 Software:
- Arduino IDE
- (Optional) Serial Bluetooth Terminal app (Android)
  - Download from Play Store: [https://play.google.com/store/apps/details?id=com.giristudio.hc05.bluetooth.arduino.control](https://play.google.com/store/apps/details?id=com.giristudio.hc05.bluetooth.arduino.control)
 

---

## 📸 Screenshot
## >> Circuit
![LED Commander Screenshot](https://github.com/Ahm3d0x/-LED-Commander-Serial-bluetooth-Connect/blob/main/simple%20bluetooth%20%20Connect.png)

> Make sure to place your image inside a folder called `images` in your repo.



---

## 🧠 How It Works

Each character you send controls a specific LED:

| Character | Action          |
|-----------|-----------------|
| `a`       | Toggle LED 1    |
| `b`       | Toggle LED 2    |
| `c`       | Toggle LED 3    |
| `d`       | Toggle LED 4    |
| `e`       | Auto-sent when **all LEDs ON** (first time) |
| `f`       | Auto-sent when **all LEDs ON again** |

---

## 🖼️ Circuit Diagram

| LED | Arduino Pin |
|-----|-------------|
| 1   | 2           |
| 2   | 3           |
| 3   | 4           |
| 4   | 5           |

Each LED should be connected through a 220Ω resistor to GND.

---

## ⚙️ Setup & Upload

1. Connect the LEDs as per the table above.
2. Copy the code below into Arduino IDE.
3. Select your board and port.
4. Upload the sketch.
5. Open the Serial Monitor (baud rate 9600), or connect via mobile app.

---

## 📲 Mobile Control (via Bluetooth)

To use a Bluetooth app like **Serial Bluetooth Terminal**:

1. Connect HC-05 module to Arduino:
   - `VCC` → 5V  
   - `GND` → GND  
   - `TX` → Arduino RX (pin 0) *(you might need a voltage divider if using 5V logic)*
   - `RX` → Arduino TX (pin 1)

2. Pair HC-05 with your phone (PIN: usually `1234` or `0000`)
3. Open the app, connect to HC-05.
4. Start sending characters: `a`, `b`, `c`, `d`

---

## 👨‍💻 Author
 - Ahmed Mohamed Attia

 - 🔗 GitHub: github.com/Ahm3d0x

 - 💼 LinkedIn: Ahmed M. Attia

## 🪪 License
 - This project is licensed under the MIT License – use it freely, improve it proudly!
 - 
---

## 📌 Extra Tip:
-- You can modify the code to:

  - Add long press or auto-blink behavior

  - Replace serial with push-buttons

  - Add an OLED or LCD screen

