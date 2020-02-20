#ifndef _STUDENT_H_
#define _STUDENT_H_
// Type def


// Structure


typedef struct {
  int id;
  char * lastName;
  char * firstName;
  char * promotion;
}Student;


//Prototype
Student createStudent();
void addStudent(Student);
void deleteStudent();
void updateStudent();
void searchStudent();
#endif
