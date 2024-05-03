#include "MyFunctions.h"

int main() 
{
    int num;
    cout << "�� �� �з��� �Է��Ͻðڽ��ϱ�? ";
    cin >> num;

    string** student_inputArr = new string * [num];
    inputStudents(student_inputArr, num);

    int selectMode = 0;
    while (selectMode != 4) 
    {
        cout << endl;
        cout << "1) �л� ���� ���  2) ��� ���� ���  3) ���� ���� ���� ���  4) ���α׷� ���� �� ������ ��带 �������ּ���: ";
        cin >> selectMode;

        switch (selectMode) 
        {
        case 1:
            printStudentInfo(student_inputArr, num);
            break;
        case 2:
            cout << "��� ���̴� " << calculateAverageAge(student_inputArr, num) << "�� �Դϴ�." << endl;
            break;
        case 3:
            printFastestBirthday(student_inputArr, num);
            break;
        case 4:
            break;
        default:
            cout << "������ �� ���� �Է��Դϴ�. 1~4�� �߿��� �������ּ���!" << endl;
        }
    }

    // �޸� ����
    for (int i = 0; i < num; i++) 
    {
        delete[] student_inputArr[i];
    }
    delete[] student_inputArr;

    return 0;
}
