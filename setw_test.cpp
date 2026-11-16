#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>

using namespace std;

int main(){
    int i = 0;
    cin >> i;
    cout << '|' << setw(7) << i << '|' << endl; 
    cout << '|' << setw(7) << left << i << right << '|' << endl; 
    cin.clear();
    while(1){
        cout << "Weite eingeben wie viele Zeichen von der Eingabe übernommen werden, abbruch bei negativer Zahl" << endl;
        int w = 0;
        cin >> w;
        string rest;
        cin >> rest;
        if(w<0){ break; }
        cout << "Es werden " << w << "Zeichen eingelesen, jetzt bitte String eingeben" << endl;
        string eingabe;
        cin >> setw(w) >> eingabe;
        cin >> rest;
        cout << "die ersten " << w << " Zeichen ihrer eingabe die übernommen und angezeigt werden: " << eingabe << endl;
    }
    
return 0;
}
