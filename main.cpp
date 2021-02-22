#include <stdio.h>

struct children
{
    char name[21];
    int tall;
};

struct children min(children arr[], int n)
{
    children mindata = arr[0];

    for (int i = 0; i < n; i++) {
        if (mindata.tall > arr[i].tall){
            mindata = arr[i];
        }
    }

    return mindata;
}

int main()
{
    children saving[5], mins;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", saving[i].name, &saving[i].tall);
    }

    mins = min(saving, 5);

    printf("%s %d", mins.name, mins.tall);

    return 0;
}
