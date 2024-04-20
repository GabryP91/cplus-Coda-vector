/*******************************************************************
 template per: Coda rappresentata con vettore
*******************************************************************/
#ifndef _CODAVT_
#define _CODAVT_
#include <iostream>

    template < class tipoelem >
    class Coda {
         public:
            Coda(int);
            Coda();
            ~Coda();
          
            void creaCoda();
            bool codaVuota();
            void fuoriCoda();
            void inCoda(tipoelem);
            tipoelem leggiCoda();
            void stampaCoda();
            
        private:
            tipoelem *VET;
            int testa, lung, maxlung;
            void stampa();    
            void invertiCoda();
    };
    
#endif /* _CODAVT_H_ */
