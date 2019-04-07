#include <iostream>
#include <cstdlib>
using namespace std;

struct pracownik{
    string imie;
    string nazwisko;
    short wiek;
    float stawka;
    short przeprawcowane_godz;

};

void sortuj_wiek(pracownik lista[],int x){
    for(int i=0;i<x;i++){
        for(int j=1;j<x-i;j++)
            if(lista[j-1].wiek>lista[j].wiek)
                swap(lista[j-1], lista[j]);
    }
}
void sortuj_stawka(pracownik lista[],int x){
    for(int i=0;i<x;i++){
        for(int j=1;j<x-i;j++)
            if(lista[j-1].stawka>lista[j].stawka)
                swap(lista[j-1], lista[j]);
    }
}
void sortuj_godziny(pracownik lista[],int x){
    for(int i=0;i<x;i++){
        for(int j=1;j<x-i;j++)
            if(lista[j-1].przeprawcowane_godz>lista[j].przeprawcowane_godz)
                swap(lista[j-1], lista[j]);
    }
}

void wypisz(pracownik pracownik[],int x){
    for (int i=0;i<x;i++){
        cout << endl;
        cout << "Pracownik: "<< pracownik[i].imie << " " << pracownik[i].nazwisko <<endl;
        cout << "Wiek: " << pracownik[i].wiek << endl;
        cout << "Stawka: " << pracownik[i].stawka << "PLN" <<endl;
        cout << "Przepracowano: " << pracownik[i].przeprawcowane_godz << endl;
        cout << "Wynagrodznie: " << pracownik[i].stawka*pracownik[i].przeprawcowane_godz << "PLN"<< endl;
        cout <<endl;
    }
}

int main() {


    cout << "Podaj liczbe pracownikow: ";
    int x;
    cin >> x;
    pracownik pracownicy[x];
    cout << "Podaj dane pracwonika: "<<endl;
    for(int i=0;i<x;i++){
        cout << "Podaj Imie: ";
        cin >> pracownicy[i].imie;
        cout << "Podaj Nazwisko: ";
        cin >> pracownicy[i].nazwisko;
        cout << "Podaj Wiek: ";
        cin >> pracownicy[i].wiek;
        cout << "Podaj Stwake: ";
        cin >> pracownicy[i].stawka;
        cout << "Podaj przepracowane godziny: ";
        cin >> pracownicy[i].przeprawcowane_godz;
    }
    cout << endl;
    wypisz(pracownicy,x);
    int wybor;
        cout << "Wybierz sortowanie:"<<endl;
        cout << "1=Wiek" <<endl;
        cout << "2=Stawka" <<endl;
        cout << "3=Przepracowane godziny" <<endl;
        cout << "4=koniec" <<endl;
        cin >> wybor;
        switch(wybor){
            case 1:
                sortuj_wiek(pracownicy,x);
                break;
            case 2:
                sortuj_stawka(pracownicy,x);
                break;
            case 3:
                sortuj_godziny(pracownicy,x);
                break;
            default:
                return 0;

        }
    wypisz(pracownicy,x);


    system("pause");
    return 0;
}