#include<stdio.h>
#include<conio.h>
void main()
{
    float math = 69 , comp = 92 , english = 77 , urdu = 88 , physics = 80 , obtainedMarks , percentage;
    obtainedMarks = math+comp+english+urdu+physics;
    percentage = (obtainedMarks * 100) / 500 ;
    clrscr();

    printf(" \n *****MARKSHEET*****\n\n");
    printf(" NAME : ABDUL HASEEB \n");
    printf(" FATHER NAME : M.IMRAN\n");
    printf("math : %d \n ", math);
    printf("comp : %d \n ", comp);
    printf("english : %d \n ", english);
    printf("urdu : %d \n ", urdu );
    printf("physics : %d \n ", physics);
    getch();

}