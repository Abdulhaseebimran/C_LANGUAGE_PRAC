       #include<stdio.h>
        int main () {
      char name [50] , gender[30];
      float height;
      int  age;
 
 printf("Enter  name :");
scanf("%c", &name);

printf("Enter Gender: ");
scanf("%c",&gender);

printf("Enter height :");
scanf("%f", &height);

printf("Enter age :");
scanf("%d", &age);

printf("Your name is %c\n", name);
printf("Your gender is %c\n", gender);
printf("Your age is %d \n ", age);
printf("Your height is %f\n\n ", height);
//getch();
return 0;
  
}

