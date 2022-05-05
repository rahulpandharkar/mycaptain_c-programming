#include<stdio.h>
int main()
{
	printf("Enter the number of stairs: "); 
	int n; 
	scanf("%d", &n); 
	int i, j; 
	for(i=1; i<=n; i++)
	{
		for(j=0; j<2*i; j++)
		printf("%d", j%2); 
		printf(" "); 
	}
}
