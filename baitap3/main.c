#include <stdio.h>

int main() {
    FILE *file;
    char str[100];
    file = fopen("baitap01.txt", "a");
    if (file == NULL) {
        printf("Loi mo file");
        return 1;
    }
    printf("Nhap du lieu can ghi them vao file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Ghi them du lieu vao file thanh cong");
    return 0;
}

