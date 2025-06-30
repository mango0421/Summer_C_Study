#include <stdio.h>
#include <stdbool.h>

int main () {

    // 1 6 12 18
    int i, j=1, N=1;
    scanf("%d", &i);


    while (j < i) {

        j = j + N*6;
        N++;
    }
    
    
    printf("%d", N);



    return 0;
}