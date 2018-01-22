# include<stdio.h>
void main(){
	int n,i,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=100;i++){
		if(i%n==0)
		{
			printf("%d",i);
			c++;
		}
		if(c==5)
		break;
	}
}
