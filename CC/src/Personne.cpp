#include "Personne.h"

Personne::Personne()
{
}

Personne::Personne(string nom, string prenom, string date) : m_nom(nom), m_prenom(prenom), m_date(date)
{
    //ctor
}

Personne::~Personne()
{
    //dtor
}

void Personne::afficherPersonne(){

    cout<< "nom : "<< m_nom<<endl;
    cout<< "prenom : "<< m_prenom<<endl;
    cout<< "age : "<< m_date<<endl;
}
