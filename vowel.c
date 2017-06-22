#include<stdio.h>
void main()
{
char ch;
scanf("%c",ch);
islower=(ch==a||ch==e||ch==i||ch==o||ch==u);
isupper=(ch==A||ch==E||ch==I||ch==O||ch==U);
if(islower||isupper)
printf("character is vowel");
else
printf("character is consotant");
}
