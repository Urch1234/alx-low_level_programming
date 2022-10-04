TASK ON MALLOC AND FREE

0. WRITE A FUNCTION THAT CREATES AN ARRAY OF CHARS, AND INITIALIZES IT WITH A SPECIFIC CHAR.
- PROTOTYPE: char *create_array(unsigned int size, char)
- Returns NULL if size = 0
- Returns a pointer to the array, or Null if it fails

1. WRITE A FUNCTION THAT RETURNS A POINTER TO A NEWLY ALLOCATED SPACE IN MEMORY, WHICH CONTAINS A COPY OF THE STRING GIVEN AS A PARAMETER.
- PROTOTYPE: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the -strup function returns a pointer to the duplicated string. it returns NULL if sufficient memory was available

2. WRITE A FUNCTION THAT CONCATENATES TWO STRINGS
- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string
- The function should return NULL on failure

3. WRITE A FUNCTION THAT RETURNS A POINTER TO A DIMENTIONAL ARRAY OF INTEGERS.
- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

4. WRITE A FUNCTION THAT FREES A 2 DIMENSIONAL GRID PREVIOUSLY CREATED BY YOUR ALLO_GRID FUNCTION.
- Prototype: void free_grid(int **grid, int height);
- Note that we will compile with your alloc_grid.c file. Make sure it compiles.


