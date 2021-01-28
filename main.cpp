#include <stdio.h>

int arr[102] = {
    0, 1, 2
};

void newarr(int n)
{
    if (n > 100) return;
    arr[n] = (arr[n - 1] * arr[n - 2]) % 100;
    newarr(n + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    newarr(3);
    printf("%d\n", arr[N]);
    return 0;
}
