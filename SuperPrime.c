//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int main(){
    	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,M=0,n=10001,i=100,k=0;
    	float x=0,y=0;
    	while(i<n&&i!=10000){
    		m=2,k=0; 
    		while(m<i){
    			a=i%m;
    			if(a==0){
    			    k++,m++;
    			    break;
    			}
				else{
					m++;
				}
			}
			if(k==0){
				m=2;
				c=i/1000,d=(i-c*1000)/100,e=(i-c*1000-d*100)/10,f=i%10,h=c;
				g=c+d+e+f;
				if(g==1){
				    k++;
				} 
				else{
            		while(m<g){
            			a=g%m;
            			if(a==0){
            			    k++,m++;
            			    break;
                			}
	    		    	else{
	    		    		m++;
	    	    		}
    	    		}
    	    	}
    		}
	    	if(k==0){
	    		m=2,c=h;
    			g=c*c+d*d+e*e+f*f;
           		while(m<g){
           			a=g%m;
            		if(a==0){
            		    k++,m++;
            		    break;
            		}
	        		else{
	        			m++;
	    	    		}		
      	    		}
    		}
    		if(k==0){
    			M=M+i;
    			b++;
    			printf("%d\n",i);
			}
				i++;
	}
	x=(float)M,y=(float)b;
		printf("个数为%d，和为%d，平均数为%f",b,M,x/y);
	return 0;
}
