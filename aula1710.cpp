#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Digite um numero: ";
    cin >> n;

    if(n%2 == 0){
        cout << "o número é par" << endl;
    }else{ 
        cout << "o número é impar" << endl;
    }

}