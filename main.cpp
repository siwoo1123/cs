#include <stdio.h>
#include <string.h>

int main()
{
    char ipts[5][100], ch, st[100];
    int flag = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", ipts[i]);
        //printf("%d ", i);
        //puts(ipts[i]);
    }

    scanf(" %c", &ch);
    scanf("%s", st);

    for (int i = 0; i < 5; i++) {
        if(strchr(ipts[i], ch) || strstr(ipts[i], st)) {
            puts(ipts[i]);
            flag = 1;
        }
    }

    if(!flag) {
        puts("none");
    }

    return 0;
}
