#include <stdio.h>
#include <reg52.h>
sbit pin=P0^0; 
unsigned int i=0,j=0;
main() {
	P0=0x00; 
	while(1){
		pin=1;
		for(i=0;i<=1275;i++){
			for(j=0;j<250;j++){}
			}
		pin=0;
		for(i=0;i<=1275;i++){
			for(j=0;j<250;j++){}
			}
		}
	}
		