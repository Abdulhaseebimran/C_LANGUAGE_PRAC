#include<stdio.h>
#include<conio.h>
int main()
{
float nm1,nm2;
char op,choice;
top:
printf("Enter 1st number: ");
scanf("%f", &nm1);
printf("Enter 2nd number: ");
scanf("%f", &nm2);
printf("Enter Operator: ");
scanf(" %c", &op);
if(op=='+')
{
printf("Result=%f\n", nm1+nm2);
}
else if(op=='-')
{
printf("Result=%f\n", nm1-nm2);
}
else if(op=='*')
{
printf("Result=%f\n",nm1*nm2);
}
else if(op=='/')
{
printf("Result=%f\n", nm1/nm2);
}
else
{
printf("\nInvalid Operator\n\n");
}
printf("If you want to continue then press Y otherwise press N: ");
scanf(" %c", &choice);
if(choice=='y')
{
goto top;
 }
else if(choice=='n')
{
goto end;
}
end:
return 0;
}

