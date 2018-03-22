#include <stdio.h>

void main() {
    double a,b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    a=a*2;
    b=b*3;
    c=c*5;
    printf("MEDIA = %.1lf\n", (a+b+c)/10);
}
