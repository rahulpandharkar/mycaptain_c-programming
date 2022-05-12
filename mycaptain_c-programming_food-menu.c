#include <stdio.h>
int main()
{
	int n; 
		do
	{
	printf("Hello there.\nEnter any number from 1 to 5 and get your lucky food-item\n");
	scanf("%d",&n); 
    switch(n)
	{
		case 1: 
		printf("Food Item : Pizza\nPrice : Rs.239"); 
		break; 
		case 2: 
		printf("Food Item : Burger\nPrice : Rs.129"); 
		break; 
		case 3: 
		printf("Food Item : Pasta\nPrice : Rs.179");
		break; 
		case 4: 
		printf("Food Item : French Fries\nPrice : Rs.99"); 
		break; 
		case 5: 
		printf("Food Item : Sandwich\nPrice: Rs.149");
		break; 
		default: printf("Invalid Choice, you can try again\n"); 
	}
}
	while (n!=1 && n!=2 && n!=3 && n!=4 && n!=5); 
		
	}

