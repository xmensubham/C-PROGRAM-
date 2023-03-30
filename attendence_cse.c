#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

// structure to store student information
struct student {
    char name[20];
    int attendance;
};

// array of students
struct student students[MAX_STUDENTS];

// number of students
int num_students = 0;

// function to add a student
void add_student(char *name) {
    strcpy(students[num_students].name, name);
    students[num_students].attendance = 0;
    num_students++;
}

// function to mark attendance for a student
void mark_attendance(char *name) {
    for (int i = 0; i < num_students; i++) {
        if (strcmp(students[i].name, name) == 0) {
            students[i].attendance++;
            return;
        }
    }
    printf("%s not found in the list of students.\n", name);
}

// function to print attendance
void print_attendance() {
    for (int i = 0; i < num_students; i++) {
        printf("%s: %d\n", students[i].name, students[i].attendance);
    }
}
    return 0;
}

