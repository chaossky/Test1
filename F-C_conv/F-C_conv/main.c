//
//  main.c
//  F-C_conv
//
//  Created by 이장훈 on 2016. 11. 26..
//  Copyright © 2016년 이장훈. All rights reserved.
//

#include <stdio.h>
/*
 Print Fahrenheit-Celcius table
 for fahr=0, 20, .....,300
 */

int main() {
    // int fahr, celcius;
    float fahr, celcius;
    
    int lower, upper, step;
    
    lower=0;
    upper=300;
    step=10;
    
    fahr=lower;
    
    while(fahr<=upper){
       // celcius=5*(fahr-32)/9;
        // printf("%d\t => %d\n",fahr,celcius);
        celcius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.6f\n",fahr,celcius);
        fahr=fahr+step;
    
    }
}
