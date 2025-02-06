#include <stdio.h>
int main() {
    FILE *file;
    char str[100];
    file = fopen("baitap01.txt", "r");
    if (file == NULL) {
        printf("Loi mo file");
        return 1;
    }
    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Dong dau tien trong file la: %s", str);
    } else {
        printf("Khong co du lieu trong file");
    }
    fclose(file);
    return 0;
}


