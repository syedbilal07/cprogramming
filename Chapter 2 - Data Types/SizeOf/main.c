/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Syed Bilal
 *
 * Created on January 28, 2017, 12:59 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Storage Size Of float Is  : %d \n", sizeof(float));
    printf("Minimum Float Positive Value : %E \n", FLT_MIN);
    printf("Maximum Float Positive Value  : %E \n", FLT_MAX);
    printf("Precision Value Is  : %d \n", FLT_DIG);
    return (EXIT_SUCCESS);
}

