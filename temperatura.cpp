#include <iostream>
using namespace std;

int main(){
    float temperatura;
    cout << "Digite a temperatura: ";
    cin >> temperatura;

    if(temperatura < 0){
        cout<< "Muito frio";
    } else if (temperatura < 19){
        cout << "frio";
    } else if (temperatura < 25){
        cout << "Agradável";
    } else if (temperatura < 32){
        cout << "Quente";
    } else {
        cout << "Muito quente";
    }
    return 0;
}