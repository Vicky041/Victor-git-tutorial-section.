#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
int i;
/*
argv looks like this
char *argv[] = {"./cmd_line_args", "coding", "is", "fun", NULL};
*/

printf("argc: %d\n", argc);

for (int i = 0; argv[i] != NULL; i++);
printf("argv[%d]: %s\n", i, argv[i]);

return 0;
}
