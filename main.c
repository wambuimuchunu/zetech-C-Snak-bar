/*
Zetech C Snack bar
created by DIT-01-8689/2021
 C89 compiler
 MIT lincense
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{  int item;
printf("\tToday`s Menu\n");
printf("1. Chips - Ksh 100\n");
printf("2. Milkshake - Ksh 150\n");
printf("3. Sausege - Ksh 40\n ");
printf("4. Hamburger - Ksh 350\n");
printf("5. Coffee - Ksh 80\n");
printf("Enter Item No: ");
scanf("%d",&item);
if(item > 0 && item<= 3){
    printf("item added to cart\n");
}
else{
        printf("Invalid item\n");
        menu();


}

    return item;
}
