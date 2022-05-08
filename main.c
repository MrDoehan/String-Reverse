
#include <string.h>
#include <stdio.h>
int main(void) {
    char text[] = "Im cracked at coding";
    int len = strlen(text);
    char result[len];
    int counter = 0;
    for (int i = len-1; i > 0-1; i--) {
        result[i] = text[counter];
        counter++;
    }
    printf("%s\n", result);
}