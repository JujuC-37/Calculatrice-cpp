#ifndef FONCTIONS_CALCULATRICE_H_INCLUDED
#define FONCTIONS_CALCULATRICE_H_INCLUDED

enum operation
{
    addition=1,
    soustraction,
    multiplication,
    division,
    puissance,
    modulo,
    divisionEuclidienne
};

enum typeNombres
{
    naturels=1,
    relatifs,
    reels
};

int saisieNombreEntier(typeNombres typeChoisi,int numero);
double saisieReel(int numero);
int choixOperation(typeNombres typeDeNombres);
void calculEntiers(int a,int b,int operationChoisie);
void calculReels(double a,double b,int operationChoisie);

#endif // FONCTIONS_CALCULATRICE_H_INCLUDED
