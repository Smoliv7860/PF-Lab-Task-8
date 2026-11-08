#include<stdio.h>
#include<string.h>
int main()
{
    char sub[5][20];
    int longest=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Subject %d:",i+1);
        fgets(sub[i],sizeof(sub[i]),stdin);
        sub[i][strcspn(sub[i], "\n")] = '\0';
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
         if (strlen(sub[i]) > strlen(sub[longest]))
        {
            longest = i;
        }
        printf("%d. %s\n",i+1,sub[i]);
    }
        printf("\nLongest subject: %s\n", sub[longest]);
    return 0;   
}
