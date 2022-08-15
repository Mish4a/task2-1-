#include <iostream>
using namespace std;
struct adress {
    string country;
    string city;
    string street;
    int house;
    int apartment;
    int index;
};
void Print(adress& a) {
    cout << "Страна: " << a.country << endl;
    cout << "Город: " << a.city << endl;
    cout << "Улица: " << a.street << endl;
    cout << "Дом: " << a.house << endl;
    cout << "Квартира: " << a.apartment << endl;
    cout << "Индекс: " << a.index << endl << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    adress a1 = { "Россия", "Москва", "Ленинский проспект", 3, 62, 119049 };
    adress a2 = { "Latvia", "Jurmala", "Rezeknes Pulka", 16, 34, 980312 };
    Print(a1);
    Print(a2);
    return 0;
}