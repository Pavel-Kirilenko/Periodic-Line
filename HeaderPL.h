#pragma once
#include<string>
using namespace std;

bool IsKPeriodic(string f_line, int f_divCount);  // функция возвращает "true" если строка кратна числу и "false" если нет 
void ShowResult(string f_line, int f_divCount);   // вспомогательная функция для вывода результатов проверки на консоль
