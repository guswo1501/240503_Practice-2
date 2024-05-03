#include "MyFunctions.h"

// �Է� �Լ�
void inputStudents(string** student_inputArr, int num)
{
    for (int i = 0; i < num; i++) {
        cout << i + 1 << "��° �л��� �����͸� �̸�, ����, ���� ������ �Է����ּ���: ";
        student_inputArr[i] = new string[3];
        for (int j = 0; j < 3; j++) {
            cin >> student_inputArr[i][j];
        }
    }
}

// ���� ��� �Լ�
void printStudentInfo(string** student_inputArr, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << student_inputArr[i][NAME] << " ���� " << student_inputArr[i][AGE] << " ���̰�, ������ " << student_inputArr[i][BIRTH] << "�Դϴ�." << endl;
    }
}

// ��� ���� ��� �Լ�
float calculateAverageAge(string** student_inputArr, int num)
{
    float sum_age = 0;
    for (int i = 0; i < num; i++)
    {
        sum_age += stoi(student_inputArr[i][AGE]);
    }
    return sum_age / num;
}

// ���� ���� ���� ��� �Լ�
void printFastestBirthday(string** student_inputArr, int num)
{
    int* birth_day = new int[num];
    for (int i = 0; i < num; i++)
    {
        birth_day[i] = stoi(student_inputArr[i][BIRTH]);
    }
    int fast_birth = *min_element(birth_day, birth_day + num);
    cout << "���� ���� ������ " << fast_birth << "�Դϴ�." << endl;
    delete[] birth_day;
}