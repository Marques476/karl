#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;

    if(n > 0){
        cout << "O número é positivo" << endl;
}  else if(n < 0){
        cout << "o numero é negativo";
}   else{
        cout << "o número é zero"<< endl;
}
    return 0;
}