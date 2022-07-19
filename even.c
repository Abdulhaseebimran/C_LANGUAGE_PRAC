#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x = 2;
    top:
    printf("%d, ",x);
    printf("%d ", (x*10)+1);
    x+=1;
    if(x<=6)
     goto top;
     else 
     exit ;
     return 0;
}