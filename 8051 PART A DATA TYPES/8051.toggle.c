/*This code toggles all bits of Port2 of 8051 microcontroller.

Run this on Keil IDE to view during run-time of program.*/

#include<reg51.h>  /* Header file denotes the contoller name(8051)*/

int main(){
while(1){		/* repeat forever , We can use for(; ; ) to repeat the process forever.*/ 
P2 =0x44;
p2 =0xff;				
}
}