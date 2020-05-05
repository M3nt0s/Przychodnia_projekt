#ifndef lekarze_h
#define lekarze_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROZMIAR 50

/// Struktura umozliwiajaca zapisywanie danych do posczegolnych pol; zwiazana jest z danymi lekarzy; pozwala na ich tworzenie i przechowywanie; dziala na tej samej zasadzie, co lista 'pacjenci'.
struct lekarze{

    int id;
    char imie[ROZMIAR];
    char nazwisko[ROZMIAR];
    char pesel[ROZMIAR];
    char numer_pwz[ROZMIAR];
    char tytul_zawodowy[ROZMIAR];
    char specjalizacja[ROZMIAR];
    char email[ROZMIAR];
    char telefon[ROZMIAR];
    char dni_pracy[ROZMIAR];
    int godzina_pocz;
    int godzina_kon;

    struct lekarze *poprzedni1, *nastepny1;
};

/// Wskazniki pozwalajace na poruszanie sie po 2-kierunkowej liscie, zawierajacej dane lekarzy.
struct lekarze *dodaj_wpis1;
struct lekarze *poczatek1;
struct lekarze *koniec1;


int nowy_lekarz(int id1);
void pokaz_lekarzy();
void wczytaj_lekarzy(char *nazwa_pliku);
void zapisz_do_pliku_lekarzy(char *nazwa_pliku);
struct lekarze *usuwanie_lekarzy(struct lekarze *lista1);
int edycja_lekarzy();
int menu_wyszukiwania_lekarzy();
void wyswietl_dane_lekarzy();
void menu_sortowania_lekarzy(struct lekarze *lista1);
int sort_lekarze_imie(struct lekarze* a, struct lekarze* b);
int sort_lekarze_nazwisko(struct lekarze* a, struct lekarze* b);
int sort_lekarze_pesel(struct lekarze* a, struct lekarze* b);
void swap_lekarze(struct lekarze *a, struct lekarze *b);
void sort_od_max_leka(int(*porownaj)(struct lekarze* pierwszy, struct lekarze* drugi));
void sort_od_min_leka(int(*porownaj)(struct lekarze* pierwszy, struct lekarze* drugi));

#endif
