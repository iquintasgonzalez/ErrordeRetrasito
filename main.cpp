/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: iqgonzalez
 *
 * Created on 28 de marzo de 2017, 12:52
 */

#include <cstdlib>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


using namespace std;

/*
 * 
 */
int main(uint16_t a, uint16_t b, uint16_t usum, uint16_t suma, int16_t resta,uint16_t resta1) {
    int op = 0;
    a = 0;
    b = 0;
    usum = 0;
    suma = 0;
    resta = 0;
    resta1 = 0;

    printf("Itroduce 1=");
    scanf("%d", &a);
    printf("Introduce 2=");
    scanf("%d", &b);
    printf("\n[1] es suma con signo"
            "\n[2] es suma sin signo"
            "\n[3] resta sin signo"
            "\n[4] resta con signo"
            "\nOpcion Elegida=");

    scanf("%d", &op);

    switch (op) {

        case 1:
        {
            //suma sin signo
            if (UINT16_MAX - a < b) {
                /* Handle error */
                printf("\n Error de retrasito");
            } else {
                usum = a + b;
                printf("\n La suma es = %hd", usum);
            }
            uint16_t usum = a + b;

            break; /* optional */
        }
        case 2:
        {
            if (UINT16_MAX - a < b) {
                /* Handle error */
                printf("\n Error de retrasito");
            } else {
                int16_t suma = a + b;
                printf("\n La suma es = %hd", suma);
            }

            break; /* optional */
        }
        case 3:
        {
            if ((b > 0 && a < INT16_MIN + b) || (b < 0 && a > INT16_MAX + b)) {
                /* Handle error */
                printf("\n Error de retrasito");
            } else {
                int16_t resta = a - b;
                printf("\n La resta es = %hd", resta);
            }

            break; /* optional */
        }
        case 4:
        {
            if ((b > 0 && a < INT16_MIN + b) || (b < 0 && a > INT16_MAX + b)) {
                /* Handle error */
                printf("\n Error de retrasito");
            } else {
                uint16_t resta1 = a - b;
                printf("\n La resta es = %hd", resta1);
            }

            break; /* optional */
        }
            /* you can have any number of case statements */
        default: /* Optional */

            break;
    }




    if (UINT16_MAX - a < b) {
        /* Handle error */
        printf("\n Error de retrasito");
    } else {
        usum = a + b;
        printf("\n usum = %hd", usum);
    }

    return 0;
}

