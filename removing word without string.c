#include <stdio.h>
int main() {
    char str[100], word[100];
    int i, j, k, found;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a word to remove: ");
    gets(word);
    i = 0;
    while (str[i] != '\0') {
        found = 1;
        for (j = 0; word[j] != '\0'; j++) {
            if (str[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            for (k = i; str[k + j] != '\0'; k++) {
                str[k] = str[k + j];
            }
            str[k] = '\0';
            i--;
        }
        i++;
    }
    printf("Modified string: %s\n", str);
    return 0;
}

