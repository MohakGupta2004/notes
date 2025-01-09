To store it efficiently in memory we use ways to store only the elements other than 0 and stores the coordination
of it.

Compressed Sparse Row: 
    It stores the values of non zero elements and is useful for row-wise operations.
Compressed Sparse Column:
    It stores the values of non zero elements and is useful for colwise operations.
Coordination list:
    stores the row indices the values and the column incdices inside it.
Dictionary key:
    stores the values along with the coordination in a pair of values format.
