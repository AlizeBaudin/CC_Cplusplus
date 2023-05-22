#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "Personne.h"
#include<iostream>

using namespace std;

class Employe :
{
    public:
        Employe(Personne);
        ~Employe();

        double getSalaire(){return this->m_salaire;}
        void setSalaire();

        void afficherPersonne(int, Personne &p);
        void ajouterEmploye();

    private:
        Personne *m_personne;
        double m_salaire;
};

inline void Employe::setSalaire(){
    m_salaire;
}

#endif // EMPLOYE_H
