#include <iostream>
#include <string>
#include <limits>
#include <math.h>

#include "fonctions_calculatrice.h"

using namespace std;

int main()
{
    cout << "<-------------------------------- Calculatrice -------------------------------->" << endl;

//saisie du type de nombres
    int typeNombres(0);
    do
    {
        cout  << "Choisir le type de nombres :" << endl << "1. naturels" << endl << "2. relatifs" << endl << "3. reels" << endl;
        cin >> typeNombres;
        cin.clear();
        cin.ignore( numeric_limits<streamsize>::max(), '\n' );
    }while (typeNombres<naturels || typeNombres>reels);


//saisie des nombres + operation
    double a(0), b(0);
    int operationChoisie(0);

    switch(typeNombres)
    {
        case naturels : cout <<endl;
                        a = saisieNombreEntier(naturels, 1);
                        b = saisieNombreEntier(naturels,2);
                        operationChoisie = choixOperation(naturels);
                        calculEntiers(a,b,operationChoisie);
                        break;

        case relatifs : cout <<endl;
                        a = saisieNombreEntier(relatifs,1);
                        b = saisieNombreEntier(relatifs,2);
                        operationChoisie = choixOperation(naturels);
                        calculEntiers(a,b,operationChoisie);
                        break;

        case reels :    cout <<endl;
                        a = saisieReel(1);
                        b = saisieReel(2);
                        operationChoisie = choixOperation(naturels);
                        calculReels(a,b,operationChoisie);
                        break;
    }


    return 0;
}
