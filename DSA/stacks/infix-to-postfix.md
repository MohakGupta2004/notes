while ch in exp:
    if(ch == operand):
        push(postfix)
    else if(ch == "("):
        push(stack)
    else if(ch == ")"):
        while(stack != "("):
            pop(stack)
    else if(ch == "+" || "-"||"*"||"/"||"^"):
        while(the stack is not empty and precedence of the top >= ch):
            pop(stack)
    else:
        push(stack)
while stack isn't empty:
    pop(stack)

