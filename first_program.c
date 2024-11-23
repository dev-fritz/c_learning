#include <stdio.h>

int main() {
    char name[6];
    printf("What's Your name? ");
    scanf("%5s", name);
    printf("Ok, %s, I love you. Thank you.\n", name);
}
