#include "HeaderPL.h"
#include <iostream>
#include <string>
using namespace std;
bool IsKPeriodic(string f_line, int f_divCount)        // ������� ���������� "true" ���� ������ ������ ����� � "false" ���� ��� 
{
    if (f_line.size() == 0) return false;              // ���� ������ ������, �� ���������� "false"
    if (f_line.size() % f_divCount != 0) return false; // ���� ���������� �������� � ������ �� ������ ��������, �� ���������� "false"
    string fragment = f_line.substr(0, f_divCount);    // ������� �������� ������ � ������ � � ����������� �������� ������ �����-��������
    for (int i = f_divCount; i < f_line.size(); i += f_divCount) // ��������� �� ������ ������� � ������ ������� ������� f_divCount
    {                                                  // � � ����� f_divCount ��������� ��������������� �������� ��������� �������
        if (f_line.substr(i, f_divCount) != fragment)  // ���� ������� �������� �� ����� �������, �� ���������� "false"
        {
            return false;
        }
    }
    return true; // ���� ��� ��������� �� ����� ������ ����� ������� ���������, �� ������ ������, ���������� "true"
}

void ShowResult(string f_line, int f_divCount)   // ��������������� ������� ��� ������ ����������� �������� �� �������
{
    if (IsKPeriodic(f_line, f_divCount))
    {
        cout << "������ " << f_line << " ������ ����� " << f_divCount << endl;
    }
    else
    {
        cout << "������ " << f_line << " �� ������ ����� " << f_divCount << endl;
    }
}