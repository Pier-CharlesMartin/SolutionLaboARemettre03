// But : Générer un nombre entre 1 et 100 et demander a l'utilisateur de le trouver en lui donnant 5 essaies
// Auteur : Pier-Charles Martin
// Date: 2020-10-04

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int nombre = 0; // Variable pour le nombre que l'utilisateur entre
	int essai = 0;	// Variable pour les essaies

	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	
	while (nombre != iRandom && essai < 5) // quand nombre n'est pas le chiffre aléatoire et quand les essaies sont en dessous de 5, tu entre dans le while
	{
		cout << "Essaie " << essai + 1 << " = "; // demander les nombres à l'utilisateur
		cin >> nombre;

		if (nombre == iRandom) // Si le nombre entré est égal au nombre aléatoire tu gagne
		{
			cout << "BRAVO TU AS REUSSI HAHAHAHAHAHA" << endl;
		}
		else				// Sinon tu entre dans le else
		{
			if (nombre > iRandom)	// Si le nombre entré est plus grand que le nombre aléatoire
			{
				cout << "Votre valeur est plus grande que le nombre recherché" << endl; // dire à l'utilisateur que son chiffre est plus grand que le chiffre aléatoire
			}
			else					// Sinon tu entre dans le else
			{
				cout << "Votre valeur est plus petite que le nombre recherché" << endl; // dire à l'utilisateur que son chiffre est plus petit que le chiffre aléatoire
			}
			cout << "Vous n'avez pas eu la bonne réponse. Il vous reste "<< 5 - (essai + 1) << " essaies." << endl;	// dire à l'utilisateur qu'il n'a pas la bonne réponse et le nombre d'essaie qu'il lui reste
			essai++;			// Ajouter +1 au compteur d'essaies
		}
	}

	return 0;
}