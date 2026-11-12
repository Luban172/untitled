#include <stdio.h>

int dodaj(int a, int b) {
    return a + b;

}

int main(void) {
    printf("Hello, World!\n");
    printf("W pierwszym branchu; 2+3=%d", dodaj(2, 3));
    return 0;
}
