Functions of ALU:
- Arithmetic: ADD, SUB, INR, DCR
- Logical: AND, OR XOR, COMPARE, COMPLEMENT
- Bitwise: Logical shifting and rotation

Working:
Alu receives data from the Acc and other registers like B,C
Stores the value back into Acc and changes the flag register.

Internal Components of ALU (Simplified):
Adder/Subtractor Circuit
➤ Performs addition and subtraction using 2’s complement logic.

Logic Unit
➤ Performs bitwise operations like AND, OR, XOR, NOT.

Flag Register Interface
➤ Sets or resets flags based on result.

Temporary Register
➤ Used internally to hold intermediate results.
