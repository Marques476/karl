#include <iostream>
using namespace std;

int main(){
    int Cv, Ce, Cs, Fv, Fe, Fs;

    cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

    int pontosC = Cv*3 + Ce;
    int pontosF = Fv*3 + Fe;

    if(pontosC > pontosF){
        cout << "C";
    } else if(pontosF > pontosC){
        cout << "F";
    } else {
        if(Cs > Fs){
            cout << "C";
        } else if(Fs > Cs){
            cout << "F";
        } else {
            cout << "=" << endl;
        }
    }

}