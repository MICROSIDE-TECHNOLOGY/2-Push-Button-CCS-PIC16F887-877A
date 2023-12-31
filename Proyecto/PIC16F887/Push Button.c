/************************************************************************************************
Company:
Microside Technology Inc.
File Name:
Push Button.c
Product Revision  :  1
Device            :  X-TRAINER
Driver Version    :  1.0
************************************************************************************************/

/*
---------------------------------------------------------------------------
 Implementar el control de encendido y apagado de un LED mediante
 un bot�n pulsador.
---------------------------------------------------------------------------
*/

#include <16F887.h>                   //Incluye el microcontrolador con el que se va a trabajar 
#use delay ( clock=20Mhz, crystal )   //Tipo de oscilador y frecuencia dependiendo del microcontrolador 

#define LED PIN_A1                    //Asigna el pin A1 al LED del X-TRAINER
#define BOTON PIN_A2                  //Asigna el pin A2 al boton BOOT del X-TRAINER

void main ( void ) {
   set_tris_a ( 0b11111101 );         //Pin A1 como salida
   
   while ( 1 ) {                      //Ciclo repetitivo
      if ( 0 == input ( BOTON ) ) {   //Lee el estado del boton
         output_high ( LED );         //Si se presiona el boton enciende el LED
      } else {
         output_low ( LED );          //De lo contrario el LED se apaga
      }
   }
}
