#include <stdio.h>

int main() {
   
        for ( int i = 1; i <= 20 ; i++){  /*BUCLE PRINCIPAL PARA DESPLEGAR LA LISTA DE factoriales del 1 AL 20 */ 

          unsigned long long factorial=1;
          unsigned long long factorial1;
          unsigned long long contadordigitos=1;
          
          for (int j = i; j > 1; j--) {  /*BLOQUE PARA CALCULAR EL FACTORIAL */
                factorial =factorial*j;
                }

            factorial1 = factorial;   /*VARIABLE TEMPORAL PARA EVALUAR LOS DIGITOS DEL FACTORIAL Y ESTE VALOR NO CAMBIE*/

            while(factorial1/10 > 0) { /*BLOQUE PARA CALCULAR LAS CIFRAS */
               factorial1=factorial1/10;
               contadordigitos++;  /*ESTA VARIABLE ES LA QUE GUARDA EL VALOR DE CUANTOS DIGITOS HAY */ 
             }
                
           printf("Factorial de %d es: %llu y tiene %llu digitos. \n",i,factorial,contadordigitos);

        }
    
        return 0;
    }
