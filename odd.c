#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x = 1;
    top:
    printf("%d,",x);
    printf("%d,", (10-x)+1);
    x+=1;
    if(x<7)
     goto top;
     else 
     exit ;
     return 0;
}