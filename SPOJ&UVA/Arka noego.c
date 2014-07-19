#include <stdio.h>

int main()
{
    int x = 0, y;
    while(scanf("%d", &y) != EOF) x ^= y;
    printf("%d\n", x);
    return 0;
}
