#include <stdio.h>

int a, b, c; // a,b,c선언

void input()
{
    scanf("%d %d %d", &a, &b, &c); // 입력
    a *= b * c; // 계산값을 a에 저장
}

int gasan(int a)
{
    if(a == 0) return 1; // a가 0이면 1을 리턴
    int r = a % 10; //  int변수 r에 a를 10으로 나눈 나머지 대입
    if (r == 0) { // r이 0이면
        r = 1; // r에 1대입
    }
    return gasan(a / 10) * r; // gasan(a/10)에 r을 곱한값 리턴
}

int main()
{
    input();
    int result = gasan(a);
    printf("%d\n", result);
    return 0;
}
