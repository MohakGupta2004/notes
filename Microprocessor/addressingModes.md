## 🔹 Addressing Modes in 8085

An **addressing mode** defines **how the operand (data)** is specified in an **instruction**.

> 📌 An instruction typically has:
>
> * **Opcode**: Operation to perform
> * **Operand**: The data to operate on

---

### 🔸 1. Immediate Addressing Mode

* ✅ **Operand (data)** is specified **directly** in the instruction.
* 📘 **Example**: `MVI B, 33H`
  → Move 33H into register B.

---

### 🔸 2. Direct Addressing Mode

* ✅ The **address of the operand** is given in the instruction.
* 📘 **Example**: `LDA 6000H`
  → Load the contents of memory address **6000H** into the accumulator.

---

### 🔸 3. Indirect Addressing Mode

* ✅ Address of the operand is stored in a **register pair** (usually BC, DE, or HL).
* 📘 **Example**: `LDAX D`
  → Use DE register pair as a **pointer**, load data from that address into the accumulator.

> 🔎 If:
>
> * D = 60H
> * E = 02H
>   Then `LDAX D` loads the content of memory at **6002H** into A.

---

### 🔸 4. Register Addressing Mode

* ✅ Operand is stored in a **register**, and operation is performed between registers.
* 📘 **Example**: `MOV B, C`
  → Copy contents of register C into register B.

---

### 🔸 5. Implicit (Inherent) Addressing Mode

* ✅ The operand is **implied** by the instruction itself.
* 📘 **Example**: `CMA`
  → Complement the contents of the accumulator (A); no explicit operand.

