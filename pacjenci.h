#ifndef pacjenci_h
#define pacjenci_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROZMIAR 50

/// Struktura odpowiadajaca za dane zwiazane z pacjentami; jest to lista 2-kierunkowa, posiadajaca pola niezbedne do gromadzenia szczegolowych danych pacjentow w tej wlasnie strukturze.
struct pacjenci{

    int id;
    char imie[ROZMIAR];
    char nazwisko[ROZMIAR];
    char pesel[ROZMIAR];
    char data_ur[ROZMIAR];
    char adres[ROZMIAR];
    char nr_dom[ROZMIAR];
    char email[ROZMIAR];
    char telefon[ROZMIAR];
    char waga[ROZMIAR];
    char wzrost[ROZMIAR];
    char oddzial[ROZMIAR];

    struct pacjenci *poprzedni, *nastepny;

};

/// Wskazniki pozwalajace na poruszanie sie po elementach 2-kierunkowej listy pacjentow.
struct pacjenci *poczatek;
struct pacjenci *koniec;
struct pacjenci *dodaj_wpis;

int nowy_pacjent(int id);
void pokaz_pacjentow(struct pacjenci *tmp);
void wczytaj_pacjentow(char* nazwa_pliku);
void zapisz_do_pliku_pacjentow(char* nazwa_pliku);
struct pacjenci *usuwanie_pacjentow(struct pacjenci *lista3);
int edycja_pacjentow();
int menu_wyszukiwania_pacjentow();
void wyswietl_dane_pacjentow(struct pacjenci *dodaj_wpis);
int menu_sortowania_pacjentow(struct pacjenci *lista);
int sort_pacjenci_imie(struct pacjenci* a, struct pacjenci* b);
int sort_pacjenci_nazwisko(struct pacjenci* a, struct pacjenci* b);
int sort_pacjenci_pesel(struct pacjenci* a, struct pacjenci* b);
int sort_pacjenci_waga(struct pacjenci* a, struct pacjenci* b);
int sort_pacjenci_wzrost(struct pacjenci* a, struct pacjenci* b);
int sort_pacjenci_oddzial(struct pacjenci* a, struct pacjenci* b);
void swap_pacjenci(struct pacjenci *a, struct pacjenci *b);
void sort_od_min_pacj(int(*porownaj)(struct pacjenci* pierwszy, struct pacjenci* drugi));
void sort_od_max_pacj(int(*porownaj)(struct pacjenci* pierwszy, struct pacjenci* drugi));

#endif

