#include<stdio.h>
int checkForPrime(int);
int i;

int main()
{

    int n1,primeNo;
	printf("Enter a number to check whether it is a prime number or not: ");
    scanf("%d",&n1);
    
    i = n1/2;

    primeNo = checkForPrime(n1);

   if(primeNo==1)
        printf("The entered number %d is a prime number",n1);
   else
      printf("The number %d is not a prime number",n1);
   return 0;
}

int checkForPrime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         checkForPrime(n1);
      }
}
