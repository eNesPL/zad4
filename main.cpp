        #include <iostream>
using namespace std;

struct pracownik{
    string imie;
    string nazwisko;
    short wiek;
    float stawka;
    short przeprawcowane_godz;

};

void sortuj_wiek(pracownik lista){
    pracownik temp;
    for(int i=0;i<x)
};
void sortuj_stawka(){

};
void sortuj_godziny(){

};

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
    wypisz(pracownicy,x);

    return 0;
}