//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
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
