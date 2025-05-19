## 🌀 Machine Cycle in 8085

A **machine cycle** is the time required by the microprocessor to access memory or I/O devices **to read/write a byte of data**.

* 🔸 It consists of **3 to 6 T-states** (where one T-state = one clock cycle).
* 🔸 Multiple machine cycles combine to form an **Instruction Cycle**.
* 🔸 An **Instruction Cycle** is the **total time to execute one complete instruction**.

> 📌 One Instruction Cycle = One or More Machine Cycles

---

### 🔷 Types of Machine Cycles

---

### 1. **Opcode Fetch Machine Cycle**

Fetches the **opcode** (first byte) of an instruction and begins decoding.

* ✅ Always the **first machine cycle** of any instruction.
* 🔸 Takes **4T or 6T** depending on the instruction.

📌 **6T Opcode Fetch Instructions**:

* `CALL`, `RET`, `RESTART`
* `INX`, `DCX`
* `SPHL`, `PCHL`
* `PUSH`

⏱️ **F = 4T or 6T**

---

### 2. **Memory Read Machine Cycle (R)**

Reads **8-bit data** from memory (other than opcode).

📘 Example: Reading an operand or data
⏱️ **R = 3T**

---

### 3. **Memory Write Machine Cycle (W)**

Writes **8-bit data** into memory (other than opcode).

📘 Example: `STA 6000H`
⏱️ **W = 3T**

---

### 4. **I/O Read Machine Cycle (I)**

Reads **8-bit data** from an **I/O port**.

📘 Used in instructions like `IN port_address`
⏱️ **I = 3T**

---

### 5. **I/O Write Machine Cycle (O)**

Writes **8-bit data** to an **I/O port**.

📘 Used in instructions like `OUT port_address`
⏱️ **O = 3T**

---

### 6. **Bus Idle Machine Cycle (B)**

* During specific instructions, the processor **doesn't use the system bus** (Address/Data/Control).
* Processor is internally busy (e.g., performing addition of 16-bit registers).

📘 Only used in: `DAD` instruction
⏱️ **B = 3T**

---

### 🧠 Summary Table

| Machine Cycle    | Purpose                         | Duration |
| ---------------- | ------------------------------- | -------- |
| Opcode Fetch (F) | Fetch and decode instruction    | 4T / 6T  |
| Memory Read (R)  | Read data from memory           | 3T       |
| Memory Write (W) | Write data to memory            | 3T       |
| I/O Read (I)     | Read from I/O port              | 3T       |
| I/O Write (O)    | Write to I/O port               | 3T       |
| Bus Idle (B)     | Bus remains idle (e.g., in DAD) | 3T       |

