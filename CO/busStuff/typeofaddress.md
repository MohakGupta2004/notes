Single Accumulator Organization:
    Here instruction are performed in a way that the instructions 
will occur always in the Accumulator. Basically when the instruction
uses only one address field with each short instruction is called 
Single Accumulator Organization.

    example: LOAD X // AC<-M[x]
             ADD X // AC<-AC+M[X]
             STORE Y //M[Y] <-AC


General Register Organization :
    instructions use more no of registers to do a single operation.
The most accepted computer archietecture. Which brodens a single 
instruction but the no of instruction lines gets short. Works with
2 or 3 address.

    example: ADD  AC X Y
             in case of two address.
             ADD R1 R2


Stack Organization: 
    The operands are put into the stack and the operations performs 
on it can be determined by only the instruction of the operation. 
The operation will be performed on the top of the stack.

    example: ADD 




Quick math: C=A+B
=> 
// Three address
ADD C A B 
M[C] <- M[A] + M[B]

//Two address
MOV C A // M[C] <- M[A] 
ADD C B // M[C] <- M[C] + M[B]

//one address
LOAD A // AC <- M[A]
ADD B // AC <- M[B]
STORE C




Quick math 2: 
