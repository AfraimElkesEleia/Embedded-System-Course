// C program to check whether a number is positive or negative
#include <stdio.h>
int main(){
float num ;
printf("Enter a number : ");
fflush(stdin);fflush(stdout);
scanf("%f",&num);
if(num == 0 ){
	printf("You entered zero");
	return 0;
}
(num>0)?printf("%0.2f is positive number",num):printf("%0.2f is negative number",num);
return 0;
}
