# include<stdio.h>
void main(){
	int n,r,a,s=0;
	printf("Enter a number");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(a==s)
	printf("Yes");
	else
	printf("No");
}
