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

class Auto{
    private:
    string typ;
    double tachostand;

    public:
    void fahren(double distanz);
    void abschleppen(Auto& ab_auto, double distanz);
    string liesTyp();
    double liesTachostand();
    void ausgeben();

    Auto(string t = "unbekannt", double ts = 0){
        typ = t;
        tachostand = ts;
    };

    /*Auto(){
        typ = "unbekannt";
        tachostand = 0;
    };*/
};

void Auto::fahren(double distanz){
    this->tachostand += distanz;
};

string Auto::liesTyp(){
    return this->typ;
};

double Auto::liesTachostand(){
    return this->tachostand;
};

void Auto::abschleppen(Auto& ab_auto, double distanz){
    this->fahren(distanz);
    ab_auto.fahren(distanz);
};

void Auto::ausgeben(){
    cout << "Typ: " << this->typ << endl;
    cout << "Tachstand in km: : " << this->tachostand << endl;
    cout << endl;
};

int main(){
    Auto a1{"VW", 100.5};
    Auto a2;
    cout << "Typ des Autos a1: " << a1.liesTyp() << endl; 
    cout << "Tachostand a1: " << a1.liesTachostand() << endl; 

    cout << "Typ des Autos a2: " << a2.liesTyp() << endl; 
    cout << "Tachostand a2: " << a2.liesTachostand() << endl; 

    cout << "Fahre mit Auto a1 50km" << endl;
    a1.fahren(50);
    cout << "Neuer Tachostand von a1: " << a1.liesTachostand() << "km" <<  endl;

    cout << "Schleppe mit a1 das Auto a2 zu einer 23.75km entfernten Tankstelle" << endl;
    a1.abschleppen(a2, 23.75);
    cout <<"gebe Auto a1 aus :" << endl;
    a1.ausgeben();
    cout <<"gebe Auto a2 aus :" << endl;
    a2.ausgeben();

    return 0;
}