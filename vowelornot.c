#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
printf("It is vowel");
break;
default:
printf("It is a consonant");
break;
}
return 0;
}
