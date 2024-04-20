#include <cstdlib>
#include <iostream>
#include "coda.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    Coda<int> codino(10);  
    bool usc;
    int i, add;
     
        usc = codino.codaVuota();

        for (i=0; i<4; i++)
        {
            cout << "Inserisci: ";
            cin >> add;
            codino.inCoda(add);
        }    
        
      cout << "Stampa della coda: " << endl;
      codino.stampaCoda();
      cout << "testa della coda: " << codino.leggiCoda() << endl; 
      
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
