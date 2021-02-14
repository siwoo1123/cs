#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, d, e;
    char str[200];

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sprintf(str, "%d%d%d%d%d", a, b, c, d, e);

    int i, len = strlen(str);
    for (i = 0; i < len; i++) {
        if (i != 0 &&i % 3 == 0) printf("\n");
        printf("%c", str[i]);
    }
    return 0;
}
