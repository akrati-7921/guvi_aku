# include<stdio.h>
void main() {
int n;
printf("Enter a number");
scanf("%d",&n);
if(n>1)
printf("Positive");
else
if(n==0)
printf("Zero");
else
printf("Negative");
}
