#include <iostream>
using namespace std;

int main () {
    int i=0, n=0, primo =1, secondo=1, terzo=0;
    if (n<2) {
        cout<<"errore"<<endl;
    } else {
        cout<<primo<<endl;
        cout<<secondo<<endl;
    for (int i=2; i<n; i++) {
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
        cout<<terzo<<endl;
    }
     
   
