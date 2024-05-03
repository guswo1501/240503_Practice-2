#include "MyFunctions.h"

int main() 
{
    int num;
    cout << "몇 명 분량을 입력하시겠습니까? ";
    cin >> num;

    string** student_inputArr = new string * [num];
    inputStudents(student_inputArr, num);

    int selectMode = 0;
    while (selectMode != 4) 
    {
        cout << endl;
        cout << "1) 학생 정보 출력  2) 평균 나이 계산  3) 가장 빠른 생일 출력  4) 프로그램 종료 중 실행할 모드를 선택해주세요: ";
        cin >> selectMode;

        switch (selectMode) 
        {
        case 1:
            printStudentInfo(student_inputArr, num);
            break;
        case 2:
            cout << "평균 나이는 " << calculateAverageAge(student_inputArr, num) << "세 입니다." << endl;
            break;
        case 3:
            printFastestBirthday(student_inputArr, num);
            break;
        case 4:
            break;
        default:
            cout << "실행할 수 없는 입력입니다. 1~4번 중에서 선택해주세요!" << endl;
        }
    }

    // 메모리 해제
    for (int i = 0; i < num; i++) 
    {
        delete[] student_inputArr[i];
    }
    delete[] student_inputArr;

    return 0;
}
