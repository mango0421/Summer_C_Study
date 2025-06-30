#include <stdio.h>
#include <stdbool.h>

int main () {
    int L[8];
    int i;
    bool TrueOrFalseFirst = true;
    bool TrueOrFalseSecond = true;
    scanf("%d %d %d %d %d %d %d %d", &L[0], &L[1], &L[2], &L[3], &L[4], &L[5], &L[6], &L[7]);
    for (i=1; i<=8; i++){
        if (9-i != L[i-1]) {
            TrueOrFalseFirst = false;
        }   

        if (i != L[i-1]) {

            TrueOrFalseSecond = false;
        }
    }

    if (TrueOrFalseFirst) {
        printf("descending");
    }
    else if (TrueOrFalseSecond) {
        printf("ascending");
    }
    else {
        printf("mixed");
    }
    
    return 0;
}