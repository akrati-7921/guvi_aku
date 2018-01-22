# include<stdio.h>
void main() {
char n;
printf("Enter a character");
scanf("%c",&n);
if((n>='a' && n<='z') || (n>='A' && n<='Z'))
printf("Alphabet");
else
printf("No");
}
