#include <iostream>

using namespace std;

int main() {
    // Float-Konstanten (mit 'f' oder im wissenschaftlichen Format)
    float f1 = 2.3f;       //[cite: 2]
    float f2 = 2e-5f;      //[cite: 2]

    // Double-Konstanten (Standard für Dezimalzahlen)
    double d1 = -42.536;   //[cite: 2]
    double d2 = 4.7e98;    //[cite: 2]
    double d3 = .12;       // Entspricht 0.12[cite: 2]

    // Long Double-Konstante (mit 'L' am Ende)
    long double ld1 = 55.55L; //[cite: 2]

    // Werte ausgeben
    cout << "--- Werte der Konstanten ---" << endl;
    cout << "f1 (float): " << f1 << endl;
    cout << "f2 (float): " << f2 << endl;
    cout << "d1 (double): " << d1 << endl;
    cout << "d2 (double): " << d2 << endl;
    cout << "d3 (double): " << d3 << endl;
    cout << "ld1 (long double): " << ld1 << endl;

    // Speichergröße in Bytes prüfen (ähnlich wie im Screenshot-Beispiel)
    cout << "\n--- Speicherbedarf ---" << endl;
    cout << "Groesse von float: " << sizeof(float) << " Bytes" << endl;
    cout << "Groesse von double: " << sizeof(double) << " Bytes" << endl;
    cout << "Groesse von long double: " << sizeof(long double) << " Bytes" << endl;

    return 0;
}