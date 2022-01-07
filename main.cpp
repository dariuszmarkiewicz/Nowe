#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int podstawa, wykladnik;

    cout << "Potegowanie - wersja 1.0" << endl;

    cout << "\n Podstawa: ";
    cin >> podstawa;

    cout << "\n Wykladnik: ";
    cin >> wykladnik;

    cout << "\n " << podstawa << " do potegi " << wykladnik << " = " << pow(podstawa, wykladnik)<< endl;
    return 0;
}
