// pp7 wskazniki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie2_1();
void zadanie2_2();
void zadanie2_3();
int a;
int b;
void swap();
void swap2(int*a,int*b);
int main()
{
   // zadanie2_1();
    //zadanie2_2();
    //zadanie2_3();
    //zadanie1();
   // zadanie2();
    zadanie3();
}
void zadanie2_1() {
    const int size = 3;
    int tab[size] = { 1,3,5 };
    for (int i = 0; i < size; i++) {
        cout << "indeks tablicy: " << i << "  wartosc tablicy: " << tab[i] << endl;
    }
    int* ptr[size];
    for (int i = 0; i < size; i++) {
        ptr[i]= &tab[i];
        cout << "indeks tablicy: " << i << "  wartosc wskazywana przez wskaznik: " << *ptr[i] << endl;
    }
   

}
void zadanie2_2() {
    int* p;
    const int size = 3;
    int tab[size] = { 1,3,5 };
    p =&tab[0];
    for (int i = 0; i < size; i++) {
        cout << "indeks tablicy: " << i << "  wartosc tablicy: " << tab[i] << endl;
    }
    for (int i = 0; i < size; i++) {
        cout << "indeks tablicy: " << i << "  wartosc wskazywana przez wskaznik: " << *p << endl;
        p++;
    }

}
void zadanie2_3() {
    
    cout << "podaj a: ", cin >> a;
    cout << "podaj b: ", cin >> b;
    //swap();
    swap2(&a,&b);
    cout << "zamienione a na b: " << a << " i b na a: " << b << endl;
}
void swap() {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void swap2(int*a,int*b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    }
void zadanie1(){
    int a;
    int* p;
    p = &a;
    cout << "podaj a: ", cin >> *p;
    cout << "\n";
    cout << a;
}
void zadanie2() {
    int jakas_tablica[10] = { 0 };
    int* wsk;
    wsk = jakas_tablica;
    wsk = &jakas_tablica[0];
  //  wsk++;
  //  (*wsk)++;
   // wsk = &jakas_tablica[7];
   // (*wsk) = 77;
  //  cout << jakas_tablica[7];
    for (int i = 0; i < 10; i++) {
        *wsk = 9;
        wsk++;
    }
    for (int j = 0; j < 10; j++) {
        cout << jakas_tablica[j] << " ";
    }
}
void zadanie3() {
    int size;
    cout << "podaj rozmiar tablicy: ", cin >> size;
    float* tab = new float[size];
    for (int i = 0; i < size; i++) {
        tab[i] = i;
    }
    float* wsk;
    wsk = &tab[size - 1];
    while (7) {
        if (*wsk == 0) {
            break;
        }
        wsk--;
    }
    cout << *wsk;
}
