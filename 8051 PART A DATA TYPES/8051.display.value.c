/*This code displays 00-FFH in binary in Port2 of 8051 microcontroller.

Run this on Keil IDE to view during run-time of program.*/

#include<reg51.h>  /* Header file denotes the contoller name(8051)*/

int main(){
unsigned char a;
for(a=0;a<=255;a++)
P2=a;				
}