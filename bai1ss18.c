#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student student;
    strcpy(student.name, "Nguyen Van Bach");
    student.age = 200;
    strcpy(student.phoneNumber, "0123456789");
    printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);
    return 0;
}

