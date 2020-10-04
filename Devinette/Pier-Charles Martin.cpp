// But : G�n�rer un nombre entre 1 et 100 et demander a l'utilisateur de le trouver en lui donnant 5 essaies
// Auteur : Pier-Charles Martin
// Date: 2020-10-04

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	int nombre = 0; // Variable pour le nombre que l'utilisateur entre
	int essai = 0;	// Variable pour les essaies

	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	
	while (nombre != iRandom && essai < 5) // quand nombre n'est pas le chiffre al�atoire et quand les essaies sont en dessous de 5, tu entre dans le while
	{
		cout << "Essaie " << essai + 1 << " = "; // demander les nombres � l'utilisateur
		cin >> nombre;

		if (nombre == iRandom) // Si le nombre entr� est �gal au nombre al�atoire tu gagne
		{
			cout << "BRAVO TU AS REUSSI HAHAHAHAHAHA" << endl;
		}
		else				// Sinon tu entre dans le else
		{
			if (nombre > iRandom)	// Si le nombre entr� est plus grand que le nombre al�atoire
			{
				cout << "Votre valeur est plus grande que le nombre recherch�" << endl; // dire � l'utilisateur que son chiffre est plus grand que le chiffre al�atoire
			}
			else					// Sinon tu entre dans le else
			{
				cout << "Votre valeur est plus petite que le nombre recherch�" << endl; // dire � l'utilisateur que son chiffre est plus petit que le chiffre al�atoire
			}
			cout << "Vous n'avez pas eu la bonne r�ponse. Il vous reste "<< 5 - (essai + 1) << " essaies." << endl;	// dire � l'utilisateur qu'il n'a pas la bonne r�ponse et le nombre d'essaie qu'il lui reste
			essai++;			// Ajouter +1 au compteur d'essaies
		}
	}

	return 0;
}