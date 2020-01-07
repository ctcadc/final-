#include <stdio.h>
int main( ){
    double a;
    double b;
    double c;
     printf("please input two numbers\n");
    scanf("%lf %lf",&a,&b);

    c = (a + b) * (a + b);
    printf("%.2f\n",c);

} 