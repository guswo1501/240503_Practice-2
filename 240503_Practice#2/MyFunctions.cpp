#include "MyFunctions.h"

// 입력 함수
void inputStudents(string** student_inputArr, int num)
{
    for (int i = 0; i < num; i++) {
        cout << i + 1 << "번째 학생의 데이터를 이름, 나이, 생일 순서로 입력해주세요: ";
        student_inputArr[i] = new string[3];
        for (int j = 0; j < 3; j++) {
            cin >> student_inputArr[i][j];
        }
    }
}

// 정보 출력 함수
void printStudentInfo(string** student_inputArr, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << student_inputArr[i][NAME] << " 님은 " << student_inputArr[i][AGE] << " 세이고, 생일은 " << student_inputArr[i][BIRTH] << "입니다." << endl;
    }
}

// 평균 나이 계산 함수
float calculateAverageAge(string** student_inputArr, int num)
{
    float sum_age = 0;
    for (int i = 0; i < num; i++)
    {
        sum_age += stoi(student_inputArr[i][AGE]);
    }
    return sum_age / num;
}

// 가장 빠른 생일 출력 함수
void printFastestBirthday(string** student_inputArr, int num)
{
    int* birth_day = new int[num];
    for (int i = 0; i < num; i++)
    {
        birth_day[i] = stoi(student_inputArr[i][BIRTH]);
    }
    int fast_birth = *min_element(birth_day, birth_day + num);
    cout << "가장 빠른 생일은 " << fast_birth << "입니다." << endl;
    delete[] birth_day;
}