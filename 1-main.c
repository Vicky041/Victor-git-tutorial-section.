#include <stdio.h>

int main(void)
{
int num = 87;
int *ptr_num = &num;

printf("The value of num before dereferencing is: %d\n", num);

*ptr_num = 109;

printf("The value of num after dereferencing is: %d\n", num);

return 0;
}
