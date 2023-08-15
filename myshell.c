#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>


#define BUFFER_SIZE 256

void shell(void)
{
char buffer [BUFFER_SIZE];
while (1)
{
printf("Vicky_says");

if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
{
printf("Road block take the next exit");
break;
}
buffer[strcspn(buffer, "\n")] = '\0';
pid_t pid = fork();
if (pid < 0)
{
fprintf(stderr, "fork failed");
continue;
}
else if (pid == 0)
{
execlp(buffer, buffer, NULL);
fprintf(stderr, "command '%s' not available\n", buffer);
exit(EXIT_FAILURE);
}
else
{
int status;
waitpid(pid, &status, 0);
}
}
}

int main()
{
shell();
return 0;
}
