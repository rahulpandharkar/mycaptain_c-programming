#include <stdio.h>
int main() 
{ 
int marks; 
int flag = 0; 
do
{
printf("Welcome to Bit Elementary School\n************************************\nEnter your marks to recieve a grade\n");
scanf("%d",&marks); 
if(marks<101 && marks >84)
{
printf("Grade A"); 
flag = 0;
}
else if(marks >69 && marks <85)
{
printf("Grade B");
flag = 0;
}
else if(marks >54 && marks <70)
{
printf("Grade C");
flag = 0;  
}
else if(marks >39 && marks <55)
{
printf("Grade D"); 
flag = 0; 
}
else if(marks <40)
{
printf("Grade F");
flag = 0; 
}
else 
{
flag = 1; 
printf("Invalid Input, please try again.\n"); 
}
}
while (flag !=0);
}
