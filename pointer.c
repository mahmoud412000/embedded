#include <stdio.h>
int main()
{
    int x = 10;
    printf(" value = %d\n", x);
    printf(" address = %p\n", &x);
    int *ptr = &x;
    printf("Pointer = %p\n", ptr);
    printf("ptr+1=%p\n",ptr+1);
    printf("ptr-1=%p\n",ptr--);
    printf("ptr++=%p",ptr++);
    return 0;
}