#include <stdio.h>

int main () {
    int T, i;
    scanf("%d", &T);

    for (i=1; i<=T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        if (N%H == 0) {
            printf("%d%02d\n", H, N/H);
        }
        else {
            printf("%d%02d\n", N%H ,N/H + 1);
        }
        
    }
    return 0;
}