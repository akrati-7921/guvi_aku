# include<stdio.h>
void main(){
	int n,c=0,i;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			c++;
			break;
		}
	}
	if(c==1)
	printf("No");
	else
	printf("Yes");
}
