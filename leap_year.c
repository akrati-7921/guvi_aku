# include<stdio.h>
void main() {
int n;
printf("Enter a year");
scanf("%d",&n);
if(((n % 4 == 0) && (n % 100 != 0)) ||(n % 400 == 0))
printf("Yes");
else
printf("No");
}
