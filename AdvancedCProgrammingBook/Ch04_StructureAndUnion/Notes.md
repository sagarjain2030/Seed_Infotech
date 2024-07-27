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
  ```
   saveAcc* ps = newList;
   ps->custname = "Sagar";
   ps++; //ps will point to next structure element
  ```
- Nested Structure:
  - One structure can be part of another structure with which hierarchy of structures can be created
  ```
  struct address
  {
    char phone[15];
    char city[20];
    int pin;
  }

  typedef struct
  {
    int custId;
    char custName[50];
    float balAmount;
    struct address addr;
  }saveAcc;
  ``` 
  - In such cse, the structure included in another structure must have definition before enclosing structure.
  - The members of nested structure can be accessed with an additional dot operator 
  - The nested structures are used to create more complex datatypes.
- Dynamica memory allocation for structure:
  - Structure memory can be allocated dynamically 
  ```
  saveAcc* pS;
  int number;
  printf("Enter number of customers: ");
  scanf("%d", &number);
  pS = (saveAcc*)malloc(number * sizeof(saveAcc));
  ``` 
  - pS would have dynamically allocated memory of size (number * sizeof(saveAcc))
- Union:
  - Unions are similar to structure as both are used to group number of different types of data.But unlike structure , union stores different data types in same memory space(not simultaneously)
  - Size  of union is size of it's largest data types.
  - Unions are used where we need to hold mixture of data types in some order which is not known in advanced.
  ```
  union tag
  {
    daatype1 member1;
    daatype2 member2;
    .
    .
    .
    daatypen membern;
  }unionVariable;
  ``` 
  - union elements are accessed with dot (.) operator or arrow(->) if it's pointer to union.
  - In union, all member are stored at same memory location., so pointer points directly to member variable initialized.
  - Data members of union may be structures and structures may have union as data member.
  - Similar to structure, union have same operations like accessing union members, taking address, assignment of entire union variable to another union variable
  - Union helps in production of independent machine code as compiler keeps track of actual size of variables.
- Enum:
  - The enumerated type is a user defined type used to declare symbolic names to represent integer constants 
  - By using enum keyword, a new <strong>type</strong> can be created and values it may have can be specified.
  - Purpose of enum is to make program more readable.
  - By convention values are written in capital and constant assigned are integer 0,1,2 and so on.
  ```
  enum tag {value1, value2,...,valuen};
  enum tag
  {
    value1= some_constant;//(say 100)
    value2;
    value3 //and so on. Here value2 will have value 101 and value3 will have value 102.
  }
  ``` 
  - Enum variables are particularly useful as flags to indicate various options or to identify various conditions.