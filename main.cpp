#include <stdio.h>
#include <math.h>

void todo(int a, int b, int c) {
    printf("%.0f %.0f %.0f\n", ceil(a), floor(c), round(b));
}

int main()
{
    double ipt[3];
    
    scanf("%lf %lf %lf", &ipt[0], &ipt[1], &ipt[2]);
    
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (ipt[i] < ipt[j]) {
                double tmp = ipt[i];
                ipt[i] = ipt[j];
                ipt[j] = tmp;
            }
        }
    }
    
    printf("%.0f %.0f %.0f \n", ceil(ipt[0]), floor(ipt[2]), round(ipt[1]));
    
    return 0;
}
