

````markdown
# 🚗 RC Car using Arduino UNO + Bluetooth (HC-05)

A simple and effective Bluetooth-controlled RC Car built using Arduino UNO, HC-05 module, and DC motors. The car can move **forward**, **backward**, **left**, and **right** using smartphone or PC-based Bluetooth terminal apps.

---

## 🎥 Demo Video

📺 [Watch the car in action on YouTube](https://www.youtube.com/shorts/igFHinVpDXU)

---

## 🔧 Hardware Used

| Component         | Description                         |
|------------------|-------------------------------------|
| Arduino UNO       | Brain of the car                   |
| HC-05 Module      | Bluetooth module for wireless control |
| L298N Motor Driver| Controls 4 DC motors               |
| 4× DC Motors      | For car movement                   |
| Battery Pack      | To power motors & Arduino          |
| Chassis           | Basic car frame (4-wheel)          |

---

## 🧠 Features

- 📱 Bluetooth-based control (use any serial Bluetooth app)
- 🛣️ 4 Directional Movements:
  - Forward
  - Backward
  - Turn Left
  - Turn Right
- 💡 Easy to assemble and code
- 🔋 Battery-powered mobility

---

## 💻 Software

- **Platform**: Arduino IDE
- **Code File**: `rc_car.ino`
- **Baud Rate**: 9600 (configured for HC-05)

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/rc-car.git
cd rc-car
````

### 2. Upload Code

Open `rc_car.ino` in Arduino IDE and upload it to your Arduino UNO board.

### 3. Wiring Setup

| Arduino Pin    | Connected To                       |
| -------------- | ---------------------------------- |
| D2-D5          | Motor driver inputs                |
| 5V, GND        | HC-05 & Motor driver               |
| RX, TX         | HC-05 TX, RX (via voltage divider) |
| External Power | Motors via L298N                   |

*(Include wiring diagram image if available)*

---

## 📱 How to Control

Use any **Bluetooth Terminal App** or design your own using MIT APP Inventor

### Commands

| Command | Action     |
| ------- | ---------- |
| `F`     | Forward    |
| `B`     | Backward   |
| `L`     | Turn Left  |
| `R`     | Turn Right |

---

## 📁 Project Structure

```
rc-car/
├── rc_car.ino          # Main Arduino sketch
├── README.md           # Project documentation
```



## 🧑‍💻 Author

Made with ❤️ by [Hardik Jain](https://github.com/Hardik450)

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

