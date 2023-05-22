#include "Employe.h"


Employe::Employe(Personne personne) : m_personne(ptr_fun)
{
     //ctor
}

Employe::~Employe()
{
    //dtor
}

void Employe::ajouterPersonne(int n, Personne &personne){

    Personne tabPersonne[n];
    for(int i=0; i<n;i++):
        tabPersonne[i]=personne;
    return tabPersonne;
}

void Employe::afficherEmploye(){

    m_personne->afficherPersonne();
    cout<< "salaire : "<<m_salaire<<endl;
}
