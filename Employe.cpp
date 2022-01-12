#include "Employe.h"
int Employe::cpt =0;
float Employe::val = 123.5;

Employe::Employe(string nom, string prenom, float indice) : mat(Employe::cpt++), nom(nom), prenom(prenom),indice_sal(indice)
{

}

Employe::Employe(const Employe& E): mat(E.mat), nom(E.nom), prenom(E.prenom), indice_sal(E.indice_sal)
{
}

void Employe::Affichage() const
{ 
	cout << "Matricule : " << this->mat << "\t Nom : " << this->nom << "\t Prenom : " << this->prenom << endl;

}

float Employe::Salaire() const
{
	return this->indice_sal * Employe::val;
}

Employe::~Employe()
{
	std::cout << "La class Employee est entrain de se détruire...";
}
