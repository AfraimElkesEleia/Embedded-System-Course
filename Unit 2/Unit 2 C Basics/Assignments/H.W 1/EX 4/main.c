//Write C Program to Find ASCII Value of a Character
#include "stdio.h"
int main(int argc , char **argv)
{
char c;
printf("Please Enter character : ")	;
fflush(stdout);fflush(stdin);
scanf("%c",&c);
printf("ASCII code of char (%c) is : %d",c,c);
return 0;
}

