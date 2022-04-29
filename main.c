/*
 * File:   main.c
 * Author: Erik
 *
 * Created on April 27, 2022, 2:23 PM
 */
// DSPIC33EP32MC202 Configuration Bit Settings

// 'C' source line config statements

// FICD

//#define FCY 3685000

#pragma config ICS = PGD1               // ICD Communication Channel Select bits (Communicate on PGEC3 and PGED3)
#pragma config JTAGEN = OFF             // JTAG Enable bit (JTAG is disabled)

// FPOR
#pragma config ALTI2C1 = OFF             // Alternate I2C1 pins (I2C1 mapped to ASDA1/ASCL1 pins)
#pragma config ALTI2C2 = OFF             // Alternate I2C2 pins (I2C2 mapped to ASDA2/ASCL2 pins)
#pragma config WDTWIN = WIN25           // Watchdog Window Select bits (WDT Window is 25% of WDT period)

// FWDT
#pragma config WDTPOST = PS32768        // Watchdog Timer Postscaler bits (1:32,768)
#pragma config WDTPRE = PR128           // Watchdog Timer Prescaler bit (1:128)
#pragma config PLLKEN = ON              // PLL Lock Enable bit (Clock switch to PLL source will wait until the PLL lock signal is valid.)
#pragma config WINDIS = OFF             // Watchdog Timer Window Enable bit (Watchdog Timer in Non-Window mode)
#pragma config FWDTEN = OFF              // Watchdog Timer Enable bit (Watchdog timer always enabled)

// FOSC
#pragma config POSCMD = NONE           // Primary Oscillator disabled
#pragma config OSCIOFNC = ON         // OSC2 is general purpose digital I/O pin
#pragma config IOL1WAY = OFF             // Peripheral pin select configuration (Allow only one reconfiguration)
#pragma config FCKSM = CSDCMD           // Clock Switching Mode bits (Both Clock switching and Fail-safe Clock Monitor are disabled)

// FOSCSEL
#pragma config FNOSC = FRC          // Internal Fast RC (FRC) Oscillator 7.37 MHz
#pragma config PWMLOCK = OFF            // PWM Lock Enable bit (Certain PWM registers may only be written after key sequence)
#pragma config IESO = ON                // Two-speed Oscillator Start-up Enable bit (Start up device with FRC, then switch to user-selected oscillator source)

// FGS
#pragma config GWRP = OFF               // General Segment Write-Protect bit (General Segment may be written)
#pragma config GCP = OFF                // General Segment Code-Protect bit (General Segment Code protect is Disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <stdio.h>
#include <p33ep512mc502.h>
#include <stdlib.h>
#include <string.h>

void __attribute__((__interrupt__, auto_psv)) _U2RXInterrupt(void);

void __attribute__((__interrupt__, auto_psv)) _U2RXInterrupt(void)             
{

    return;
 }
void main(void) {
    while(1)
    {
    }
    return;
}
      