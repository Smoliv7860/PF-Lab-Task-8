#include<stdio.h>
int divide(int a, int b, int *result)
{
    if (b == 0 || result == NULL)
    {
        return -1;
    }
    *result = a / b;
    return 0;
}
int main()
{
    int result;
    int status;
    status = divide(10, 2, &result);
    if (status == 0)
        printf("Result = %d\n", result);
    else
        printf("Division failed\n");
    status = divide(10, 0, &result);
    if (status == 0)
        printf("Result = %d\n", result);
    else
        printf("Division failed\n");
    status = divide(10, 2, NULL);
    if (status == 0)
        printf("Result = %d\n", result);
    else
        printf("Division failed\n");
    return 0;
}
