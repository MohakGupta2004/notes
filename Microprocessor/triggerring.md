# 🔔 Interrupt Triggering: Level vs Edge

## 🔹 What is Triggering?

Triggering refers to **how** an interrupt is **recognized** by the processor — either by sensing a **constant voltage level** or by detecting a **change (transition)** in the signal.

---

## ✅ Level Triggered Interrupt

* The **interrupt signal** is considered **active as long as** it stays at a particular **logic level** (LOW or HIGH).
* The processor keeps detecting the signal **until it is deactivated**.
* If the level remains active too long, it may **repeatedly trigger** the interrupt.

### 📌 Example:

* `INTR` (in 8085) is **level triggered**
* It must be held **low** until acknowledged by the processor.

### 🧠 Use Case:

* Good for **slow devices** that can keep the signal active until service is received.

---

## ⚡ Edge Triggered Interrupt

* The interrupt is triggered only at the **moment of signal transition**:

  * **Rising Edge** (0 → 1) or
  * **Falling Edge** (1 → 0)
* Only the **edge (change)** is detected, **not the duration** of the signal.

### 📌 Examples in 8085:

| Interrupt | Trigger Type                                   |
| --------- | ---------------------------------------------- |
| RST 7.5   | **Rising edge triggered**                      |
| RST 6.5   | Level triggered                                |
| RST 5.5   | Level triggered                                |
| TRAP      | Both edge & level triggered (dual sensitivity) |

### 🧠 Use Case:

* Ideal for **fast devices** that can generate quick pulses.

---

## 🧾 Summary Table

| Feature           | Level Triggered         | Edge Triggered          |
| ----------------- | ----------------------- | ----------------------- |
| How it works      | Constant signal level   | Change in signal (edge) |
| Signal duration   | Must stay active        | Only transition matters |
| Repeated triggers | Possible if not cleared | One-time trigger        |
| Example (8085)    | INTR, RST 5.5/6.5       | RST 7.5                 |
| Best for          | Slow I/O devices        | Fast I/O or sensors     |

