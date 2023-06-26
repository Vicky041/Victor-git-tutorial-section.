#include <stdio.h>

int result;
int result2 = 50;

int addNumbers(int num1, int num2)
{
    result = num1 + num2;
    return (result);
}

int main(void)
{

    int res = addNumbers(10, 9);
    printf("Result is: %d and result2 is: %d\n", res, result2);
    return (0);

}
