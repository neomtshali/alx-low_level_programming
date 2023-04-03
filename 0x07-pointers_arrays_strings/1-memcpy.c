#inlcude "main.h"
/**
*mempcy -is a function that copies a memory area
@dest: pointer to destination array where content is copied to
@src: pointer to source data to be copied
@n: number of bytes to be copied
*
*return: copied memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r]	= stc[r];
n--;
}
return (dest);
}
