//Write Source Code to Swap Two Numbers
#include <stdio.h>
int main(){
int a , b;
printf("Enter value of a : ");
fflush(stdin);fflush(stdout);
scanf("%d",&a);
printf("Enter value of b : ");
fflush(stdin);fflush(stdout);
scanf("%d",&b);
int temp = a;
a = b;
b = temp;
printf("After swapping, value of a = %d \r\n",a);
printf("After swapping, value of a = %d",b);
}

