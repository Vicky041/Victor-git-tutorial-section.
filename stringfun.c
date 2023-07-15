#include <stdio.h>
#include <string.h>

int main()
{

char string1[] = "precious";
char string2[] = "Osemeke";

strlwr(string1);
strupr(string2);

printf("%s\n", string1);
printf("%s\n", string2);

return 0;

}
