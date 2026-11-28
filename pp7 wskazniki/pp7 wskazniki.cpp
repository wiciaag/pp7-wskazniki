
#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie2_1();
void zadanie2_2();
void zadanie2_3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();
void zadanie8();
void zadanie9();
void zadanie10();
void zadanie11();
void zadanie12();
void zadanie9statystyki(int m[2][2][2], int* j, int* d, int* t);
void zadanie10statystyki(int*** tablica, int x, int y, int z, int* min, int* max, int* srednia);
void zadanie11statystyki(int*** tablica, int x, int y, int z, int* min, int* max, int* srednia);
int a;
int b;
void swap();
float srednia(int* tab, int size);
void swap2(int*a,int*b);
void dodawanie(int* p, int* d,int rozm);
void mnozenie(int* p, int* d, int rozm);
void roznica(int* p, int rozm);
int main()
{
    //zadanie2_1();
    //zadanie2_2();
    //zadanie2_3();
    //zadanie1();
    //zadanie2();
    //zadanie3();
    //zadanie4();
    //zadanie5();
    //zadanie6();
    //zadanie7();
    //zadanie8();
    //zadanie9();
    //zadanie10();
    //zadanie11();
    zadanie12();
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
void zadanie4() {
    int size;
    srand(time(NULL));
    cout << "podaj rozmiar tablicy: ", cin >> size;
    int* tab = new int[size];
    for (int i = 0;i < size;i++) {
        tab[i] = (rand() % 10) + 1;
        cout << tab[i] << " ";
    }
    cout<<srednia(tab, size);
    
}
float srednia(int* tab, int size) {
    float sredna = 0;
    for (int i = 0;i < size;i++) {
        sredna = *tab + sredna;
        tab++;
    }
    sredna = sredna / size;
    return sredna;
}
void zadanie5() {
    int rozmiar;
    cout << "podaj rozmiar tablicy: ", cin >> rozmiar;
    int* tab = new int[rozmiar];
    int* tab2 = new int[rozmiar];
    srand(time(NULL));
    for (int i = 0;i < rozmiar;i++) {
        tab[i] = (rand() % 10) + 1;
        cout << tab[i] << " ";
        tab2[i] = (rand() % 10) + 1;
        cout << tab2[i] << endl;
    }
    cout << "dodawanie tablic: " << endl;
    dodawanie(tab, tab2, rozmiar);
    cout << "mnozenie tablic: " << endl;
    mnozenie(tab, tab2, rozmiar);
    roznica(tab, rozmiar);
    delete tab, tab2;
}
void dodawanie(int* p, int* d,int rozm) {
    int *tab3 = new int[rozm];
    for (int i = 0;i < rozm;i++) {
        tab3[i] = *p + *d;
        p++;
        d++;
        cout << tab3[i] << " ";
    }
    delete tab3;
    cout << endl;
}
void mnozenie(int* p, int* d, int rozm) {
    int* tab3 = new int[rozm];
    for (int i = 0;i < rozm;i++) {
        tab3[i] = *p * *d;
        p++;
        d++;
        cout << tab3[i] << " ";
    }
    cout << endl;
    delete tab3;
}
void roznica(int* p, int rozm) {
    int max = *p;
    int min = *p;
    for (int i = 0;i < rozm;i++) {
        if (max < *p) {
            max = *p;
        }
        if (min > *p) {
            min = *p;
        }
        p++;
    }
    cout << "roznica pomiedzy max i min w pierwszej tablicy: " << max - min << endl;

}
void zadanie6() {
    srand(time(NULL));
    int wiersz;
    int kolumna;
    cout << "podaj liczbe wierszy tablic: ", cin >> wiersz;
    cout << "podaj liczbe kolumn tablic: ", cin >> kolumna;
    int** tab = new int* [wiersz];
    int** tab2 = new int* [wiersz];
    for (int i = 0;i < wiersz;i++) {
        int* tmp = new int[kolumna];
        tab[i] = tmp;
        tab2[i] = tmp;
        for (int j = 0;j < kolumna;j++) {
            tab[i][j] = (rand() % 10) + 1;
            cout << tab[i][j] << " ";
            tab2[i][j] = (rand() % 10) + 1;
            cout << tab2[i][j] << endl;
        }
    }
    int** dodane = new int* [wiersz];
    for (int i = 0;i < wiersz;i++) {
        int* tmp = new int[kolumna];
        dodane[i] = tmp;
        for (int j = 0;j < kolumna;j++) {
            dodane[i][j] = tab[i][j] + tab[i][j];
            cout << dodane[i][j] << " ";
        }
    }
    delete tab, tab2, dodane;
}
void zadanie7() {
    srand(time(NULL));
    int dlugosc;
    cout << "jak duze maja byc macierze, ktore chcesz poprzemnazac? ", cin >> dlugosc;
    int** tab1 = new int*[dlugosc];
    int** tab2 = new int* [dlugosc];
    for (int i = 0;i < dlugosc;i++) {
        tab1[i] = new int[dlugosc];
        tab2[i] = new int[dlugosc];
        for (int j = 0;j < dlugosc;j++) {
            tab1[i][j] = (rand() % 10) + 1;
            cout << tab1[i][j] << "    ";
            tab2[i][j] = (rand() % 10) + 1;
            cout << tab2[i][j] << endl;
        }
        cout << endl;
    }
    int** mnozenie = new int* [dlugosc];
    for (int i = 0;i < dlugosc;i++) {
        mnozenie[i] = new int[dlugosc];
        for (int j = 0;j < dlugosc;j++) {
            mnozenie[i][j] = tab1[i][j] * tab2[i][j];
            cout << mnozenie[i][j] << "   ";
        }
    }
    for (int i = 0;i < dlugosc;i++) {
        
            delete[] tab1[i];
            delete[]tab2[i];
            delete[]mnozenie[i];
    }
    delete[]tab1;
    delete[]tab2;
    delete[]mnozenie;
    }
void zadanie8() {
    srand(time(NULL));
    int wiersz;
    int kolumna;
    cout << "podaj liczbe wierszy macierzy: ", cin >> wiersz;
    cout << "podaj liczbe kolumn macierzy: ", cin >> kolumna;
    int** tab = new int* [wiersz];
    for (int i = 0;i < wiersz;i++) {
        tab[i] = new int[kolumna];
        for (int j = 0;j < kolumna;j++) {
            tab[i][j] = (rand() % 10) + 1;
            cout << tab[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    int** tabt = new int* [kolumna];
    for (int i = 0;i < kolumna;i++) {
        tabt[i] = new int[wiersz];
        for (int j = 0;j < wiersz;j++) {
            tabt[i][j] = tab[j][i];
            cout << tabt[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0;i < wiersz;i++) {
        delete[] tab[i];
        delete[]tabt[i];
    }
    delete[]tab;
    delete[]tabt;
}
void zadanie9() {
    int srednia = 0;
    
    int tab[2][2][2] = { { { 1,2 },{ 4,8 } },{ { 7,5 },{ 34,6 } } };
    int max=tab[0][0][0];
    int min=tab[0][0][0];
    zadanie9statystyki(tab,&max,&min,&srednia);
    cout << " srednia ze wszystkich pol: " << srednia << " maximum: " << max << " minimum: " << min;
}
void zadanie9statystyki(int m[2][2][2], int* j, int* d, int* t) {
  
    for (int i = 0;i < 2;i++) {
        for (int o = 0;o < 2;o++) {
            for (int k = 0;k < 2;k++) {
                *t = *t + m[i][o][k];
                if (*j < m[i][o][k]) {
                    *j = m[i][o][k];
                }
                if (*d > m[i][o][k]) {
                    *d = m[i][o][k];
                }
            }
        }
    }
    *t = *t / 8;
}
void zadanie10() {
    srand(time(NULL));
    int jeden, dwa, trzy;
    cout << "podaj pierwsza wspolrzeda: ", cin >> jeden;
    int*** tab = new int**[jeden];
    cout << "podaj druga wspolrzeda: ", cin >> dwa;
    cout << "podaj trzecia wspolrzeda: ", cin >> trzy;
        for (int i = 0;i < jeden;i++) {
            tab[i] = new int* [dwa];
            for (int j = 0;j < dwa;j++) {
                tab[i][j] = new int[trzy];
                for (int k = 0;k < trzy;k++) {
                    tab[i][j][k] = (rand() % 10) + 1;
                }
            }
    }
        int min = tab[0][0][0];
        int max = tab[0][0][0];
        int srednia = 0;
        zadanie10statystyki(tab, jeden, dwa, trzy, &min, &max, &srednia);
        cout << "srednia: " << srednia << " maximum: " << max << " minimum: " << min << endl;
        for (int i = 0;i < jeden;i++) {
            for (int j = 0;j < dwa;j++) {
                delete[]tab[i][j];
            }
            delete[]tab[i];
        }
        delete tab;
}
void zadanie10statystyki(int*** tablica,int x,int y,int z,int*min,int*max,int*srednia) {

    for (int i = 0;i < x;i++) {
        for (int o = 0;o < y;o++) {
            for (int k = 0;k < z;k++) {
                *srednia = *srednia + tablica[i][o][k];
                if (*max < tablica[i][o][k]) {
                    *max = tablica[i][o][k];
                }
                if (*min > tablica[i][o][k]) {
                    *min = tablica[i][o][k];
                }
            }
        }
    }
    *srednia = *srednia / (x + y + z);
}
void zadanie11() {
    srand(time(NULL));
    int jeden, dwa, trzy;
    cout << "podaj pierwsza wspolrzeda: ", cin >> jeden;
    int*** tab = new int** [jeden];
    cout << "podaj druga wspolrzeda: ", cin >> dwa;
    cout << "podaj trzecia wspolrzeda: ", cin >> trzy;
    for (int i = 0;i < jeden;i++) {
        tab[i] = new int* [dwa];
        for (int j = 0;j < dwa;j++) {
            tab[i][j] = new int[trzy];
            for (int k = 0;k < trzy;k++) {
                tab[i][j][k] = (rand() % 217) -2;
            }
        }
    }
    int min = tab[0][0][0];
    int max = tab[0][0][0];
    int srednia = 0;
    zadanie11statystyki(tab, jeden, dwa, trzy, &min, &max, &srednia);
    cout << "srednia: " << srednia << " maximum: " << max << " minimum: " << min << endl;
    for (int i = 0;i < jeden;i++) {
        for (int j = 0;j < dwa;j++) {

            delete[]tab[i][j];
        }
        delete[]tab[i];
    }
    delete tab;
}
void zadanie11statystyki(int*** tablica, int x, int y, int z, int* min, int* max, int* srednia){
    for (int i = 0;i < x;i++) {
        for (int o = 0;o < y;o++) {
            for (int k = 0;k < z;k++) {
                *srednia = *srednia + tablica[i][o][k];
                if (*max < tablica[i][o][k]) {
                    *max = tablica[i][o][k];
                }
                if (*min > tablica[i][o][k]) {
                    *min = tablica[i][o][k];
                }
            }
        }
    }
    *srednia = *srednia / (x+y+z);
}
void zadanie12() {//nie mam pewnosci o co chodzi w zadaniu wiec zrobie jak mi sie wydaje
    int** tab = new int* [10];
    for (int i = 0;i < 10;i++) {
        tab[i] = new int[i+1];
        for (int j = 0;j <=i;j++) {
            tab[i][j] = (i + 1) * (1+j);
        }
    }
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j <= i;j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0;i < 10;i++) {
        delete[]tab[i];
    }
    delete[]tab;
}