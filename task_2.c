#include <stdio.h>
#include <string.h>

/**
 * struct Students - basic students structure
 * @name: student's name
 * @age: student's age
 * @grades: student's grades
 */

typedef struct Students
{
	char name[50];
	int age;
	int grades[5];
} Student;

void init_student(Student *s, char *name, int age, int *grades);
float average_grade(Student student);
/**
 * main - Main program to test functions
 *
 * Return: 0 = Success
 */

int main(void)
{
	float average;
	Student new_student;

	init_student(&new_student, "Alex Garcia", 18, (int[]){70, 80, 85, 90, 95});
	average = average_grade(new_student);
	printf("The average grade of %s is %.2f\n", new_student.name, average);

	return (0);
}

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
		strcpy(s->name, name);
		s->age = age;
		memcpy(s->grades, grades, sizeof(int) * 5);
	}
}

/**
 * average_grade - takes a Student struct as input
 *             and returns the average of the student's grades
 * @student: new student (structure)
 *
 * Return: The average of the student's grades
 */

float average_grade(Student student)
{
	int i;
	float average = 0;

	for (i = 0; i < 5; i++)
		average += student.grades[i];

	average /= 5;

	return (average);
}
