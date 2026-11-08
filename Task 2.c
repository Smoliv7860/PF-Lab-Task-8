#include <stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=8,y=3;
	printf("X : %d\nY : %d",x,y);
	swap(&x,&y);
	printf("X : %d\nY : %d",x,y);
return 0;
}
