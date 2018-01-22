# include<stdio.h>
void main(){
	int n,i,s=0,k,a[100];
	printf("Enter the total numbers");
	scanf("%d",&n);
	printf("Enter the number till where u want sum");
	scanf("%d",&k);
	printf("Enter the numbers");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++){
		s=s+i;
	}
	printf("%d",s);
}
