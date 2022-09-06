#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int izq=7;
    int der=7;
    int inputSegundos;
    float segundos;
    if((der%2)==0 && izq<=der){
        segundos=pow(der-1,2) + izq;
    }
    else if ((der%2)==1 && izq<=der){
        segundos=pow(der,2)-(izq-1);
    }
    else if ((izq%2)==1 && izq>der){
        segundos=pow(izq-1,2)+der;
    }
    else if ((izq%2)==0 && izq>der){
        segundos=pow(izq,2) -(der-1);
    }
    
    cout<<segundos;
    return 0;
}
