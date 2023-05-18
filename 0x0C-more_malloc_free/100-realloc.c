#include <stdlib.h>
#include "main.h"
/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previsouly allocated with a call to malloc
* @old_size: in bytes of the allocated space for ptr
* @new_size: in bytes of new size of the new memory block
* Return: ptr if new_size == old_size
* Null if new_size is equal to zero
* and ptr is not NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr2;
char *ptr1;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr2 = malloc(new_size);
if (!ptr2)
return (NULL);
ptr1 = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
ptr2[i] = ptr1[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr2[i] = ptr1[i];
}
free(ptr);
return (ptr2);
}
