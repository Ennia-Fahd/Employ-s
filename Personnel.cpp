#include "Personnel.h"
#include "Responsable.h"
Personnel::Personnel(string nom, string prenom, float indice,string titre) : Responsable(nom, prenom, indice,titre) 
{

}

float Personnel::verser_salaire()
{
	return this->Salaire_subor();
}

Personnel::~Personnel()
{
	cout << "Class Personnel se detruit ";
}
