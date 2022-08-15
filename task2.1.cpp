#include <iostream>
enum class months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n=1;
    while (n) {
        cout << "Введите номер месяца: ";
        cin >> n;
        if (n > 12) {
            cout << "Неправильный номер!" << endl;
        }
        else if (n == 0) {
            cout << "До свидания!" << endl;
        }
        else {
            months month = static_cast<months>(n);
            if (month == months::January) {
                cout << "Январь" << endl;
            } 
            if (month == months::February) {
                cout << "Февраль" << endl;
            }
            if (month == months::March) {
                cout << "Март" << endl;
            }
            if (month == months::April) {
                cout << "Апрель" << endl;
            }
            if (month == months::May) {
                cout << "Май" << endl;
            }
            if (month == months::June) {
                cout << "Июнь" << endl;
            }
            if (month == months::July) {
                cout << "Июль" << endl;
            }
            if (month == months::August) {
                cout << "Август" << endl;
            }
            if (month == months::September) {
                cout << "Сентябрь" << endl;
            }
            if (month == months::October) {
                cout << "Октябрь" << endl;
            }
            if (month == months::November) {
                cout << "Ноябрь" << endl;
            }
            if (month == months::December) {
                cout << "Декабрь" << endl;
            }
                
        }
    }
    return 0;
}
