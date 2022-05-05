#include<stdio.h>
int sum_of_digits(int);

int main()
{
	int n, s; 
	printf("Enter a number whose sum is to be found: ");
	scanf("%d",&n); 
	s = sum_of_digits(n); 
	printf("Sum of the digits of the number %d are\n %d", n, s); 
	
 } 

int sum_of_digits(int n)
{
	if(n==0)
	return 0; 
	return ((n%10) + sum_of_digits(n/10));
}
