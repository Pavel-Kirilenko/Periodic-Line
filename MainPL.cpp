/* Программа проверяет кратна ли строка данному значению. В функции "main" проверяется  
   несколько строк на кратность для демонстрации работы функции "IsKPeriodic"
   Программа выполнена в качестве задания на курсах "Skill Factory", модуль 12 */
#include"HeaderPL.h"
#include<iostream>

int main() 
{
    setlocale(LC_ALL, "");
    system("chcp 1251");                          // строка для корректного отображения кириллических символов

    string line = "abcabcabcabc";                 // проверить работу функции "IsKPeriodic" при различных аргументах
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