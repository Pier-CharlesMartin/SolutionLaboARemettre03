// But : Calculer le salaire hebdomadaire des travailleur selon les ventes
// Auteur : Pier-Charles Martin
// Date: 2020-10-04

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // Pour que le programme comprenne les accents

	// Déclaration des variables
	float ventes = 0;				// les ventes demandé à l'utilisateur
	float salaire = 250;			// le salaire de base

	// Déclaration des constantes
	const float COMISSION = 0.075;	// le 7.5% des ventes

	while (ventes != -1)		// quand les ventes sont tout sauf -1 on rentre dans le while.
	{
		cout << "Veuillez entrez les ventes brutes hebdomadaires (ou -1 pour quitter) : "; // Demander à l'utilisateur les ventes brutes
		cin >> ventes;

		salaire += ventes * COMISSION;			// le calcul à faire en gros c'est = ventes * 0.075 + salaire = salaire

		cout << "Salaire totale = " << salaire << "$" << endl;		// dire le salaire total en argent
	}

	return 0;
}