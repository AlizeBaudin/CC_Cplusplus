#ifndef PERSONNE_H
#define PERSONNE_H

#include<iostream>

using namespace std;


class Personne
{
    public:
        //contructeur et destructeur
        Personne();
        Personne(string nom, string prenom, string date);
        ~Personne();
        //getter
        string getNom()  {return this -> m_nom;}
        string getPrenom() {return this -> m_prenom;}
        string getDate() {return this -> m_date;}
        void setNom();
        void setPrenom();
        void setDate();
        //methodes
        void afficherPersonne();

    private: // attributs
        string m_nom;
        string m_prenom;
        string m_date; // date de naissance
};

inline void Personne::setNom(){
    m_nom;
}

inline void Personne::setPrenom(){
    m_prenom;
}

inline void Personne::setDate(){
    m_date;
}

#endif // PERSONNE_H
