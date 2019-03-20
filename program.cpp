// Test File
#include <iostream>                                     
/** Multi linea
 * commentario
 */
 using namespace std;
 
int main(int cantidad, char* valores[])
{     
    int x [cantidad];
   
    cout << "Amount Parameters "<<cantidad<< endl;
 
     
     for(int i = 1; i < cantidad; i++ ){
      
         x[i-1] = atoi(valores[i]);
         cout << x[i-1] << endl ;

    
   }
    
 
    
    
    
    return 0;                                         
}
