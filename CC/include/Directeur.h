#ifndef DIRECTEUR_H
#define DIRECTEUR_H

#include"Chef.h"
#include <iostream>

using namespace std;

class Directeur
{
    public:
        Directeur(Personne);
        ~Directeur();

        string getSociete(){return this->m_societe;}
        void setSociete();

        void afficherDirecteur() ;

    private:
        Chef *m_chef;
        string m_societe;
        Personne *m_personne;
};

inline void Directeur::setSociete(){
    m_societe;
}

#endif // DIRECTEUR_H
