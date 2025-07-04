#include <stdio.h>

int main () {
    // c= c- dz= d- lj nj s= z=
    char s[256];
    
    scanf("%s", s);
    
    int i, N=0;
    for (i=0; s[i] != '\0'; i++) {
        if (s[i] == 'c') {                
            if (s[i+1] == '=') {
                N++;
                i++;
            }
            else if (s[i+1] == '-') {
                N++;
                i++;
            }
            else {
                N++;
            }
        }

        else if (s[i] == 'd') { 
            if (s[i+1] == 'z' && s[i+2] == '=') {
                i++;
                i++;
                N++;
            }
            else if (s[i+1] == '-') {
                i++;
                N++;
            }
            else {
                N++;
            }
        }

        else if (s[i] == 'l') { 
            if (s[i+1] == 'j') {
                i++;
                N++;
            }
            else {
                N++;
            }
        }
        
        else if (s[i] == 'n') {
            if (s[i+1] == 'j') {
                i++;
                N++;
            }
            else {
                N++;
            }
        }


        else if (s[i] == 's') {
            if (s[i+1] == '=') {
                i++;
                N++;
            }
            else {
                N++;
            }
        }
            
        else if (s[i] == 'z') {
            if (s[i+1] == '=') {
                i++;
                N++;
            }
            else {
                N++;
            }
        }
    
        else {
            N++;
        }
        
    }


    printf("%d", N);



    return 0;
}