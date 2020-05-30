#include <iostream>

using namespace std;

int main(){
    const int N =2, M=2;
    float matriz [N] [M];
    int fila, columna;
 cout<<"inserte los numeros para la tabla: "<<endl;
    for (fila = 0; fila < N; fila++)
    
    {
        for (columna = 0; columna < M; columna++)
        {
            cout<<"numero : " ;
            cin>>matriz [fila][columna];
        }
    }
cout<<endl;
    cout<<"Mostrando la tabla: "<<endl;

    for (fila = 0; fila < N; fila++)
    { 
        for (columna = 0; columna < M; columna++)
        {
            cout<<matriz [fila][columna]<<" ";
        }

        cout<<endl;
    }

    
}