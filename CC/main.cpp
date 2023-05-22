#include <iostream>

#include "Directeur.h"
using namespace std;

int main()
{
    Personne Alexandre("Alexandre","Legrand","10 mai 1970"), Marie("Marie", "Curie","11 decembre 2000"),
    Pierre("Pierre","Curie","14 janvier 1997"), Napoleon("Napoleon","Bonapart","14 juillet 1989"),
    David("David","Golitaht","25 decembre 2001");
    Personne tabPersonne[5] = {Alexandre, Marie,Pierre,Napoleon,David};
    Employe tabEmploye[2];
    tabEmploye.ajouterPersonne(1,Marie);
    tabEmploye.ajouterPersonne(1,Pierre);
    Chef NapoleonChef(2, Napoleon);
    NapoleonChef.ajouterEmployer(1,Marie);
    NapoleonChef.ajouterEmployer(1,Pierre);
    Directeur DavidDirecteur(David);

    // affichage
    for(int i=0;i<5;i++)
        tabPersonne[i].afficherPersonne();

    for(int i=0;i<2;i++)
        tabEmploye[i].afficherEmploye();

    NapoleonChef.afficherChef();
    DavidDirecteur.afficherDirecteur();

    return 0;
}
