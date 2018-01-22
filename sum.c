# include<stdio.h>
void main(){
	int n,s=0,i;
	printf("Enter the number from where u want sum");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+i;
	}
	printf("%d",s);
}
