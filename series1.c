#include<stdio.h>
#include<conio.h>
int main()
{
    // 1,2,3,5,8,13,21,34 
    int a = 1, b = 2 , c;
    top:
    if(a<=34){
        printf("%d\t", a);
     c = a + b;
     a = b;
     b = c;
     c += 1;
     goto top;
    } else 
    goto end ;
    end :
    return 0;
}