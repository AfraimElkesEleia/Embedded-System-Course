#include <stdio.h>
int main(){
	int num;
	printf("Enter an integer number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	if(num<0){
		printf("Error !!! Factorial of negative number does not exist ");
		return 0;
	}
	int fact = 1;
	int i ;
	for(i = 1 ; i <= num ; i++){
		if(num == 0)
			break;
		fact *= i;
	}
	printf("Factorial = %d",fact);
	return 0;
}
