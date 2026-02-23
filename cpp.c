#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n, m;
        scanf("%d %d", &n, &m);

        long long sum = 0;
        int sign = 1;

        for (int j = 1; j <= n; j++) {
            sum += sign * j;
            if (j % m == 0) {
                sign *= -1;
            }
        }

        printf("Case %d: %lld\n", i, sum);
    }

    return 0;
}
