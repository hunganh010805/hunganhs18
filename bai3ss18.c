#include <stdio.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        getchar();
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        printf("\n");
    }
    printf("Thong tin cac sinh vien da nhap:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }
    return 0;
}

