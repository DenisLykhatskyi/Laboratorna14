#include <stdio.h>
#include <string.h>

void removeAfterSubstring(char *s1, const char *s2) {
    char *substring_pointer = strstr(s1, s2);

    if (substring_pointer != NULL) {
        *substring_pointer = '\0';
    }
}

int main() {
    char s1[256];
    char s2[256];

    printf("Введіть основний рядок (S1): ");
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        printf("Помилка читання рядка S1\n");
        return 1;
    }
    s1[strcspn(s1, "\n")] = '\0';

    printf("Введіть підрядок для пошуку (S2): ");
     if (fgets(s2, sizeof(s2), stdin) == NULL) {
        printf("Помилка читання рядка S2\n");
        return 1;
    }
    s2[strcspn(s2, "\n")] = '\0';

    removeAfterSubstring(s1, s2);

    printf("Результат (S1 після видалення): %s\n", s1);

    return 0;
}