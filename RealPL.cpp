#include "HeaderPL.h"
#include <iostream>
#include <string>
using namespace std;
bool IsKPeriodic(string f_line, int f_divCount)        // функция возвращает "true" если строка кратна числу и "false" если нет 
{
    if (f_line.size() == 0) return false;              // если строка пустая, то возвратить "false"
    if (f_line.size() % f_divCount != 0) return false; // если количество символов в строек не кратно делителю, то возвратить "false"
    string fragment = f_line.substr(0, f_divCount);    // создать фрагмент строки с начала и с количеством символов равным числу-делителю
    for (int i = f_divCount; i < f_line.size(); i += f_divCount) // двигаться по строке начиная с номера символа равного f_divCount
    {                                                  // и с шагом f_divCount проверить тождественность текущего фрагмента первому
        if (f_line.substr(i, f_divCount) != fragment)  // если текущий фрагмент не равен первому, то возвратить "false"
        {
            return false;
        }
    }
    return true; // если все фрагменты до конца строки равны первому фрагменту, то строка кратна, возвратить "true"
}

void ShowResult(string f_line, int f_divCount)   // вспомогательная функция для вывода результатов проверки на консоль
{
    if (IsKPeriodic(f_line, f_divCount))
    {
        cout << "Строка " << f_line << " кратна числу " << f_divCount << endl;
    }
    else
    {
        cout << "Строка " << f_line << " не кратна числу " << f_divCount << endl;
    }
}