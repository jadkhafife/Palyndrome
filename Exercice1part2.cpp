// Exercice1part2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<stack>
using namespace std;
bool isPalyndrome(string st) {
	stack<char> p;
	for (int i = 0; i < st.size(); i++) {
		p.push(st[i]);
	}
	int cpt = 0;
	for (auto i:st) { //lorsque i est un element de la st
		if (i == p.top()) {
			cpt++;
			p.pop();
		}
		else return false;
	}
	return cpt == st.size();
}

int main()
{
	string a = "titi";
	string b = "kayak";
	cout << isPalyndrome(a) << endl;
	cout << isPalyndrome(b) << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
