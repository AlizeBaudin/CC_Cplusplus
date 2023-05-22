#ifndef CHEF_H
#define CHEF_H

#include "Employe.h"
#include<iostream>

using namespace std;

class Chef
{
    public:
        Chef(int, Personne);
        ~Chef();

        string getService(){return this->m_service;}
        void setService();
        int getNbreEmploye(){return this->m_n;}
        void setNbreEmploye();

        void ajouterEmployer (int n, Employer &e);
        void afficherChef();

    private:
        int m_n; //nombre d'employer dans son service
        Employe *m_employe; //liste d'employer
        string m_service;
        Personne *m_personne;
};

inline void Chef::setService(){
    m_service;
}

inline void Chef::setNbreEmploye(){
    m_n;
}

#endif // CHEF_H
