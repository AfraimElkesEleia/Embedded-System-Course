// C program to check whether a character is alphabet or not
#include <stdio.h>
int main(){
char c;
printf("Enter a character : ");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
int ascii = c;
((ascii >= 65 && ascii <=90) || (ascii>=97 && ascii <= 122) )?
		printf("%c is an alphabet",c)
		:printf("%c is not alphabet",c);
}
