/*This code toggles with delay size in Port2 of 8051 microcontroller.

Run this on Keil IDE to view during run-time of program.*/

#include<reg51.h>  /* Header file denotes the contoller name(8051)*/
void delay(unsigned int);
int main(){
while(1){
P1 = 0x44;
delay(30000);
P1 = 0xBB;
delay(50000);				
}
}
void delay(unsigned int time){
unsigned int a,b;
for(a=0;i<time;i++)
for(b=0;b<1275;b++)
}
