## Implicit Mode:
Some operations doesn't need external operands, like 
using zero address often we see that there are no operands so this is
what we call Implicit mode of addressing. 
Example: CLA (clears the accumulator), PUSH (stack push data top on
the stack).


## Immediate Mode:
In the instruction format there is no address specified the operand 
is directly specified there. This is called Immediate mode.
Example: ADD #7

## Direct Mode:
The address field has a effective address field where the actual address of 
the operand is specified.
Example: ADD A

## Indirect Mode:
The address field has the address where the effective address of the operand 
is stored. It stores the address of the effective address.
Example: ADD @A or ADD (A) // AC<-AC+M[M[A]]

## Register Mode:
The operand is stored in the register. Means the address field store the address
of the register.
Example: ADD R1 R2

## Register Indirect Mode:
The address field stores the address which is pointing to the effective address of 
the register. 
Example: ADD (R1), R2 // M[R1] <- M[R1]+ R2

## Auto increment and Auto decrement:
Similar to Register Indirect mode. The value of the register is incremented after 
after it is used in memory.
The value of the register is decremented before it will be used in the memory is called
auto decrement.
Example: ADD R1 (R2)+ // 1. R1 = R1 + M[R2] 2. R2 = R2+1
         ADD R1 -(R2) // 1. R2 = R2-1 2. R1 = R1+M[R2]


## Displacement Addressing:
Few addressing modes requires to add some value to the address field to get the content
of register in the CPU.
EA = A + (R) A is the value (R) is a register holds the displacment.

## Relative addressing:
Add the address part with the PC to get the effective address.
EA = PC + A
example: LOAD $A or LOAD A(PC)

## Indexed addressing: 
The content of the register is derived by adding the address part with 
the index register. 
EA = A + XR
example: ADD R1, 10(R2) // R1 = R1+M[20+R2]
usage: index address used to access arrays.
## Base Register addressing:
The address part is added to the base register to get the effective address of the register.
EA = Ri + A
example: ADD R1, 20(R2) // R1 = R1 + M[20+R2]
usage: relocation of programs.
