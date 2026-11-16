/****************************************/
/* Sebastian Klütz */
/* Gruppe: Do14, Leiter: Tom-Lasse Barth*/
/* Übungsblatt: 1, Aufgabe: 1 */
/* Datum: 01.11.2026 */
/* Status: lauffähig */
/****************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

float mittelwert(int* wa, int size){
    float mw = 0;
    for (int i = 0; i < size ; ++i){
        mw += wa[i];
    }
    return mw / size;
};

int main(){
    int n{0};
    cout << "natürliche Zahl eingeben für Länge des Arrays:" << endl;
    cin >> n;
    int* w = new int[n];
    for(int i = 0; i < n; i++){
        w[i] = rand();
        cout << w[i] << endl; 
    }

    cout << "Der Mittelwert der genergierten Werte beträgt: " << mittelwert(w, n) << endl;

    delete[] w;



    return 0;
}

//g++ -Wall kluetz_oop_üb3no5.cpp -o o
