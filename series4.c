#include<stdio.h>
#include<conio.h>
int main ()
{
    // 2, 21, 3, 31, 4, 41, 5, 51, 6, 61
    int a = 2, b = 21, c;
    top:
    printf("%d \t", a);
    printf("%d \t", b);
    a+=1;
    b+=10;
    if(a<=6){
        goto top;
    } else 
    goto end;
    end:
    return 0;
}