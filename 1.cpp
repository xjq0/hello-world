#include<stdio.h>
int main(){
	int a,b,x,y,i;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	for(i=1;x!=0||y!=0;)
	{
		i++;
	    x=i%a;
	    y=i%b;
	} 
	printf("a,b最小公倍数i=%d",i);
	return 0;
}
