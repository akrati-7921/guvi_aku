# include<stdio.h>
# include<math.h>
void main(){
	int n,r,a,s=0;
	printf("Enter a number");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		r=n%10;
		s=s+pow(r,3);
		n=n/10;
	}
	if(a==s)
	printf("Yes");
	else
	printf("No");
}
