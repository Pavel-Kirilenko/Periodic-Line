/* ��������� ��������� ������ �� ������ ������� ��������. � ������� "main" �����������  
   ��������� ����� �� ��������� ��� ������������ ������ ������� "IsKPeriodic"
   ��������� ��������� � �������� ������� �� ������ "Skill Factory", ������ 12 */
#include"HeaderPL.h"
#include<iostream>

int main() 
{
    setlocale(LC_ALL, "");
    system("chcp 1251");                          // ������ ��� ����������� ����������� ������������� ��������

    string line = "abcabcabcabc";                 // ��������� ������ ������� "IsKPeriodic" ��� ��������� ����������
    for (int i = 1; i < 4; i++)
    {
        ShowResult(line, i);
    }

    line = "abcabdabcabd";
    for (int i = 5; i < 8; i++)
    {
        ShowResult(line, i);
    }
    ShowResult("", 1);

    return 0;
}