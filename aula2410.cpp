#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int i, conta_p, conta_t = 0;
    for (i=0; i<n; i++) {
        cin>>conta_p;
        conta_t+=conta_p;
    }

    int t;
    cin>>t;
    if(t==conta_t){
        cout<<"Acertou"<<endl;
     }
      else cout<<"Errou"<<endl;
    return 0;
}