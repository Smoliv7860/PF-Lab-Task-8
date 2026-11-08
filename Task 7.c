#include<string.h>
#include<stdio.h>
int main()
{
    char arr1[]="nu2026",arr2[7];
    printf("Enter the code:\n");
    scanf("%s",arr2);
    int r=strcmp(arr1,arr2);
    if (r==0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }

    if (strncmp(arr2, "nu", 2) == 0)
    {
        printf("Code starts with nu\n");
    }
    else
    {
        printf("Code does not start with nu\n");
    }

}
