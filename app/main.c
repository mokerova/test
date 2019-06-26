#include <stdio.h>

#include "myfunc.h"

int main()
{
    values val;
    double a;
    double b;
    double c;

    printf("Введите коэффиценты a, b, c:\n");
    if((scanf("%lf %lf %lf", &a, &b, &c)) != 0 ){

    val = Func(a, b, c);

    if(val.count==2)
        printf("%.2lf, %.2lf\n", val.x1, val.x2);

    }
    return 0;
}
