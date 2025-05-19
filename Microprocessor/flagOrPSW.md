# 🔹 PSW (Program Status Word)

The **Program Status Word (PSW)** is a **16-bit register pair** that combines:

* The **Accumulator (8 bits)**
* The **Flag Register (8 bits)**

So:

```
PSW = [ Accumulator | Flag Register ]
```

This pair is used during **stack operations** like `PUSH PSW` or `POP PSW` to store or retrieve both the accumulator and flag values simultaneously.

---

## 🔸 Flag Register (8-bit)

The **Flag Register** indicates the outcome of arithmetic or logical operations through **status flags**. Each flag is a **1-bit flip-flop** that is set (`1`) or reset (`0`) based on the result.

### 🧠 Bit Layout:
```
Diagram: 
| Sign (S) | Zero (Z) | x | Auxiliary Carry (AC) | X | Parity | X | Carry (CY)|
   7           6        5          4               3       2    1        0
```

| Flag                     | Bit | Meaning                             |
| ------------------------ | --- | ----------------------------------- |
| **S** (Sign)             | 7   | Set if result is negative (MSB = 1) |
| **Z** (Zero)             | 6   | Set if result is zero               |
| **-**                    | 5   | Unused                              |
| **AC** (Auxiliary Carry) | 4   | Set if carry from D3 → D4           |
| **-**                    | 3   | Unused                              |
| **P** (Parity)           | 2   | Set if result has even number of 1s |
| **-**                    | 1   | Unused                              |
| **CY** (Carry)           | 0   | Set if carry out of MSB             |

---

### 🔸 Flag Descriptions:

#### ✅ Carry Flag (CY)

* Set if **addition** or **subtraction** causes a **carry out from D7**.
* Example: `FFH + 01H = 100H → CY = 1`

#### ✅ Parity Flag (P)

* Set if the **number of 1s** in the result is **even**.
* Cleared if **odd**.
* Example: `Result = 0x0F (00001111) → P = 1` (even parity)

#### ✅ Auxiliary Carry (AC)

* Set if there is a **carry from D3 to D4**, used in **BCD operations**.
* Example: `0x09 + 0x01 = 0x0A → AC = 0`, but `0x0F + 0x01 = 0x10 → AC = 1`

#### ✅ Zero Flag (Z)

* Set if the result of an operation is **zero**.
* Example: `0x80 + 0x80 = 0x00 (with carry) → Z = 1`

#### ✅ Sign Flag (S)

* Reflects the **MSB (D7)** of the result.
* Set if MSB is **1**, meaning result is **negative** in 2’s complement.

