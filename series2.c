#include<stdio.h>
#include<conio.h>
int main ()
{
    // 1 , 10, 2, 9, 3, 8, 4, 7, 5, 6, 6, 5
    int a = 1, b = 10, c;
    top:
    printf("%d,", a);
    printf("%d,", b);
    a += 1;
    b -= 1;
    if((a<=10)&&(b<=10)){
    goto top;
    } else
    goto end;
    end:
    return 0;
}