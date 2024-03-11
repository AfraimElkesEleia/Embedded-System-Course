//C program to check whether a Number is even or odd
#include <stdio.h>
int main(){
	int num;
	printf("Enter an Integer you want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num %2 == 0 )
		printf("%d is even number",num);
	else
		printf("%d is odd number",num);
}
