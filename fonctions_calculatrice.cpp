#include <iostream>
#include <string>
#include <limits>
#include <math.h>

#include "fonctions_calculatrice.h"

using namespace std;

int saisieNombreEntier(typeNombres typeChoisi,int numero)
{
     double a(0);
    bool saisieCorrecte(true);

    do
    {
        cout << "Taper le nombre " << numero << " : ";
		cin >> a;

        saisieCorrecte = !cin.fail();

		if (typeChoisi==naturels && a<0)
		{
		    saisieCorrecte = false;
		}

		cin.clear();
		cin.ignore( numeric_limits<streamsize>::max(), '\n' );

    }while(!saisieCorrecte || static_cast<int>( a )!=a);

    return static_cast< int >( a );
}

double saisieReel(int numero)
{
    double a(0);
    bool saisieCorrecte(true);
    do
    {
        cout << "Taper le nombre " << numero << " : ";
		cin >> a;

		saisieCorrecte = !cin.fail();

		cin.clear();
		cin.ignore( numeric_limits<streamsize>::max(), '\n' );
    }while(!saisieCorrecte);


    return a;
}

int choixOperation(typeNombres typeDeNombres)
{
    int operationChoisie(0);

    if (typeDeNombres==naturels || typeDeNombres==relatifs)
    {
        do
        {
            cout << endl << "Choisir l'operation :" << endl << "1. addition" << endl << "2. soustraction" << endl << "3. multiplication" << endl << "4. division" << endl << "5. puissance" << endl<< "6. modulo" << endl << "7. division euclidienne" << endl << endl;
            cin >> operationChoisie;
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }while (operationChoisie<addition || operationChoisie>divisionEuclidienne);
    }
    else
    {
        do
        {
            cout << endl << "Choisir l'operation :" << endl << "1. addition" << endl << "2. soustraction" << endl << "3. multiplication" << endl << "4. division" << endl << "5. puissance" << endl;
            cin >> operationChoisie;
            cin.clear();
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }while (operationChoisie<addition || operationChoisie>puissance);
    }

    return operationChoisie;
}

void calculEntiers(int a,int b,int operationChoisie)
{
    switch (operationChoisie){
        case addition :         cout << a << " + " << b << " = " << a+b << endl;
                                break;

        case soustraction :     cout << a << " - " << b << " = " << a-b << endl;
                                break;

        case multiplication :   cout << a << " x " << b << " = " << a*b << endl;
                                break;

        case division :         if (b==0)
                                {
                                    cout << "erreur : pas de division par zero..." << endl;
                                }
                                else
                                {
                                    cout << a << " / " << b << " = " << a/b << endl;
                                }
                                break;

        case puissance :        cout << a << " ^ " << b << " = " << pow(a,b) << endl;
                                break;

        case modulo :           cout << a << " mod " << b << " = " << a%b << endl;
                                break;

        case divisionEuclidienne :  cout << a << " = " << b << "x" << a/b << " + " << a%b << endl;
                                    break;
    }
}

void calculReels(double a,double b,int operationChoisie)
{
    switch (operationChoisie){
        case addition :         cout << a << " + " << b << " = " << a+b << endl;
                                break;

        case soustraction :     cout << a << " - " << b << " = " << a-b << endl;
                                break;

        case multiplication :   cout << a << " x " << b << " = " << a*b << endl;
                                break;

        case division :         if (b==0)
                                {
                                    cout << "erreur : pas de division par zero..." << endl;
                                }
                                else
                                {
                                    cout << a << " / " << b << " = " << a/b << endl;
                                }
                                break;

        case puissance :        cout << a << " ^ " << b << " = " << pow(a,b) << endl;
                                break;
    }
}
