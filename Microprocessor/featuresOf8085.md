## 🔹 Intel 8085 Microprocessor Overview

The **Intel 8085** is an **8-bit microprocessor** built using **NMOS technology**. It operates with a **single +5V power supply** and is housed in a **40-pin dual in-line package (DIP)**. It was widely used in early computers and educational microcontroller kits.

---

### 🔸 Key Features:

1. **Data Bus Width**:
   → 8-bit (can handle 8-bit data at a time)

2. **Address Bus Width**:
   → 16-bit (can address up to **64KB** of memory)

3. **Clock Speed**:
   → Operates at **3 MHz**

4. **Instruction Set**:
   → Contains **74 instructions** and **246 opcodes**

5. **Registers**:
   → **6 general-purpose registers**: B, C, D, E, H, L
   → **Accumulator** and **Flag register**

6. **Arithmetic Logic Unit (ALU)**:
   → Supports operations like **ADD, SUB, AND, OR, XOR**
   → **No multiplication or division** instructions

7. **Flags**:
   → **Sign (S)**
   → **Zero (Z)**
   → **Auxiliary Carry (AC)**
   → **Parity (P)**
   → **Carry (CY)**

8. **Stack Support**:
   → Includes a **16-bit Stack Pointer** for stack operations

9. **Program Counter (PC)**:
   → Holds the **address of the next instruction** to be executed

10. **Interrupts**:
    → Supports **5 hardware interrupts**:

* **TRAP** (non-maskable)
* **RST 7.5**
* **RST 6.5**
* **RST 5.5**
* **INTR**

11. **Instruction Cycle**:
    → Based on **Machine Cycles** and **T-States**

12. **DMA Support**:
    → **Not built-in**
    → Requires **external DMA controller** for Direct Memory Access

13. **I/O Handling**:
    → Has **8-bit I/O address bus**
    → Can support **up to 256 I/O ports**

---

### 🔸 Applications:

Used in early computer systems and widely adopted in **microprocessor trainer kits** for educational purposes due to its simplicity and historical importance.

