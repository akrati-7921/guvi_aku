# include<stdio.h>
void main(){
	int a,b,i;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++){
		if(i%2==0)
		{
		printf("%d",i);
		}
	}	
}
