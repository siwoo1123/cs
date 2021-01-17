#include <stdio.h>
#include <math.h>

int main()
{
    double area;
    double base;
    double exp;
    
    printf("정사각형의 넓이 : ");
    scanf("%lf", &area);
    printf("정사각형의 한 변의 길이 : %f \n", sqrt(area));
    
    return 0;
}
