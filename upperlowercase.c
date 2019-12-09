#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch>=65&&ch<=90)
printf("It is upper case alphabet");
else if(ch>=97&&ch<=122)
printf("It is lower case alphabet");
else if(ch>=48&&ch<=57)
printf("It is a digit");
else
printf("It is a special character");
return 0;
}
