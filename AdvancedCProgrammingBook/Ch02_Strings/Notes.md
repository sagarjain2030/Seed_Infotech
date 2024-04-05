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