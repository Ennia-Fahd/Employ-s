#include "Responsable.h"

Responsable::Responsable(string nom, string prenom, float indice, string titre): Employe(nom,prenom,indice) , titre(titre)
{
	this->subordonnee = vector<Employe*>();
}

Responsable::Responsable(const Responsable& R) : Employe(R), titre(R.titre)
{
	
}

void Responsable::add_subor( Employe& E)
{
	this->subordonnee.push_back(&E);
}

void Responsable::remove_subor()
{
	this->subordonnee.pop_back();
}

void Responsable::Affichage() const
{
	std::cout << "afficher de la classe Responsable" << std::endl;
	this->Employe::Affichage();
	cout << "titre : " << this->titre << endl;
	cout << "Les Subordonnee de " << this->titre << " : " << endl;
	for (int i = 0; i < this->subordonnee.size(); i++) {
		this->subordonnee[i]->Affichage();
	}
}

float Responsable::Salaire_subor() const
{
	float S = 0;
	for (int i = 0; i < this->subordonnee.size(); i++) {
		S = S + this->subordonnee[i]->Salaire();
	}
	return S;
}


Responsable::~Responsable()
{
	this->subordonnee.clear();
	cout << "La class Responsable est entrain de se détruire ...";
}

