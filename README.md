# C Evaluation - Holberton School

__C evaluation - Holberton Uruguay - Group 0__

This evaluation is intended to help you meassure your level of understanding and proficiency in C language. Is to be done alone, but you can use google or your own notes to help you. Is not necessary to explain that you're not intended to search for the solution online, you'll be cheating yourself.

Exercises are divided in 3 levels:

- Easy: First 3 exercises
- Intermediate: 4th exercise
- Advanced: 5th exercise

Try to do the exercises in order to have a clearer meassure of your level.

You have 3 hours to do the evaluation.

## Exercise 0: Even or Odd Number

Write a program that reads an integer from the user and determines if it is an even or odd number. The program should output whether the input number is even or odd.

> Filename: [task_0.c](./task_0.c)

**Resoruces:**

- scanf - <https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm>

## Exercise 1: Variables, Functions, Iterations, and Conditionals

Create a function called `is_prime` that takes an integer as input and returns a boolean value. The function should return `true` if the input number is a prime number and `false` otherwise.
In addition, write a `main` function that reads a number from the user, calls the `is_prime` function, and outputs whether the input number is prime or not.

Prototype of the `is_prime` function:

```c
bool is_prime(int);
```

> Filename: [task_1.c](./task_1.c)

**Resoruces:**

- stdbool.h - <https://en.wikibooks.org/wiki/C_Programming/stdbool.h>

## Exercise 2: Structs, Arrays

Define a struct called `Student` with the following fields:

- name (a string of maximum length 50)
- age (an integer)
- grades (an array of 5 integers)

Write a function called `average_grade` that takes a `Student` struct as input and returns the average of the student's grades. Create a `main` function that initializes a `Student` struct, calls the `average_grade` function, and outputs the average grade of the student.

Prototype of the `average_grade` function:

```c
float average_grade(Student student);
```

> Filename: [task_2.c](./task_2.c)

**Resoruces:**

- typedef - <https://www.tutorialspoint.com/cprogramming/c_typedef.htm>
- datatypes - <https://www.tutorialspoint.com/cprogramming/c_data_types.htm>

## Exercise 3: Recursion and Pointers

Create a recursive function called `power` that takes two integers as input: the base and the exponent.
The function should return the result of the base raised to the power of the exponent. Write a `main` function that reads the base and exponent from the user, calls the `power` function, and outputs the result.

> Filename: [task_3.c](./task_3.c)

## Exercise 4: File I/O and Error Handling

Create a program that reads a text file containing a list of numbers (one number per line) and calculates the mean, median, and mode of the numbers. The program should handle any errors, such as file not found or invalid file format, and output an appropriate error message. The program should also create a new text file containing the calculated mean, median, and mode, with a label for each value.

> Filename: [task_4.c](./task_4.c)

**Resoruces:**

- <https://thirdspacelearning.com/blog/what-is-mean-median-mode/>
