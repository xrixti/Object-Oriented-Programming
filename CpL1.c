#include <stdio.h>

#define MAX_PEOPLE 100

int main() {
    int N, M;
    int party[MAX_PEOPLE] = {0};
    int attended[MAX_PEOPLE][MAX_PEOPLE] = {0};

    // Read input
    scanf("%d %d", &N, &M);

    // Read party information
    for (int i = 0; i < M; i++) {
        int k;
        scanf("%d", &k);
        for (int j = 0; j < k; j++) {
            int person;
            scanf("%d", &person);
            party[person] |= (1 << i); // Mark the person as attended the ith party
            attended[i][person] = 1; // Mark the person as attended the ith party for the ith person
        }
    }

    // Check if every two people attended the same party at least once
    int flag = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if ((party[i] & party[j]) == 0) {
                flag = 0; // Found a pair of people who didn't attend the same party
                break;
            }
        }
        if (!flag) {
            break;
        }
    }

    // Print the result
    if (flag)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
