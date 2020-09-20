#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

#include "KsiazkaAdresowa.h"
#include "Uzytkownik.h"
#include "Adresat.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka;
    char wybor;

    //ksiazka.wczytajUzytkownikowZPliku();

    while (true)
    {
        if (ksiazka.uzytkownikManager.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazka.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazka.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazka.uzytkownikManager.ustawIdZalogowanegoUzytkownika(ksiazka.logowanieUzytkownika());
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

            //if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
                //ksiazka.ustawIdOstatniegoAdresata(ksiazka.wczytajAdresatowZalogowanegoUzytkownikaZPliku());

            wybor = ksiazka.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazka.adresatManager.ustawIdOstatniegoAdresata(ksiazka.dodajAdresata(ksiazka.uzytkownikManager.pobierzIdZalogowanegoUzytkownika())) ;
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                //wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                //wyswietlWszystkichAdresatow(adresaci);
                break;
            case '5':
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                break;
            case '8':
                ksiazka.uzytkownikManager.ustawIdZalogowanegoUzytkownika(0);
                //adresaci.clear();
                break;
            }
        }
    }
    return 0;
}
