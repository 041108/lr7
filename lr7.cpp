#include <iostream>
using namespace std;
int main()
{
int number;
cout << ("Введіть ціле позитивне число\n");
cin >> number;
(number >= 100 && number <= 999 && number % 2 != 0)?cout << "Дане
число є непарним тризначним":
cout<<"Дане число не є непарним тризначним";
}