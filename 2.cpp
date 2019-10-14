#include<stdio.h>
int main() {
	int a=0,b=0,i=1;
	printf("请输入数字a=");
	scanf("%d",&a);
    printf("请输入数字b=");
	scanf("%d",&b);
	for(i=1;i!=0;)
	{
	i=a%b;
	a=b;
	b=i;}
	if(a==1)
	printf("a,b两数互质"); 
	else
	printf("a,b两数不互质");
	return 0;
}
