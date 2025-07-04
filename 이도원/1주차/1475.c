#include <stdio.h>

int main () {
    char s[256];    
    int return_list[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%s", s);
    int i;
    for (i=0; s[i] != '\0'; i++) {
        if (s[i] == '0') {
            return_list[0]++;
        }
        else if (s[i] == '1') {
            return_list[1]++;
        }
        else if (s[i] == '2') {
            return_list[2]++;
        }
        else if (s[i] == '3') {
            return_list[3]++;
        }
        else if (s[i] == '4') {
            return_list[4]++;
        }
        else if (s[i] == '5') {
            return_list[5]++;
        }
        else if (s[i] == '6') {
            return_list[6]++;
        }
        else if (s[i] == '7') {
            return_list[7]++;
        }
        else if (s[i] == '8') {
            return_list[8]++;
        }
        else if (s[i] == '9') {
            return_list[6]++;
        }
    }

    return_list[6] = (return_list[6] % 2 + return_list[6]) / 2;

    int max_val = return_list[0];
    for (i=1; i<9; i++) {
        if (max_val < return_list[i]) {
            max_val = return_list[i];
        }
    }
    printf("%d", max_val);

    
    return 0;
}