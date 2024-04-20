   #include <iostream>
   #include <assert.h>
   #include "coda.h"
    
  using namespace std;
    
  

template <class tipoelem>
    Coda<tipoelem>::Coda(int n){
        maxlung = n;
        creaCoda();
    };
    
    template <class tipoelem>
    Coda<tipoelem>::Coda()
    {
       maxlung = 100;
       creaCoda();
    };
                           
    template <class tipoelem>
    Coda<tipoelem>::~Coda(){
     delete[] VET;
    };
    
    template <class tipoelem>
    void Coda<tipoelem>::creaCoda()
    {
         VET = new tipoelem[maxlung];
         testa = 0;
         lung = 0;
    };
    
    template <class tipoelem>
    bool Coda<tipoelem>::codaVuota()
    {
         return (lung == 0);
    };
    
    template <class tipoelem>
    tipoelem Coda<tipoelem>::leggiCoda()
    {
        if((!codaVuota()));
        return (VET[testa]);
    };
    
    template <class tipoelem>
    void Coda<tipoelem>::fuoriCoda()
    {
         if(!codaVuota());
         testa = (testa + 1) % maxlung;
         lung--;
    };
    
    template <class tipoelem>
    void Coda<tipoelem>::inCoda(tipoelem a)
    {
      if(lung != maxlung);
      VET[(testa+lung) % maxlung] = a;
      lung++;
    };
    
    template <class tipoelem>
    void Coda<tipoelem>::stampaCoda()
    {
         stampa();
         invertiCoda();       
    }; 
     
     template <class tipoelem>
    void Coda<tipoelem>::stampa()
    {  
        tipoelem Elemento; 
        if (!codaVuota())   {
              Elemento = leggiCoda();
        
		      fuoriCoda();
		      cout << Elemento << " " << endl;
	          stampa();
		      inCoda(Elemento);
         }  
   }

    template <class tipoelem>
    void Coda<tipoelem>::invertiCoda()
    {
        tipoelem Elemento;
        if (!codaVuota())   {
              Elemento = leggiCoda();
        
		      fuoriCoda();
		 
	          invertiCoda();
		      inCoda(Elemento);
         }  
    }; 