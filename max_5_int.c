//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include<stdio.h>
int main(){
	int a=0,b=0,c=0,d=0,m=0,x[5],y[5];
	scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	while(d<5){
        m=x[d],a=0,b=0,c=0;
        while(a<5){
   	        if(m<x[a]){
    		    b++;
	    	}
		    if(m==x[a]&&d!=a){
		        c++;
		    }
		    a++;
	    }
	    if(c==0){
	        y[b]=m;
		    d++;
		}
		if(c==1){
		    y[b]=m,y[b+1]=m; 
		    d++;
		}
		if(c==2){
		    y[b]=m,y[b+1]=m,y[b+2]=m; 
		    d++;
		}
		if(c==3){
		    y[b]=m,y[b+1]=m,y[b+2]=m,y[b+3]=m; 
		    d++;
		}
		if(c==4){
		    y[b]=m,y[b+1]=m,y[b+2]=m,y[b+3]=m,y[b+4]=m;
		    d++;
		}
	}
   	printf("%d%d%d%d%d",y[0],y[1],y[2],y[3],y[4]);
	return 0;
} 
