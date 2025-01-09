Linkedlist allow dynamic memory allocation which makes it more flexible and modifiable.
You can insert and delete data from it easily.
No tension of fix size. easy traversal

disadvantage:
    slower access and memory overhead.

ALGO:
sparse_matrix_into_triples(M)
1. Create an empty array.
2. find the no of rows and columns.
3. for i every row:
    for j every column
        if(M[i][j]!=0):
            push i,j into the empty array.

