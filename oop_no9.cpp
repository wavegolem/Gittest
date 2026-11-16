/****************************************/
/* Sebastian Klütz */
/* Gruppe: Do14, Leiter: Tom-Lasse Barth*/
/* Übungsblatt: 4, Aufgabe: 10 */
/* Datum: 09.11.2026 */
/* Status: lauffähig */
/****************************************/

#include <iostream>
#include <string.h>

using namespace std;

class Mietwohnung{
    private:
    int zimmer;
    double flaecheQm;
    double qmPreis;
    string nameMieter;

    public:
    Mietwohnung(int z = 0, double fl = 0,  double pr = 0, string nM = "leer"){
        zimmer = z;
        flaecheQm = fl;
        qmPreis = pr;
        nameMieter = nM;
    }

    void ändereQmPreis(double neueMiete);
    double monatlicheMiete();
    void ausgeben();
};

void Mietwohnung::ausgeben(){
    cout << "Mietwohnung: " << endl;
    cout << "Zimmer: " << this->zimmer << endl;
    cout << "Wohnfläche ein Qm: " << this->flaecheQm << endl;
    cout << "Preis pro Qm in €: " << this->qmPreis << endl;
    cout << "Name des Mieters: " << this->nameMieter << endl; 
    cout << endl;
};

double Mietwohnung::monatlicheMiete(){
    double gesamt_kosten = (this->flaecheQm)*(this->qmPreis);
    return gesamt_kosten;
};

void Mietwohnung::ändereQmPreis(double neueMiete){
    if(neueMiete < 0){
        cout << "ungültiger Wert eingegeben, bitte einen Wert größer 0 eingeben" << endl;
    }
    else if(neueMiete >= 0){
        this->qmPreis = neueMiete;
        cout << "Die neue Miete beträgt: " << this->qmPreis << " €" << endl;
    }
    else {
        cerr << "Fehler unterlaufen, bitte Programm neustarten! :: cerr\n";
    }
}



int main(){

    cout << "Anlegen: Zimmer 15, 100,3Qm, 10,15€/Qm, Saxton Hale" << endl;
    Mietwohnung mw(15, 100.3,  10.15, "Saxton Hale");
    cout << "ändere den Preis der Wohnung auf -100,22€" << endl;
    mw.ändereQmPreis(-100.22);
    cout << "ändere den Preis der Wohnung auf 100,22€" << endl;
    mw.ändereQmPreis(100.22);
    cout << "Gebe die Gesamtkosten der Wohnung aus: " << mw.monatlicheMiete() << "€" << endl;
    cout << "Gebe alle Infos der Mietwohnung aus: "  << endl;
    mw.ausgeben();

    return 0;
}