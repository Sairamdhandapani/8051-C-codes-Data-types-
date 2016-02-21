/*This code toggles with delay size in Port2 of 8051 microcontroller.

Run this on Keil IDE to view during run-time of program.*/

#include<reg51.h>  /* Header file denotes the contoller name(8051)*/

int main(){
unsigned int a;
for( ; ; ){
P1 = 0x44;
for(a=0;a<30000;a++)
P1 = 0xBB;
for(a=0;a<30000;a++)				
}
}