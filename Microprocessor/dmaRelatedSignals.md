## 🔹 DMA (Direct Memory Access)

**DMA** allows **I/O devices** to transfer data directly to/from **memory** without involving the **8085 microprocessor** during the transfer.

---

### 🔸 Steps of DMA Operation:

1. The **I/O device** sends a **data transfer request** to the **DMA controller**.
2. The **DMA controller** sends a **HOLD** signal to the **8085**, requesting control of the buses.
3. After completing the current instruction, the **8085 responds with HLDA (Hold Acknowledge)** and **releases**:

   * **Address Bus**
   * **Data Bus**
   * **Control Bus**
4. The **DMA controller** now performs the data transfer directly between memory and I/O.
5. After the transfer is done, the **DMA controller removes the HOLD signal**, and the **8085 regains control** of the buses.

---

### 🔸 HOLD Signal

* **Direction**: Input pin (signal goes **into** the microprocessor).
* **Used by**: DMA controller to request control of buses.
* Routed to the **Control Unit (CU)** of the 8085.

---

### 🔸 HLDA (Hold Acknowledge)

* **Direction**: Output pin (signal goes **out** from the microprocessor).
* Indicates the **8085 has released the buses**.
* Sent from the **Control Unit (CU)** to the DMA controller.

---

## 🔹 Other Important Control Signals

### 🔸 RESET IN (Input)

* If set to **0**, it resets the 8085.
* The **Program Counter (PC)** is cleared to **0000H**.

---

### 🔸 RESET OUT (Output)

* Used to reset **external I/O devices** connected to the system.

---

### 🔸 CLK OUT (Clock Out)

* 8085 operates at a **high frequency** (e.g., 3 MHz).
* **I/O devices** are slower, so 8085 provides a **lower-frequency clock** via this pin to **synchronize external devices**.
* The signal is **generated internally** using a **crystal oscillator** connected to pins **X1 and X2**.

---

### 🔸 READY (Input)

* If **READY = 1** → I/O device is **ready to communicate**.
* If **READY = 0** → I/O device is **not ready**, so the microprocessor **waits** (inserts wait states).
