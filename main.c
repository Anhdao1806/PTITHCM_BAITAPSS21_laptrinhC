#include <stdio.h>
int main() {
    FILE *file;
    char str[100];
    file = fopen("baitap01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }
    printf("Nhap du lieu can ghi vao file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Ghi vao file thanh cong");
    return 0;
}


