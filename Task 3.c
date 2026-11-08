#include <stdio.h>

int main()
{
    int arr[5]={4,9,2,7,5};
    int *p=arr; 

    int sum = 0;
    int largest = *p;
    int i;
    for (i=0;i<5;i++) {
        sum += *p;
        if(*p > largest){
            largest = *p;
        }
        p++;
    }

    printf("Sum : %d\n",sum);
    printf("Largest number : %d\n",largest);

return 0;
}

