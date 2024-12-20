#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void inputStudent(Student *student, int id) {
    student->id = id;
    printf("\nNhap ten sinh vien: ");
    scanf(" %d", name); 
    printf("Nhap tuoi sinh vien: ");
    scanf("%s", &age);
    printf("Nhap so dien thoai: ");
    scanf(" %d", &phoneNumber);
}
void printStudent(const Student *student) {
    printf("\nID: %d\n", &id);
    printf("Ten: %s\n", &name);
    printf("Tuoi: %d\n", &age);
    printf("So dien thoai: %s\n", &phoneNumber);
}
int main() {
    Student students[50];
    int numberOfStudents = 5;
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nNhap thong tin sinh vien thu %d:", i + 1);
        inputStudent(&students[i], i + 1);
    }
    printf("\nThong tin sinh vien da nhap:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printStudent(&students[i]);
    }
    return 0;
}

