#include <stdio.h>
int main()
{
	int a,b; 
	printf("Enter First Number to be stored in variable 'a'\n");
	scanf("%d",&a);
	printf("Enter Second Number to be stored in variable 'b'\n");
	scanf("%d",&b); 
	a = a+b; //sum of both numbers stored here
	b = a-b;//subtraction of new "a" - b
	a = a-b; //subtraction of new "a" - new "b"
	//Thus the numbers of two variables are swapped using their sum and difference.
	
	printf("The numbers after swapping are\n");
	printf("Variable a = %d\n",a);
	printf("Variable b = %d",b); 
	
	
}
