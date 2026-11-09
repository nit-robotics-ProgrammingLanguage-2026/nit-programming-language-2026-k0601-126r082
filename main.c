#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n < 0) {
        puts("NG");
        return 0;
    }

    long long total = 0;
    for (int term = n; term > 0; term--) {
        total += term;
    }
    printf("%lld\n", total);
    return 0;
}