#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char password[100000], pass[100000], retry, new_user, response, response_to_close, name[100], city[100], number[10000];
int i,j, choice, account_number, random, reply, response_to_withdraw_deposit;
double balance =0, deposit_amount, withdraw_amount; 
FILE *fp; 
void menu()
{
	do 
	{
printf("Hey, welcome to your personal bank management system\n**************************\n");

	printf("Choose the following option: \n\n"); 
	printf("1: Account Information\n2: Deposit/Withdraw\n3: Sign Out\n4: Exit\n");
	scanf("%d", &reply); 
	if(reply == 1)
	{
		system("cls");
		printf("Here is your account Information: \n\n"); 
		

			fp = fopen("name.txt", "r");
			fscanf(fp, "%s", &name); 
			printf("Name : %s\n", name);
			fclose(fp);  
			fp = fopen("city.txt", "r");
			fscanf(fp, "%s", &city);
			printf("City: %s\n", city);
			fclose(fp); 
			fp = fopen("mobile_number.txt", "r");
			fscanf(fp, "%s", &number); 
			printf("Mobile Number: %s\n", number);
			fclose(fp); 
			fp = fopen("account_number.txt", "r");
			fscanf(fp, "%d", &random); 
			printf("Account Number is: %d\n", random);
			fclose(fp); 
			fp = fopen("balance.txt", "r");
			fscanf(fp, "%lf", &balance);
			printf("Balance is: %lf Rupees\n", balance);
			fclose(fp);
			printf("\n\n"); 
			menu();  
		
		
		}
		else if(reply ==2)
		{
			printf("Press 1 to deposit\nPress 2 to Withdraw\n"); 
			scanf("%d", &response_to_withdraw_deposit);
			switch(response_to_withdraw_deposit)
			{
				case 1: 
				printf("Enter the amount to deposit: "); 
				scanf("%lf", &deposit_amount); 
				printf("Amount deposited sucessfully\n");
				balance += deposit_amount;
				break; 
				
				case 2: 
				printf("Your balance is %lf Rupees, enter withdraw amount: ", balance); 
				scanf("%lf", &withdraw_amount);
				if(withdraw_amount>balance)
				{
					printf("Balance exceeded, withdraw failed.\nRedireting you to the main menu...\n\n");
				 } 
				 else
				 {
				 	printf("Amount withdrawn sucessfully\nRedirecting you to the main menu...\n\n"); 
				 	balance-= withdraw_amount; 
				 }
				 break; 
			}
			
			fp = fopen("balance.txt","w");
			fprintf(fp,"%lf", balance); 
			fclose(fp); 
		}
		else if(reply==3)
		{
			break; 
		}
		else if(reply==4)
		{
			printf("Goodbye"); 
			exit(0); 
		}
}
while(reply!=5);

	}
void password_check()
{
		do
		{	
		printf("Enter your account number: \n"); 
		fp = fopen("account_number.txt", "r");
		fscanf(fp, "%d",&random);
fclose(fp); 
		scanf("%d", &account_number);
	
	
		if(account_number == random)
		{
			break;
		}
		else
		{
		printf("Invaid Account Number, try again\n"); 
	    }
	}
	while(account_number!=random);
	printf("Enter Password: ");
	fp = fopen("password.txt", "r"); 
	for(i=0;i<1;i++)
	{
		fscanf(fp, "%s", &pass[i]);
		scanf("%s", &password[i]); 
	}
	fclose(fp);
	if(strcmp(pass, password)==0)
	{
		system("cls");
		printf("Passwords matched\n");
		menu();
	}
	else
	{
		printf("Passwords did not match, try again\n"); 
		password_check(); 
	}
	
}
void account_creation()
{
	
system("cls"); 
printf("Hey new user, welcome to creating your account\n");
printf("Enter your name: ");
fp = fopen("name.txt", "w"); 
for(i=0;i<1;i++)
{ 
scanf("%s", &name[i]);
fprintf(fp, "%s", &name[i]); 
}
fclose(fp);
printf("Enter your city: ");
fp = fopen("city.txt", "w");
for(i=0;i<1;i++)
{ 
scanf("%s", &city[i]);
fprintf(fp, "%s", &city[i]);
}
fclose(fp); 
printf("Enter your mobile number: "); 
fp = fopen("mobile_number.txt","w");
for(i=0;i<1;i++)
{ 
scanf("%s", &number[i]);
fprintf(fp, "%s", &number[i]); 
}
fclose(fp);
printf("Create an account number (maximum 4 digits): "); 
scanf("%d", &random);
fp = fopen("account_number.txt","w"); 
fprintf(fp, "%d", random);
fclose(fp); 
printf("Enter a password for your account: ");
for(i=0;i<1;i++)
{ 
scanf("%s", &pass[i]);
fp = fopen("password.txt", "w"); 
fprintf(fp, "%s", &pass[i]);
fclose(fp);
}
system("cls"); 
printf("Your account is sucessfully created\nRedirecting you to the login....\n");
password_check();
}
void main()
{
	do
	{
	system("cls"); 
	printf("New User? (Y/N): "); 
	scanf("%c", &new_user); 
	if(new_user == 'Y' || new_user == 'y')
	{
		account_creation(); 
	}
	else if(new_user == 'N' || new_user == 'n')
	{
	password_check();
	}
	else
	printf("Invalid Input, try again\n");

}
while(new_user != 'Y' || new_user != 'y' || new_user != 'N' || new_user != 'n');
menu();
}









