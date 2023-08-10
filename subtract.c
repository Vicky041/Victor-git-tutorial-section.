#include <stdio.h>
#include <unistd.h>

int main(void)
{
int a = 10;
int b = 5;
pid_t ppid;
int sum = a - b;
printf("the sum is %d\n", sum);

ppid = getppid();
printf("the ppid is %u\n", ppid);

return 0;
}
