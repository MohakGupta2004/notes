1D and 2D both arrays stores in memory in a sequencial manner with a contigious memory block although at the case of 
1D array the elements stores sequencially contigious block, 2D array stores it in a row-wise or column wise manner.

row_major:
ADDRESS = BASE ADDRESS+(row_idx*colNo+col_idx)*sizeof(datatype)
column_major:
ADDRESS = BASE ADDRESS+(col_idx*rowNo+row_idx)*sizeof(datatype)
