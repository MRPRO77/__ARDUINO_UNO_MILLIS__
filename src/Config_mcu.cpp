/************************************************************************************************************

                                      configurações Mega ADK
************************************************************************************************************/

                                   /* Arquivos de Bibliotecas */

 // ========================================================================================================
// --- Bibliotecas Auxiliares --- //

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <avr/interrupt.h>
#include <avr/io.h>



/**********************************************************************************************************/
                                        /* Arquivos de inclusão */


#include "config_mcu.h"




#define led_Sinalizacao 13

                                 
unsigned long ultimaMudanca = millis();                       // variável para contagem de tempo sinalização do funcionamento do programa





// ======================================================================================================
// --- Função de inicialização do AVR 2560 ADK---
// ======================================================================================================
// --- Objetos ---
 void config_mcu()

 {
              
                 
            

   pinMode(led_Sinalizacao,OUTPUT);                                    // configura digital 13 como saida

                
   
 }



 void Funcionamento_Sistema ()

   {
        if ((millis() - ultimaMudanca) < 2000)
        {
        digitalWrite(led_Sinalizacao, HIGH);
        }
        else
        {
        digitalWrite(led_Sinalizacao,LOW);
        }
        if((millis() - ultimaMudanca) > 4000)
        {
            ultimaMudanca = millis();
        }

 }

 