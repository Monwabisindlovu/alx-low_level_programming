Automatic memory allocation is done by the compiler at compile time, where memory is allocated to the variables when they are declared. The memory is released automatically when the program goes out of scope or the function is exited. This type of allocation is done for local variables, function parameters, etc.

Dynamic memory allocation is done during runtime, where memory is allocated and released by the programmer using pointers. The programmer can allocate memory using functions like malloc(), calloc(), and realloc(). This type of allocation is used when we don't know how much memory is needed at compile time or when we want to allocate or deallocate memory based on certain conditions.

The malloc() function is used to allocate memory dynamically at runtime. It takes the size of the memory to be allocated as an argument and returns a pointer to the first byte of the allocated memory. The memory allocated using malloc() is not initialized, and its contents are undefined.

The free() function is used to deallocate the memory previously allocated using malloc(). It takes the pointer to the allocated memory as an argument and frees the memory, making it available for reuse.
