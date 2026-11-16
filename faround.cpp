#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>

using namespace std;

int main(){
    while(1){
        cout << "Weite eingeben wie viele Zeichen von der Eingabe übernommen werden, abbruch bei negativer Zahl" << endl;
        int w = 0;
        cin >> w;
        if(w<0){ break; }
        cout << "Es werden " << w << "Zeichen eingelesen, jetzt bitte String eingeben" << endl;
        string eingabe;
        cin >> setw(w) >> eingabe;
        string rest;
        cin >> rest; //wenn eingabe länger als w dann muss der "ungewollte" der der Nachricht nach dem w. Zeichen eingelesen werden,
                     //sonst verbleibt es im buffer/stream und wird beim nächsten durchgang von cin wieder eingelesen!!!
        cout << "die ersten " << w << " Zeichen ihrer eingabe die übernommen und angezeigt werden: " << eingabe << endl;
    }
    
return 0;
}
