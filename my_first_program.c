#include<stdio.h>
#include<conio.h>
void main()
{
    int profitMutton = 20 * 1400 / 100;
    int profitbeaf = 20 * 550 / 100;
    int profitChickenGloden = 20 * 520 / 100;
    int profitChickenWings = 20 * 220 / 100;
    int profitChickenLegs = 20 * 320 / 100;
    int profitChickenNeck = 20 * 160 / 100;
    int profitChickenMeat = 20 * 450 / 100;

    printf(" \n *****MEATSHOP***** \n ");
    printf("Mutton is 1400 per kg \n ");
    printf("beaf is 550 per kg \n ");
    printf("Chicken Gloden is 520 per kg \n ");
    printf(" Chicken Wings is 220 per kg \n ");
    printf("Chicken Legs is 320 per kg \n ");
    printf("Chicken Neck is 160 per kg \n ");
    printf("Chicken Meat is 450 per kg \n ");
    printf("\n press any key to see purchase rate \n");
    printf(" press any key to get exit \n");
    
    getch();

    // Purchase of each item
    printf(" \n *****PURCHASE RATE OF ALL ITEM***** \n\n");
    printf(" pruchase rate : Mutton = %d \n", 1400 - profitMutton );
    printf(" purchase rate : beaf = %d \n ", 550 - profitbeaf);
    printf(" purchase rate : Chicken Gloden = %d \n ", 520 - profitChickenGloden);
    printf(" purchase rate : Chicken Wings = %d \n", 220 - profitChickenWings);
    printf(" purchase rate : Chicken Legs = %d \n ", 320 - profitChickenLegs );
    printf(" purchase rate : Chciken Neck = %d \n ", 160 - profitChickenNeck);
    printf(" purchase rate : Chicken Meat = %d \n ", 450 - profitChickenMeat);
    printf("\n print any keys to check what he earns \n ");
    getch();

    printf("\n *****PROFIT OF EACH ITEM***** \n");
    printf(" profit of Mutton is : %d \n ", profitMutton);
    printf(" profit of beaf is : %d \n ", profitbeaf );
    printf(" profit of Chicken Gloden : %d \n ", profitChickenGloden);
    printf(" profit of Chicken Wings : %d \n ", profitChickenWings);
    printf(" profit of Chicken Legs : %d \n ", profitChickenLegs);
    printf(" profit of Chicken Neck : %d \n ", profitChickenNeck);
    printf(" profit of Chicken Meat : %d \n ", profitChickenMeat);
getch();
}