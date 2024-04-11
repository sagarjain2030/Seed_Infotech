- Two dimensional array is also array of arrays.
- [storage class] datatype array_name[row_size][column_size]
- row_size and column_size are constants and must be positive integer.
  Ex. int fdAmt[10][5]
Here fdAmt is an array of 10 elements where each element itself is an array of 5 integers.
- So if we want to access any element of 3rd element of fdAmt, it can be done as fdAmt[2][0], fdAmt[2][1], fdAmt[2][2], fdAmt[2][3], fdAmt[2][4].
- If 2D array is defined and initialized at same time , row size becomes optional.
- Different ways to initialize and define 2D arrays:   
  1. int fdAmt[2][2] = {101,5000,500,1000};
  2. int fdAmt[2][2] = {{101,5000},{500,1000}};
  3. int fdAmt[][2] = {{101,5000},{500,1000}};
- Remember , memory does not containe rows and columns.
- The 2D array and as matter of fact,  any array is stored in contiguous memory locations.
- Arays can be stored Rowwise (Row Major) or Columnwise(Column Major).
- Both Row and Column are zero indexed i.e. they are indexed from zero to maxsize -1. So to access any element in 2D matrix,  2 index variables are ncessary.
- The problem with such matrix/array is, if number of elements stored in array are less than actual size of array, rest of memory locations are remained unutilised and thus are wasted.
- Array can also be accessed using pointers , so if we want 2nd element of 3rd row, it can be accessed as *(*(fdAmt + 2) + 1).
- Here, 
  - *(fdAmt + 2) --> gives the address of 3rd row
  - *(fdAmt + 2) + 1 --> gives the address of 2nd element of 3rd row
  - *(*(fdAmt + 2) + 1) --> gives the value of 2nd element of 3rd row
- The above expression can also be written as fdAmt[2][1].
- 