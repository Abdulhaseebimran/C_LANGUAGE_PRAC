#include<stdio.h>
#include<conio.h>
int main()
{
    char name[7]= "Haseeb";
    char domain[12]= "@smiu.edu.pk";
    int code = name[0]+name[1]+name[2]+name[3]+name[4];

    printf("Your name code is : %d\n", code);
    printf("Your education email is : %d%s\n" , name,domain,code);

    return 0;

}