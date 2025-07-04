#include <stdio.h>

int main () {
    char s[256], check_list[26] = "abcdefghijklmnopqrstuvwxyz";    

    scanf("%s", s);

    int i, j, k;
    for (i=0; i< 26; i++){
        k = -1;
        
        for (j=0; s[j] != '\0'; j++) {
            if (s[j] == check_list[i]) {
                k = j;
                break;
            }
        }
        if (i==25) {
            printf("%d", k);
            break;
        }
        printf("%d ", k);
    }
    
    return 0;
}