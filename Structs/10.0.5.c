#include <stdio.h>
#define max_students 3


struct student {
    char name[10];
    int studentenummer;
};

void sort_students(struct student *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].studentenummer > students[j + 1].studentenummer) {
    struct student temp = students[j];
    students[j] = students[j + 1];
    students[j + 1] = temp;
            }
        }
    }
};

int main(){
    
    struct student student1 = {"Jan" , 3};
    struct student student2 = {"Tom" , 210};
    struct student student3 = {"Lola" , 9};

    struct student students[max_students] = {student1, student2, student3};

    sort_students(students, max_students);

    for (int i = 0; i < max_students; ++i) {
        printf("Naam : %s  Nummer : %d\n", students[i].name, students[i].studentenummer);
    }

    return 0;
}
