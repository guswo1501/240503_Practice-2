#pragma once

#ifndef MyFunctions_H
#define MyFunctions_H

#include <iostream>
#include <string>

#define NAME 0
#define AGE 1
#define BIRTH 2

using namespace std;


void inputStudents(string** student_inputArr, int num);
void printStudentInfo(string** student_inputArr, int num);
float calculateAverageAge(string** student_inputArr, int num);
void printFastestBirthday(string** student_inputArr, int num);

#endif
