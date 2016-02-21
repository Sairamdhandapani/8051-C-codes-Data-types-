/*This code toggle single bit in Port2 of 8051 microcontroller.

Run this on Keil IDE to view during run-time of program.*/

#include<reg51.h>  /* Header file denotes the contoller name(8051)*/
sbit bit=P2^0;		/* declared sbit before main()*/

int main(){
unsigned char a;
for(a=0;a<=1000;a++){
bit =1;
bit =0;		
}
}