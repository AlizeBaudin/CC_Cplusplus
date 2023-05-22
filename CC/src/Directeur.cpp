#include "Directeur.h"

Directeur::Directeur(Personne personne):m_personne(personne)
{
    //ctor
}

Directeur::~Directeur()
{
    //dtor
}

void Directeur::afficherDirecteur(){

    cout<<" societe : "<<m_societe<<endl;
    m_chef -> afficherChef();

}
