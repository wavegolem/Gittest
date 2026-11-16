#include <iostream>

using namespace std;

int main(){
    while(1){
    int k = 0;
    cin >> k;
    if(k == -55){ break; }
    int x = ((k != 0) && (1 / k > 0.2)) ? k : 0; //ist k == 0 dann wird (1 / k > 0.2) nicht mehr überprüft
                                                 //wenn true dann x == k, wenn false dann k == 0
    cout << x << endl;
}
return 0;
}