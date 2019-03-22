
// Test File
#include <iostream>                                     
/** Multi linea
 * commentario
 */

using namespace std;
void imprimir (int size, int coleccion[] )
{
    for(int i = 0; i < size; i++ )
    {
        cout << coleccion[i] << " " ;
    }
    cout<< endl;
}

int main(int cantidad, char* valores[])
{   
    int x [cantidad-1];
    cout << "Amount Parameters "<<cantidad<< endl;
 
     for(int i = 1; i < cantidad; i++ )
    {
         x[i-1] = atoi(valores[i]);
}
    imprimir(cantidad-1,x);
    return 0;                                         
}
