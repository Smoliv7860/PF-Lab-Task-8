#include<stdio.h>
#include<ctype.h>
int main()
{
   const char arr[]="Hello World 2026";
   int up=0,low=0,digits=0,spaces=0;
   const char *ptr = arr;
   for ( int i = 0; *(ptr+i)!= '\0'; i++)
   {
    if (isupper(*(ptr+i)))
    {
        up++;
    }
    else if (islower(*(ptr+i)))
    {
        low++;
    }
    else if (isdigit(*(ptr+i)))
    {
        digits++;
    }
    else if (isspace(*(ptr+i)))
    {
        spaces++;
    }
   }
   printf("%d\t %d\t %d\t %d ",up,low,digits,spaces);
   return 0;

}
