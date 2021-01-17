#include <stdio.h>

int day[13] = {
  0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

void okbad()
{
  int a, b;
  scanf("%d %d", &a, &b);

  if(a <= 0 || a >= 13) {
    printf("BAD!\n");
    return;
  }
  if (day[a] < b || b <= 0) {
    printf("BAD!\n");
    return;
  }
  printf("OK!\n");
}

int main()
{
  okbad();
  return 0;
}
