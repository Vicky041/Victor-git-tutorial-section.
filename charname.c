#include <stdio.h>

int main(void)
{
char name[50] = "precious";

name[1] = 'W';
name[5] = 'R';
name[7] = 'Z';

printf("%s", name);

return (0);

}
