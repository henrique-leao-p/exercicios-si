#include <iostream>

using namespace std;

int main() {
    int nPredios;

    cout << "amigos";
    
    cin >> nPredios;
    int andares[nPredios];
    int maiorDistancia = 0;

    for (int i = 0; i < nPredios; i++) {
      do{
           cin >> andares[i];
       }while(andares[i] < 2 || andares[i] > 2000000);
    }


    for (int i = 0; i < nPredios; i++) {
        for (int j = i; j < nPredios; j++) {
            if(andares[i] + andares[j] + (j -i) > maiorDistancia){
                maiorDistancia = andares[i] + andares[j] + ((j - i));
            }
        }
    }

    std::cout << maiorDistancia << std::endl;

    return 0;
}
