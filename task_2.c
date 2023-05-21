#include <stdio.h>

float average_grade(Student student);
/**
 * main - Main program to test functions
 *
 * Return: 0 = Success
 */

int main(void)
{
    struct Students new_student;
    
    init_student(&new_student, "Alex Garcia", 18, 75);
    float average_grade(Student student); /* to do*/
}

/**
 * Students structure
 * @name: student's name
 * @age: student's age
 * @grades: student's grades
 */

typedef struct Students {
   char name[50];
   int age;
   int grades[5];
} Student;

/**
 * init_student - Initialize the Students structure
 * @s: Students structure
 * @name: student's name
 * @age: student's age
 * @grades: student's grades
 */

void init_student(struct Students *s, char *name, int age, int *grades)
{
	if (s) 
	{
		*s->name = name;
		s->age = age;
		*s->grades = grades;
	}
}

/**
 * average_grade - takes a Student struct as input 
 *             and returns the average of the student's grades
 * @Student: Student structure
 * @student: new student

 * Return: The average of the student's grades
 */

float average_grade(Student student)
{
    /* to do */
}