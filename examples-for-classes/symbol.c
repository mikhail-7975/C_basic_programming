#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Heeeeeellllllo worrrrrrrrrld!"; // можно создавать строку вот так

    for (int i = 0; i < strlen(str); i++) {
        while(str[i] == str[i + 1]) {
            for (int j = i; j < sizeof(str); j++) {
                str[j] = str[j + 1];
            }
        printf("%s\n", str);
        }
    }
}