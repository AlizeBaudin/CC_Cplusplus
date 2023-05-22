#include "Chef.h"

#include<iostream>

using namespace std;

Chef::Chef(int nbrEmploye, Personne personne) : m_n(nbrEmploye), m_personne(personne)
{
    Employe tabEmpl[nbrEmploye];

}

Chef::~Chef()
{
    //dtor
}

void Cheff::ajouterEmployer (int n, Employer &employer){
    Employer tabEmpl[n];
    for(int i=0; i<n;i++)
        tabEmpl[i]=employer;
    return tabEmpl;
}

void Chef::afficherChef(){

    cout<< "service : "<< m_service <<endl;
    Chef table[m_n];
    table.ajouterEmployer(m_n,m_employe)
    for(int i=0; i< m_n ; i++)
        table[i]->afficherEmploye();
}
