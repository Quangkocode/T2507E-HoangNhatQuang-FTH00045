#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int i, j, found;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    char shorter[100], longer[100];
    if (strlen(s1) < strlen(s2)) {
        strcpy(shorter, s1);
        strcpy(longer, s2);
    } else {
        strcpy(shorter, s2);
        strcpy(longer, s1);
    }
    found = 0;
    for (i = 0; i <= strlen(longer) - strlen(shorter); i++) {
        for (j = 0; j < strlen(shorter); j++) {
            if (longer[i + j] != shorter[j]) {
                break;
            }
        }
        if (j == strlen(shorter)) { 
            found = 1; 
            break;
        }
    }

    if (found == 1)
        printf("Yes\n");
    else
        printf("No\n");
}