#include <stdio.h>

long long calculateSum(int n, int m) {
    long long sum = 0;

    // Calculate the number of complete cycles
    int cycles = n / (2 * m);

    // Calculate the sum of complete cycles
    sum += (long long) cycles * m * m;

    // Calculate the sum of remaining numbers
    int remaining = n - cycles * 2 * m;
    if (remaining > 0) {
        sum += (long long) (remaining + 1) / 2 * ((remaining + 1) % 2 == 0 ? 1 : -1);
    }

    return sum;
}

int main() {
    int T;
    scanf("%d", &T);

    int i;
    for (i = 1; i <= T; i++) {
        int n, m;
        scanf("%d %d", &n, &m);

        long long caseSum = calculateSum(n, m);

        printf("Case %d: %lld\n", i, caseSum);
    }

    return 0;
}
