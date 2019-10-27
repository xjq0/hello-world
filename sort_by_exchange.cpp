//Ωªªª≈≈–Ú
#include <stdio.h>
int main() {
  int x[3],i,n;
  while(1) {
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(n=0;n<2;n++){
        for(i=0;i<2;i++) {
            if( x[i] > x[i+1]) {
  	            int temp = x[i];
  	            x[i] = x[i+1];
  	            x[i+1] = temp;
            }
       }
    }
    printf("%d %d %d", x[0], x[1], x[2]);
  }
  return 0;
}
