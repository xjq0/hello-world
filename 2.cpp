#include<stdio.h>
int main() {
	int a=0,b=0,i=1;
	printf("����������a=");
	scanf("%d",&a);
    printf("����������b=");
	scanf("%d",&b);
	for(i=1;i!=0;)
	{
	i=a%b;
	a=b;
	b=i;}
	if(a==1)
	printf("a,b��������"); 
	else
	printf("a,b����������");
	return 0;
}
