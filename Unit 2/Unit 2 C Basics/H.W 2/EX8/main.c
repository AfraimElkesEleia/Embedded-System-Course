#include <stdio.h>
int main(){
	char c ;
	float num1 , num2;
	printf("Enter two operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands : ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f",&num1,&num2);
	float result = 0;
	switch(c){
	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
		result = num1 * num2;
		break;
	case'/':
		result = num1/num2;
		break;
	default:
		printf("Error !!! this is not arithmetic operator");
		return 0;
	}
	printf("%0.2f %c %0.2f = %0.2f",num1,c,num2 , result);
return 0;
}
