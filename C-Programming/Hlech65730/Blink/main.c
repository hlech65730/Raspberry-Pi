// blink.c
//
// Example program for bcm2835 library
// Blinks a pin on an off every 0.5 secs
//
// After installing bcm2835, you can build this
// with something like:
// gcc -o blink blink.c -l bcm2835
// sudo ./blink
//
// Or you can test it before installing with:
// gcc -o blink -I ../../src ../../src/bcm2835.c blink.c
// sudo ./blink
//
// Author: Mike McCauley
// Copyright (C) 2011 Mike McCauley
// $Id: RF22.h,v 1.21 2012/05/30 01:51:25 mikem Exp $

#include "/etc/bcm2835-1.60/src/bcm2835.h"
#include "/etc/bcm2835-1.60/src/bcm2835.c"
#include <stdio.h>
#include <stdlib.h>

// Blinks on RPi Plug P1 pin 11 (which is GPIO pin 17)
#define GPIO17 RPI_GPIO_P1_11
#define GPIO18 RPI_GPIO_P1_12
#define GPIO21 RPI_GPIO_P1_13
#define GPIO22 RPI_GPIO_P1_15
#define GPIO23 RPI_GPIO_P1_16
#define GPIO24 RPI_GPIO_P1_18
#define GPIO25 RPI_GPIO_P1_22





int main(int argc, char **argv)
{

    int i;
    int var_select = 17;
    int* ptr_select = &var_select;

    printf("Please  select  GPIO from 17,18,21-25 !\n");

    scanf("%d",ptr_select);

    printf("Sie haben folgende GPIO gewählt : %d",var_select);

    bcm2835_delay(500);

    // If you call this, it will not actually access the GPIO
    // Use for testing - bcm2835_set_debug(1);

    if (!bcm2835_init())
      return 1;

    if(var_select == 17)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO17, BCM2835_GPIO_FSEL_OUTP);

    if(var_select == 18)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO18, BCM2835_GPIO_FSEL_OUTP);

    if(var_select == 21)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO21, BCM2835_GPIO_FSEL_OUTP);

    if(var_select == 22)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO22, BCM2835_GPIO_FSEL_OUTP);

    if(var_select == 23)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO23, BCM2835_GPIO_FSEL_OUTP);

    if(var_select == 24)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO24, BCM2835_GPIO_FSEL_OUTP);

    if(var_select == 25)
    // Set the pin to be an output
    bcm2835_gpio_fsel(GPIO25, BCM2835_GPIO_FSEL_OUTP);

    bcm2835_delay(500);


    //Blink
    for (i=1;i<1000;i++)
    {
	// Turn it on
	bcm2835_gpio_write(GPIO17, HIGH);

	// wait a bit
	bcm2835_delay(500);

	// turn it off
	bcm2835_gpio_write(GPIO17, LOW);

	// wait a bit
	bcm2835_delay(500);

    }

    //
    //End Blink

    bcm2835_close();

    return 0;

}

