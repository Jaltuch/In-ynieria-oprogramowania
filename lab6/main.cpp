#include <iostream>
#include "../SYSTEM.h"

using namespace std;

int main() {
    SYSTEM system;

    while (true) {
        cout << "Wybierz opcj�:" << endl;
        cout << "1. Zarejestruj u�ytkownika" << endl;
        cout << "2. Zaloguj si�" << endl;
        cout << "3. Dodaj u�ytkownika" << endl;
        cout << "4. Wyjd�" << endl;

        int wybor;
        cin >> wybor;

        switch (wybor) {
            case 1:
                system.Uwierzyt();
                break;
            case 2:
                system.Zaloguj();
                break;
            case 3:
                system.Dodaj();
                break;
            case 4:
                cout << "Do widzenia!" << endl;
                return 0;
            default:
                cout << "Nieprawid�owy wyb�r!" << endl;
                break;
        }
    }

    return 0;
}
