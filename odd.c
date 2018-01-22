# include<stdio.h>
void main(){
	int a,b,i,c=0;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++){
		if(i%2!=0)
		{
		printf("%d",i);
		c++;	
		if(c==2)
		break;
	}
	}	
}
