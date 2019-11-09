//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
int main(){
	int i=0,m=0,n=2,k=1,a=0,b=0;
	while(1){
		a=n; 
		while(a!=0){
			b=a%10;
			a=a/10;
			if(b==1){
				k++;
			}
		}
		if(k==n){
			printf("%d\n",n);
			break;
		}
		else{
			n++;
		}
	}
	return 0;
} 
