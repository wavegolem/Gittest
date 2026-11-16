/****************************************/
/* Sebastian Klütz */
/* Gruppe: Do14, Leiter: Tom-Lasse Barth*/
/* Übungsblatt: 1, Aufgabe: 1 */
/* Datum: 09.11.2026 */
/* Status: lauffähig */
/****************************************/

#include <iostream>
#include <string.h>

using namespace std;

class song{
    public:
    string title;
    string interpret;
    int erscheinungsjahr;
    string plattenfirma;

    void ausgeben();
};

void song::ausgeben(){
    cout << "Songdaten: " << endl;
    cout << "Titel: " << this->title << endl;
    cout << "Interpret: " << this->interpret << endl;
    cout << "Erscheinungsjahr: " << this->erscheinungsjahr << endl;
    cout << "Plattenfirma: " << this->plattenfirma << endl; 
    cout << endl;
};

int main(){

    cout << "Generiere KI-Slop Song: Coming Home, Scorpion Mortalkombat, 1997, GoodboyRecords" << endl;
    song song_1;
    song_1.title = "Coming Home";
    song_1.interpret = "Scorpion Mortalkombat";
    song_1.erscheinungsjahr = 1997;
    song_1.plattenfirma = "GoodboyRecords";
    song_1.ausgeben();

    cout << "Generiere zweiten KI-Slop Song: Leaving Home, Sonja Blade, 2026, GoodboyRecords" << endl;
    song song_2;
    song_2.title = "Leaving Home";
    song_2.interpret = "Sonja Blade";
    song_2.erscheinungsjahr = 2026;
    song_2.plattenfirma = "GoodboyRecords";
    song_2.ausgeben();

    return 0;
}