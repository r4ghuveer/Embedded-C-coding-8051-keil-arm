#include <stdio.h>
#include <reg52.h>
 
unsigned int i=0,j=0;
main() {
	P0=0x00; 
	while(1){
		P0=0xF2;
		for(i=0;i<1275;i++){
			for(j=0;j<=1000;j++){}
			}
		P0=0x00;
		for(i=0;i<1275;i++){
			for(j=0;j<=1000;j++){}
			}
		}
	}