#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, realLen;
    char str[100];
    
    scanf("%s %d", str, &len);
    
    realLen = strlen(str);
    
    for (i = realLen; i >= len; i--) {
        printf("%c", str[i - 1]);
    }
    printf("\n");
    return 0;
}
