## 🔹 Microprocessor Units (8085)

The 8085 microprocessor consists of several key components that work together to execute instructions and process data efficiently.

---

### 1. 🔸 **ALU (Arithmetic Logic Unit)**

* Performs all **arithmetic (ADD, SUB)** and **logical (AND, OR, XOR)** operations.
* Operates on **8-bit data**.

---

### 2. 🔸 **General Purpose Registers**

* Six 8-bit registers: **B, C, D, E, H, L**.
* Can store **data or addresses** temporarily.
* **HL pair** is often used as a **memory pointer** to access RAM.

---

### 3. 🔸 **Accumulator**

* An 8-bit register used to **store operands and results** of ALU operations.
* Central to most **arithmetic and logical instructions**.

---

### 4. 🔸 **Program Counter (PC)**

* A **16-bit register** that holds the **address of the next instruction** to be executed.
* Automatically **increments after each instruction** fetch.

---

### 5. 🔸 **Stack Pointer (SP)**

* A **16-bit register** pointing to the **top of the stack**.
* Used for **temporary data storage**, subroutine handling, and **interrupts**.

---

### 6. 🔸 **Instruction Register (IR)**

* Holds the **opcode** of the **currently executing instruction**.
* The opcode is passed to the **instruction decoder** for execution.

---

### 7. 🔸 **Temporary Register**

* Used **internally by the ALU** to hold intermediate results during processing.
* **Not accessible** to the programmer.

---

### 8. 🔸 **Flag Register**

* A special register that contains **5 status flags** affected by ALU operations:

  * **S** – Sign flag
  * **Z** – Zero flag
  * **P** – Parity flag
  * **CY** – Carry flag
  * **AC** – Auxiliary Carry (not always listed)
* Reflects the **outcome of operations** (e.g., zero result, overflow).

---

### 9. 🔸 **Timing and Control Unit**

* Generates **control signals** for:

  * Instruction fetch
  * Memory Read/Write
  * I/O operations
* Synchronizes all **internal and external operations**.

---

### 10. 🔸 **Interrupt Control**

* Manages **interrupt requests** from external devices.
* Supports both **maskable and non-maskable interrupts**.

---

### 11. 🔸 **Serial I/O Control**

* Provides support for **1-bit serial communication**:

  * **SID (Serial Input Data)**
  * **SOD (Serial Output Data)**

---

### 12. 🔸 **Address and Data Buses**

* **Address Bus**: 16-bit unidirectional; used to **locate memory addresses** (up to 64KB).
* **Data Bus**: 8-bit bidirectional; used to **transfer actual data**.
