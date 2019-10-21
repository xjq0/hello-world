//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    float n = 0;
    n = m - x;
    if (n<=0.000005) {
        z = (m + x) / y;
    }
    printf("Z is %.2f\n", z);
    printf("Z1 is %f\n", z1);
    return 0;
}
