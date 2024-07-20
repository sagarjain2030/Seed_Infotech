- Structure:
  - Array can store only elements with same type.But we may want to group different types.
  - One way to do is to handle multiple arrays, each for different types while keeping indices of an entity same.But with increasing amount of data and multiple operations of data, it is difficult to handle.
  - This problem can be resolved by using structure. So structure is a user defined type data type. It is convinient way to group several pieces of related information together. 
  - The characteristics/attributes of relation are structure members.
  - Structures are useful, not only because they can hold different types of variables but also because they can form base for more complex constructions like linked list.
  - Structure definition :
    ```
    structure <structure type name>
    {
      data_type member_1;
      data_type member_2;
      .
      .
      .
      data_type member_n;
    };
    ```
  - Structure type name is name used to define structure so that it's variable can be created.
  - Definition ends with semicolon.
  - Each member is declared with it's own data type and unique name within structure.
  - members cannot be initilized inside structure definition.
  - In large program, structures usually defined in header files.
  - Structure definition/declaration acts as a template.To use structure, structure variable must be created.
    ```
    struct <structure type name> variable_1;
    ```
  - Memory allocated for each structure variable is sume of bytes required by all it's members.
  - Structure variables can be defined at the time of definition.So if variable1 is a structure variable then 
    ```
    struct <structure type name> variable_1 = {member1, member2, ... member n};
    ```
  - Structure variables can also be defined in structure type definition after '}' but before ';'
    ```
    structure <structure type name>
    {
      data_type member_1;
      data_type member_2;
      .
      .
      .
      data_type member_n;
    }variable1;
    ``` 
  - Members of struct variables can be accessed using dot(.) operator if structure variable is normal variable. They can be accessed using arrow(->) operator if structure variable is pointer. 
- Typedef:
  - Using typedef, a new name can be assigned to an existing data type or to a complex data type.
  - Only new names can be provided to builtin or already defined/created user defined data types.
  - Typedef does not create any new datatype.
  - Variables can only be created using the new name after typedef has been established.
  typedef type new_name
  ```
  typedef int numerical;
  numerical x = 1;
  ```   
  - Typedef is useful in case of structure, as it eliminates repeated use of struct tag while defining variables.
  ```
  typedef struct 
  {
    int custId;
    char custName;
    float balAmt;
  }saveAcc s1,s2;
  saveAcc s3;
  ``` 
  - Here s1 and s2 are structure variables of struct which is given new name of saveAcc using typedef. When we are creating s3, we don't need to add struct tag. but simply using new name saveAcc, we can define s3.
  - Typedef resolves portability issues of code for running on different machines.
  - It also provides better readability in program and other documentation.
  - Tow variables of same structure type can be copied in same way as ordinary variables. If p1 and p2 are variables of same structure type and
  p1 = {1, 2};
  p2 = p1 // then it means p2 = {1,2};
  - Here it seems that entire structure is getting copied to another structure but remember, member wise copy take place; where the values of each member are copied bit by bit.
  - Any logical operations on structures is not permitted in C. But in C++, by using concept of overloading logical operations can be performed on structures.
- Pointer to Structure:
  - Like pointer to variable , pointer to structurecan also be discussed,but in this case , pointer points to entire structure.
  ```
  saveAcc s1;
  saveAcc *ps;
  ps = &s1;
  ps->custName;
  ps->balAmt;
  // This way, we can pass only base address of structure 
  // and still can access all data members of it.
  ```   
  - Structure data members are accessed using arrow (->) operator.
- Passing structure to a function can be done in 3 ways:
  1. Individual members of structures are passed:
     - Similar to normal parameter passing.
     - It defeats the very purpose of using structure.  
  2. Structure is passed as pass by value:
     - It is necessary to return structure again as it would be then copied to original structure.
     - Else operations performed on structure members will not be reflected back in to original structure. 
  3. Pointer to base address of structure can be passed as pass by address:
     - Instrad of passing an entire structure, which can be huge, it is better to pass it by address.
     - This will also remove requirement of returning the structure as any operations performed on structure members are performed directly on original structure members.
- Array of structure:
  - Array of structure works similar to array of built in types.
  ```
  structure_name array_name[number_of_elements]
  ```
  - Array elements i.e. structures can be accessed using index of array and members with dot operator.
  ```
  ex. saveAcc saveAccArray[10];
  saveAcc newList[3] = {
                          {101, "Rohit", 1500.00},
                          {102, "Virat", 2000.0},
                          {103,"Hardik", 1550.0}};
  printf("%s",newList[1].custName) //Virat
  ```
  - Also array can be accessed using pointer



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
- Accepting a 2D array
```
for(row = 0; row < noOfRows ; row++)
  {
    for(col = 0; col < noOfCols; col++)
    {
      scanf("%d", &fdAmt[row][col]);
    }
  }
```
- Displaying a 2D array
```
for(row = 0; row < noOfRows ; row++)
  {
    for(col = 0; col < noOfCols; col++)
    {
      printf("%d", fdAmt[row][col]);
    }
  }
```
- Passing 2D array to function
  - 2D array can be passed to function in 2 ways:
    1. Subscript method:
    ```
    int main()
    {
      int fdAmt[0][2],noofcustomers;
      // intialize data
      disp(fdAmt, noofcustomers);
    }
    void disp(int fdAmt[][2], int num)
    {
      // display data
      for(row = 0; row < num ; row++)
      {
        for(col = 0; col < 2; col++)
        {
          printf("%d", fdAmt[row][col]);
        }
      } 
    }
    ```
    2. Pointer method:
    ```
    int main()
    {
      int fdAmt[0][2],noofcustomers;
      // intialize data
      disp(*fdAmt, noofcustomers);
    }
    void disp(int (*fdAmt)[2], int num)
    {
      // display data
      for(row = 0; row < num ; row++)
      {
        for(col = 0; col < 2; col++)
        {
          printf("%d", fdAmt[row][col]);
        }
      } 
    }
    ```
- Passing 2D array to function using pointer method is more efficient as it does not require to pass the number of columns.
- Here *fdAmt is a pointer to ana array of 2 integers.
- Since subscript [] has higher precedence than *, so 
  - if we have (*fdAmt)[2] --> it will give 2nd element of 0th row i.e. fdAmt[0][2].
  - if we have *fdAmt[2] --> it will give 0th element of 2nd row i.e. fdAmt[2][0].
- Dynamic memory allocation:
  - Size of array is fixed, thus either insufficient memory or wastage of memory can happen.
  - For 1D array, we must know size/number of elements and for 2D array , we must know at least number of rows.
  - To overcome this, we can use dynamic memory allocation.
  - Allocating memory at run time is called dynamic memory allocation.This memory is allocated from heap memory.
  - malloc(), calloc() and realloc() are used for dynamic memory allocation.
  - function free() is used to deallocate the memory allocated dynamically.
- Malloc:
  - It returns a pointer of type void to the starting location of the block of memory allocated.
  - void* malloc(size of each element * number of elements);
  - This allocated a block of memory  = size of each element * number of elements.
  - If memory cannot be allocated or insufficient memory is available, it returns NULL.
  - Ex. int *p;
        p = (int*)malloc(5 * sizeof(int));
        Here the return pointer provided by malloc in tyoe casted to int*.
- Calloc:
  - It is similar to malloc. The space of each element is initialized to binary zero.
  - void* calloc(size of each element, number of elements);
  - This allocates space for an array of elements, each occupying size of element bytes of memory.
  - Calloc instead of single chunk of storage, handles array of elements all intialized to zero.
  - Ex. int *p;
        p = (int*)calloc(5, sizeof(int));
- Realloc:
  - This function is used to append new memory to the existing memory block.
  - void* realloc(void* ptr, size_t size);
  - This function changes size of spaces allocated to ptr by amount size.
  - This new memory could be adjacent to the existing memory or could be allocated entirely at different location, depending on availability of memory.
  - If new memory block is allocated, content of existing block is copied to new block bit by bit to new block.
- Free:
  - Free frees specified memory block to be used for another purpose.
  - This must have pointer spcified by calloc, malloc or realloc.    
- It is responsibility of programmer to free dynamically allocated memory. If not done then there will be memory leakage.
- Do not allocate & deallocate memory in loop, as it is time consuming.
- Array of pointers:
  - In many cases of 2D array, only one dimension is known. So array of pointers is used in such cases.
  - Here remember,
    1. [] has higher precedence than *
    2. Number of second dimension length is accepted from user.
    3. Memory is allocated on heap.
    ```  
    #define RowSize 3
    int main()
    {
      int *pFdAmount[RowSize], i = 0, row = 0, col = 0, colSize;
      for(i = 0; i < RowSize; i++)
      {
        pFdAmount[i] = (int*)malloc(colSize * sizeof(int));
        // Here ColSize is user input accepted before in program.
        // Perform operation on pFdAmount
        for(i = 0; i < RowSize; i++)
        {
          free(pFdAmount[i]);
        }
      }
    }
    ```
  -  Here, pFdAmount is array of pointers on Stack but each pointer has memory allocated on heap.
  -  ![Array of Pointers](ArrayofPointers.jpg)
- Pointer to pointer:
  - pointer to pointer holds address of another pointer
  ```
  int **ptop;
  int number1 = 10;
  int *p;
  p = &number1;
  ptop = &p;
  ``` 
  - Here, ptop is on stack.
    - (*ptop) = *(*(2896)) = *(1000) = 10
  - ![Pointer to Pointer](ptop.jpg)
  - Sometimes sizze of row and columns both are unknown at compile time. In such cases, memory needs to be allocated using pointer to pointer.
  - ![Pointer to Pointer](pointerToPointer.jpg)
  ```
  int **pTop, noofRows, noofCols;
  int row, col;
  pTop = (int**)malloc(noofRows * sizeof(int*));
  for(row = 0; row < noofRows; row++)
  {
    pTop[row] = (int*)malloc(noofCols * sizeof(int));
  }
  for(row = 0; row < noofRows; row++)
  {
    for(col = 0; col < noofCols; col++)
    {
      scanf("%d", pTop[row] + col);
    }
  }
  for(row = 0; row < noofRows; row++)
  {
    for(col = 0; col < noofCols; col++)
    {
      printf("%d", *(*(pTop + row) + col));
    }
  }
  for(row = 0; row < noofRows; row++)
  {
    free(pTop[row]);
  }
  free(pTop);
  ```
  - Dynamic memory allocation for strings
    - malloc, calloc and realloc can be used to allocated memory dynamically to string i.e. 1D character array
    - The pointer returned by this function must be typecasted to char*.
    ```
    char* acceptNames(char* pNames)
    {
      char temp[15];
      printf("\nEnter a string:");
      gets(temp);
      pNames = (char*)malloc(strlen(temp) + 1);
      strcpy(pNames, temp);
      return pNames; 
    }
    int main()
    {
      char *pNames;
      pNames = acceptNames(pNames);
      printf("\nEntered string is %s", pNames);
      free(pNames);
    } 
    ```
- 2D array of characters:
  - 2D array of characters is nothing but array of strings.Here number of strings are stored in contiguous memory location. This can be done as follow
  ```
  char custName[5][20] = {"Rajesh", "Ramesh", "Suresh", "Mahesh", "Naresh"};
  ```
- Code to accept and display strings:
```
  char custName[5][20];
  int i;
  for(i = 0; i < 5; i++)
  {
    printf("\nEnter name:");
    gets(custName[i]);
  }
  for(i = 0; i < 5; i++)
  {
    printf("\nName is %s", custName[i]);
  }
  ```
- 2D array and array of pointers:  

| 2D Array | Array of pointers |  
| :------: | :----------------:|
| Char custName[10][20]; | char* custNames[10] |
| no. of bytes reserved = 10*20 = 200 | no. of bytes reserved = 10*2 = 20 |
| Wastage of memory if names are smaller than 20 characters | No wastage of memory as memory allocated dynamically based on size of each name |

```
void acceptNames(char** names)
{
  int num, i;
  char temp[25];
  printf("\nEnter number of names:");
  scanf("%d", &num);
  names = (char**)malloc(num * sizeof(char*));
  for(i = 0; i < num; i++)
  {
    printf("\nEnter name:");
    fflush(stdin);
    gets(temp);
    names[i] = (char*)malloc(strlen(temp) + 1);
    strcpy(names[i], temp);
  }
}
```