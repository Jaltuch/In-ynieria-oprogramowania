#include <iostream>
#include "Pies.h"
#include "Jamnik.h"
#include "Ssak.h"
#include <string>
#include "Pies.cpp"
#include "Ssak.cpp"
#include "Jamnik.cpp"

using namespace std;

int main()
{
    Jamnik jamnik;
    Pies pies;
    pies.Szczekanie();

    jamnik.Imie="abc";
    jamnik.Szczekanie();


    cout<<jamnik.Imie;





    return 0;
}
