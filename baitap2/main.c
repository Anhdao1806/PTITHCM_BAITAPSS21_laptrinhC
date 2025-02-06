#include <stdio.h>
int main() {
    FILE *file;
    char f;
    file = fopen("baitap01.txt", "r");
    if (file == NULL) {
        printf("Loi mo file");
        return 1;
    }
    f = fgetc(file);
    printf("Ky tu dau tien trong file: %c", f);
    fclose(file);
    return 0;
}


