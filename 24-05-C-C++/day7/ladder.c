/*wap to perform simple with logical operator*/
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);

	if(a>b && a>c)
	{
	printf("a is bigger...");	
	}
	else if(b>c)
	{
		printf("b is bigger..");
	}
	else{
		printf("c is bigger..");
	}
	
}