#include "Commercial.h"
#include "Employe.h"
#include <iostream>
using namespace std;
Commercial::Commercial(string nom, string prenom, float indice, int nbr_vente) : Employe(nom, prenom, indice)
{
	this->nbr_vente = nbr_vente;
	
}

Commercial::Commercial(const Commercial& C): Employe(C), nbr_vente(C.nbr_vente)
{ 
}

float Commercial::Salaire() const
{
	return this->nbr_vente/100 + this->Employe::Salaire();
}

void Commercial::Modif_vente()
{
	cout << "donnez le nouveau nombre de vente :" << endl;
	cin >> this->nbr_vente;
}

Commercial :: ~Commercial() {
	cout << "La class Commercial est entrain de se détruire ...";
}
