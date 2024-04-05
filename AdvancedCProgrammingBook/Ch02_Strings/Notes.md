- 1D array of characters is called string
- Every string terminates with '\0' character.
- '\0' is called null character.
Ex : char name[10] = "RAHUL";
- In the above example, name is an array of 10 characters.
- String is enclosed between double quotes.
- The null character is automatically added at the end of string by compiler and it is not necessary to add it explicitly.
- The null character is used to identify the end of string.But it is not counted towards length of string.
- So for given size of array, it can store one less length of string. In case of above example, name can only store a string of length 9.
- Size of string is necessary to mention if string is initialized at the runtime and array is mentioned, not the pointer.
- If string stored in array is smaller than the size of array, then remaining elements after null characters are undefined.
- If array is initialized with characters each one passed to array element, then null character is necessary to be  added at the end of string. Else it will not be considered as string.String functions won't work on such strings.
- Initilizationa and declaration of string in array form cannot be done separately.
for example :
```
char name[10];
name = "RAHUL"; // This is wrong
// it should be done as
char name[10] = "RAHUL";
```
- How to accept string from user?
    1. Character by character using %c format specifier. 
    - code snippet
    ```
    char name[10];
    int i = 0;
    for(i = 0; i < 9 ; i++)
    {
        scanf("%c", &name[i]);
    }
    name[i] = '\0';
    ```
    - here null character has to be added separately.
    2. Set of characters using %s format specifier.
    - code snippet
    ```
    char name[10];
    scanf("%s", name);
    ```
    - Here since name is array which can be considered as 1D pointer, so no '&' is required before name.
    - %s will accept characters till it encounters space, tab or newline.
    - When white space, tab or newline is encountered, it will add null character at the end of string.
    - So no need to add null character explicitly.
    Ex : If input is "Virat Kohli", then name will store "Virat" and null character will be added at the end.
    3. Using gets() function.
    - code snippet
    ```
    char name[10];
    gets(name);
    ```
    - As a set of characters usin %s, gets() will accept characters till it encounters newline character.
    - In string, set of characters are accessed as single entry. So no subscript operator can be used to manipulate string.
    - To access individual characters, we can use pointer.
    4. Using scanf with edit set conversion code '%[]'.
    - code snippet
    ```
    // If we want to accept only alphabets
    char name[10];
    scanf("%[a-zA-Z]", name);
    ```
    - The null character is automatically added at the end of string by compiler and it is not necessary to add it explicitly.
    - If we want to scanf to accept fixed number of characters, then we can mention it using field width modifier.
        scanf("%ws", name);
        Here w is the field width modifier.
    ```
    char name[10];
    scanf("%5s", name);
    ```
    - In the above example, scanf will accept only 5 characters and add null character at the end.Other characters if provided will be ignored.  

- How to print string?  
    1. Using %c and printf
    - code snippet
    ```
    char name[10] = "RAHUL";
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        printf("%c", name[i]);
    }
    ```
    - Here upto 10 characters are printed. If string has more than 10 characters, then it will print garbage values.
    - If string has less than 10 characters, then it will print till null character.
    - To print whole string till encountered null character, we can write code as
    ```
    char name[10] = "RAHUL";
    int i = 0;
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    ```
    2. using printf and %s
    - code snippet
    ```
    char name[10] = "RAHUL";
    printf("%s", name);
    ```
    - Here %s will print string till it encounters null character.
    - with %s , specifications can also be applied.
        1. %10s : 10 indicates that string will print 10 characters. If string has less than 10 characters, then it will print till null character.
        2. %10.4s : it indicates in field width of 10 columns, first 4 characters will be printed right justified.
        3. %-15s : it indicates that string will be left justified in 15 columns.If string is small, remaining columns will be filled with spaces.
        4. If field width is less than length of string, then string will be printed as it is.
    3. using puts() function.
    - This function will print string and take the function automatically to next line.
    - code snippet
    ``` 
    char name[10] = "RAHUL";
    puts(name);
    ```   

- String Name itself is base address of character array where string is stored. So if string name[10] = "VIRAT", and char* ptr = name, then ptr will point to 'V'. So pointers can be used to access string.
- String functions
| Function | Description |  
| :------: | :---------- |  
| strlen() | Returns length of string excluding null character |  
| strcpy() | Copies one string to another |  
| strcat() | Concatenates two strings |  
| strcmp() | Compares two strings |  
| strlwr() | Converts string to lower case |  
| strupr() | Converts string to upper case |   
| strrev() | Reverses the string |  
| strset() | Sets all characters of string to given character |  
| strnset() | Sets first n characters of string to given character |  
| strncpy() | Copies first n characters of one string to another |  
| strncat() | Concatenates first n characters of one string to another |  
| strncmp() | Compares first n characters of two strings |      

- strlen() function : 
    - returns number of characters of srting excluding null character.
    - code snippet
    ```
    char name[10] = "RAHUL";
    int length = strlen(name);
    printf("Length of string is %d", length);
    ```
    - Here length will be 5.
- strcpy() function :
    - One string cannot be assigned to another string using assignment operator in C as C treats string as array of characters.
    - strcpy() copies content of source string to destination string.
    - destination string, if have data, would overwrittn by source string.
    - function takes 2 arguments, fist destination string and second source string.
    - It is important to note that destination string should have enough space to store source string.
    - return value is destination string base address
    - char* strcpy(char* dest, const char* src);
    - code snippet
    ```
    char name[10];
    char name1[10] = "RAHUL";
    strcpy(name, name1);
    printf("Name is %s", name);
    ```
    - Here name will store "RAHUL".







