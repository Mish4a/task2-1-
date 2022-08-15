#include <iostream>
using namespace std;
struct account {
    int account_num;
    string name;
    double balance;
};
void Balance_change(account& n, double new_balance) {
    n.balance = new_balance;
}
int main()
{
    setlocale (LC_ALL, "Russian");
    account n;
    double new_balance;
    cout << "Введите номер счёта: ";
    cin >> n.account_num;
    cout << "Введите имя владельца: ";
    cin >> n.name;
    cout << "Введите баланс: ";
    cin >> n.balance;
    cout << "Введите новый баланс: ";
    cin >> new_balance;
    Balance_change(n, new_balance);
    cout << "Ваш счёт: " << n.name << ", " << n.account_num << ", " << n.balance;

}
