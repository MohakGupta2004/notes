# 📌 Interrupts in 8085 Microprocessor

## 🔹 What is an Interrupt?

An **Interrupt** is a signal sent by an **I/O device** to the **processor** requesting its attention. When an interrupt occurs, the processor suspends its current operations and **executes a service routine (ISR)** to handle the request.

---

## 🔹 Types of Interrupts

### 1. **Hardware Interrupt**

* Triggered by external hardware devices like a **keyboard, mouse, or power failure**.
* Examples:
  `INTR`, `TRAP`, `RST 5.5`, `RST 6.5`, `RST 7.5`

---

### 2. **Software Interrupt**

* Triggered by software instructions (no physical signal).
* Has **higher priority** than hardware interrupts.
* Example:
  `RST n` (where n = 0 to 7)

---

### 3. **Vectored Interrupt**

* Has a **predefined memory address** (ISR location) in the **Interrupt Vector Table**.
* When such an interrupt occurs, control is transferred to its fixed ISR location.

📝 Example:
`RST 7.5` → Vector address: `003C H`

---

### 4. **Non-Vectored Interrupt**

* Does **not have a predefined ISR location**.
* The **external device** must provide the address of the ISR when the interrupt is acknowledged.
* Example:
  `INTR`

---

### 5. **Maskable Interrupt**

* Can be **disabled or ignored** using software instructions.
* Examples:
  `INTR`, `RST 5.5`, `RST 6.5`, `RST 7.5`

---

### 6. **Non-Maskable Interrupt**

* **Cannot be ignored** by software. Always gets serviced.
* Used for **critical conditions** (e.g., power failure).
* Example:
  `TRAP`, `NMI`

---

## 🔹 Interrupt Service Routine (ISR)

* A **subroutine** that is executed **automatically** when an interrupt occurs.
* The 8085 microprocessor:

  1. **Completes** the current instruction.
  2. **Pushes** the current Program Counter (PC) onto the **stack**.
  3. **Disables** further interrupts by resetting the **INTE flip-flop**.
  4. **Jumps** to the ISR location.

---

## 🔹 Software Interrupts (RST Instructions)

Software interrupts `RST n` (n = 0 to 7) each have **fixed ISR addresses**:

| Interrupt | Vector Address |
| --------- | -------------- |
| RST 0     | 0000H          |
| RST 1     | 0008H          |
| RST 2     | 0010H          |
| RST 3     | 0018H          |
| RST 4     | 0020H          |
| RST 5     | 0028H          |
| RST 6     | 0030H          |
| RST 7     | 0038H          |

* No physical connection needed.
* Often used in writing simple **subroutines** in small programs.

---

## 🔹 Summary

| Type         | Vectored | Maskable | Example                 |
| ------------ | -------- | -------- | ----------------------- |
| Hardware     | Yes/No   | Yes/No   | INTR, RST 5.5, TRAP     |
| Software     | Yes      | No       | RST 0 to RST 7          |
| Vectored     | Yes      | Yes/No   | TRAP, RST 7.5           |
| Non-Vectored | No       | Yes      | INTR                    |
| Maskable     | -        | Yes      | RST 5.5, 6.5, 7.5, INTR |
| Non-Maskable | -        | No       | TRAP                    |

