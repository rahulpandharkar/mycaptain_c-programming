#include <stdio.h>
#include <stdlib.h>
 int i; 
typedef struct
{
    char name[30];
    int age, phone;
    double salary;
	
} 
Employee;
 
int main()
{
	FILE *fp; 
    
    int n=20;;
 Employee employees[n];
 printf("Welcome to Employee Structure\n**********************\n");
   printf("Enter %d Employee Details \n \n",n); 
    
    for(i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        //Phone Number
         printf("Phone Number: ");
        scanf("%d",&employees[i].phone);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("**************** All Employees Details ****************\n");
    for(i=0; i<n; i++)
	{
    	
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phone Number \t: ");
        printf("%d \n",employees[i].phone);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
       
 
        printf("\n");
       
    
}
 
    return 0;
    
}
