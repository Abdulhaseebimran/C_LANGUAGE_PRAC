#include<stdio.h>
#include<conio.h>
int main ()
{
    // 10, 100, 20, 200, 30, 300, 40, 400
    int a = 10 , c;
    top:
    printf("%d \t", a);
    printf("%d \t", a* 10);
    a += 10;
    if(a<=40){
          goto top;
    } else 
    goto end;
    end:
    return 0;

}