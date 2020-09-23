#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include <fstream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"
#include "MetodyPomocniczne.h"
#include <vector>


using namespace std;

class KsiazkaAdresowa
{
    public:

        UzytkownikManager uzytkownikManager;
        AdresatManager adresatManager;

        KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
        void rejestracjaUzytkownika();
        void logowanieUzytkownika();
        void wczytajAdresatowZPliku();
        void dodajAdresata();
        void wylogujUzytkownika();
        char wybierzOpcjeZMenuGlownego();
        char wybierzOpcjeZMenuUzytkownika();
        char wczytajZnak();

    private:



};

#endif // KSIAZKAADRESOWA_H
