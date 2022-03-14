/*
 * File:   main.c
 * Author: alf64
 *
 * Created on March 11, 2022, 8:44 AM
 */


#include <xc.h>
#include "../include/config.h"

uint8_t multiply_by_2(uint8_t x);

void main(void) {
    
    while(1){
        uint8_t loop_counter = 0;
        
        if(loop_counter == 255)
        {
            loop_counter = 0;
        }
        
        uint8_t uut = 8;
        uint8_t exp_val = 16;
        uint8_t result = 0;
        
        result = multiply_by_2(uut);
        
        if(result == exp_val)
        {
            continue;
        }
        else
        {
            break;
        }
        
        loop_counter++;
    }
    
    while(1){};
    
    return;
}

uint8_t multiply_by_2(uint8_t x)
{
    uint8_t y = 0;
    if(x < 0x80)
    {
        y = x * 2;
    }
    else
    {
        y = 1;
    }
    
    return y;
}
