# include<stdio.h>
# include<math.h>
void main(){
	int m,n,r,a,i,s=0;
	printf("Enter two intervals");
	scanf("%d%d",&m,&n);
	for(i=m+1;i<n;i++){
		a=i;
		while(a!=0){
		r=a%10;
		s=s+pow(r,3);
		a=a/10;
	}
	if(s==i)
	printf("%d",i);	
	s=0;
 }
}
