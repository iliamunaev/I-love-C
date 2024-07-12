#include <stdio.h>

int main() {
    int i;

    while ((i = getchar()) != EOF) {
        if (i == '\t') {  // Compare with the tab character
            putchar('\\');
            putchar('t');
        }
        else if(i == '\b'){
            putchar('\\');
            putchar('b');
            }
        else if(i == '\\'){
            putchar('\\');
            putchar('\\');

        }
        else{
            putchar(i);
        }
    }

    return 0;
}