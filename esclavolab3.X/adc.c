/*
 * File:   adc.c
 * Author: Guille Lam
 *
 */


#include <xc.h> 
#include <stdint.h>  
#include "adc.h"

#define _XTAL_FREQ 4000000


#include <xc.h>
#include <stdint.h>
#include <pic16f887.h> 
#include "adc.h" 
#define _XTAL_FREQ 4000000

void ADC_config(char frec) { 
    switch(frec){
        case 0: 
            ADCON0bits.CHS = 0;     
            __delay_us(100);
            ADCON0bits.ADCS0 = 0;   
            ADCON0bits.ADCS1 = 0;   
            ADCON0bits.ADON = 1;    
            ADCON1bits.ADFM = 0;    
            ADCON1bits.VCFG1 = 0;   
            ADCON1bits.VCFG0 = 0;   
            break;
        case 1:
            ADCON0bits.CHS = 0;     
            __delay_us(100);
            ADCON0bits.ADCS0 = 1;   
            ADCON0bits.ADCS1 = 0;   
            ADCON0bits.ADON = 1;    
            ADCON1bits.ADFM = 0;    
            ADCON1bits.VCFG1 = 0;   
            ADCON1bits.VCFG0 = 0;   
            break;
        case 2: 
            ADCON0bits.CHS = 0;     
            __delay_us(100);
            ADCON0bits.ADCS0 = 0;   
            ADCON0bits.ADCS1 = 1;   
            ADCON0bits.ADON = 1;    
            ADCON1bits.ADFM = 0;    
            ADCON1bits.VCFG1 = 0;   
            ADCON1bits.VCFG0 = 0;   
            break;
        case 3: 
            ADCON0bits.CHS = 0;     
            __delay_us(100);
            ADCON0bits.ADCS0 = 1;   
            ADCON0bits.ADCS1 = 1;   
            ADCON0bits.ADON = 1;    
            ADCON1bits.ADFM = 0;    
            ADCON1bits.VCFG1 = 0;   
            ADCON1bits.VCFG0 = 0;   
            break;
    }
    return;
}