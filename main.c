#include "funzioni.h"
using namespace std;
// da comppletare //


int main() {
	fstream f;
	int scelta;
	struct libro rlibro;
	while (true)
	{
		do
		{
			cout << "\n Benvenuto nel programma per la gestione Libro\n";
			cout << "1-> Aggiungi libri\n";
			cout <<  "2-> Stampa dell'Elenco libri\n";
			cout << "3- Uscita dal programma\n";
			cout << "Effettua la scelta 1-2-3 ?\n";
			cin >> scelta;
			if ((scelta<1)||(scelta>3))
				cout << "\n Ripeti inserimento scelta:";
		}
		while ((scelta<1)||(scelta>3));
		switch (scelta)
		{
			case 1:
				{
					scrivi(f,rlibro);
					break;
				}
			case 2:
				{
					leggi(f,rlibro);
					break;
				}
			case 3:
				{
					cout << "\n Arrivederci \n";
					return 0;
				}
		}
	}
}
