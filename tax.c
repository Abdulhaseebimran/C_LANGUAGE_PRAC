#include<stdio.h>
#include<conio.h>
int main()
{
    float BS=15000 , A1=BS*10/100 , A2=BS*20/100 , Gr=BS+A1+A2 , Tax=Gr*17.5/100 , Net=Gr-Tax;

    printf("\n ******SALARY OF MR HASEEB******\t");
    printf("\nBasic Salary : %.2f", BS);
    printf(" \nAllowance 1 : %.2f", A1);
    printf(" \nAllowance 2 : %.2f", A2);
    printf(" \nGross Value : %.2f ", Gr);
    printf(" \nTax : %.2f ", Tax);
    printf(" \nNet : %.2f ", Net );
    getch();
}