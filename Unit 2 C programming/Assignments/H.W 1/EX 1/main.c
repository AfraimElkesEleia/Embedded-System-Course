//Write C Program to Print a Integer Entered by a User
#include <stdio.h>
int main(){
int num;
printf("Enter a Integer : ");
fflush(stdin);fflush(stdout);
scanf("%d",&num);
printf("You Entered : %d",num);
return 0;
}
