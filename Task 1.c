#include <stdio.h>
int main()
{
	int age=20;
	int *p=&age;
	printf("age:%d",age);
	printf("\nage using pointer : %d",*p);
	printf("\nage after increment using pointer : %d",*p+1);
	
return 0;
}
