#include <stdio.h>
int strlength(char string[])
{
    int x;
    for (x = 0; string[x]; x++) {}
    return x;
}

int main() {
    char list[] = "ana pretarrona";
    int count = strlength(list);
    printf("%s COUNT %d\n", list, count);
}
