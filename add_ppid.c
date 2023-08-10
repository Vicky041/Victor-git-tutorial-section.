#include <stdio.h>
#include <unistd.h>

int main(void)
{
int a = 3;
int b = 5;
int sum = a + b;
pid_t ppid;
printf("sum is %d\n", sum);
ppid = getppid();
printf("my ppid is %u\n", ppid);
return 0;
}
