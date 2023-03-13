0x0B. C - malloc, free
malloc() is a function in the C and C++ programming languages that is used to dynamically allocate memory during program execution. The name stands for "memory allocation".

Here's how it works:

malloc() takes one argument, which is the number of bytes of memory to be allocated.
It returns a pointer to the first byte of the allocated memory block.
The memory allocated by malloc() is not initialized, so it can contain any arbitrary values until you explicitly set them.
If malloc() is unable to allocate the requested amount of memory, it returns a null pointer to indicate an error.

free() is a function in the C and C++ programming languages that is used to deallocate memory that was previously allocated using malloc(), calloc(), or realloc().

Here's how it works:

free() takes one argument, which is a pointer to the memory block that you want to deallocate.
When free() is called, the memory block that was previously allocated is marked as unallocated and can be reused by the system for other purposes.
Once a block of memory has been deallocated using free(), you should no longer use the pointer that previously pointed to that memory block.
