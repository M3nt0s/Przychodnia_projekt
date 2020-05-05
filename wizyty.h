#ifndef wizyty_h
#define wizyty_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
#define sleep(x) Sleep(20 * (x))

#define ROZMIAR 50

/// Struktura pozwalajaca na wprowadzanie i przechowywanie danych zwiazanych z wizytami pacjentow.
struct wizyty{

    int id;
    int id_pacjenta;
    int id_lekarza;
    int dzien;
    int miesiac;
    int rok;
    int godzina;
    int minuta;
    int czas_trwania;
    int godzina_zakonczenia_wizyty;
    int minuta_zakonczenia_wizyty;
    char status_wizyty[ROZMIAR];


    struct wizyty *poprzedni2, *nastepny2;
};

/// Wskazniki pozwalajace na poruszanie sie po elementach 2-kierunkowej listy wizyt.
struct wizyty *dodaj_wpis2;
struct wizyty *poczatek2;
struct wizyty *koniec2;

int nowa_wizyta(int id, int id1, int id2, int rok, int miesiac, int dzien, int godzina, int minuta);
void wczytaj_wizyty(char* nazwa_pliku);
void zapisz_do_pliku_wizyty(char* nazwa_pliku);
void pokaz_wizyty_ograniczone();
int pokaz_wizyty();
int edycja_wizyt(int id2, int rok, int miesiac, int dzien, int godzina, int minuta);
int wyswietl_wizyty_po_id1();
void pokaz_wizyty_pacjenta(int id);
void pokaz_wizyty_lekarza(int id1);
int wyswietl_wizyty_po_id();
void zmiana_statusu(int rok, int miesiac, int dzien, int godzina, int minuta);


#endif
