//C program to calculate sum of natural number
#include <stdio.h>
int main(){
unsigned int num;
printf("Enter an integer number : ");
fflush(stdout);fflush(stdin);
scanf("%d",&num);
int i;
int sum = 0 ;
for( i = 1 ; i <= num ; i++)
 	sum += i;
printf("Sum = %d",sum);
}
