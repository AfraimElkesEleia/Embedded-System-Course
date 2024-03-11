//C program to check vowel or consonant
#include <stdio.h>
int main(){
char c;
printf("Enter an alphabet : ");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
int ascii = c;
if((ascii >=65 &&ascii<=90)||(ascii >= 97 && ascii <=122)){
switch(c){
case 'a':case'e':case'i':case'o':case'u':
case 'A':case 'E':case'I':case'O':case'U':
	printf("%c is a vowel",c);
	break;
default:
	printf("%c is a consonant",c);
}
}
else
	printf("This is not alphabet character");
return 0;
}
