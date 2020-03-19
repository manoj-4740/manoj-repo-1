// extracting of bytes//
#include <stdio.h>
#include <stdint.h>

uint8_t Byte0,Byte1,Byte2,Byte3,index;
uint32_t Bytes[3];
uint32_t var=0x12345678;

void main()
{
 /* 
 byte0=(var>>0)&0xff;
 
 byte1=(var>>8)&0xff;
 
 byte2=(var>>16)&0xff;
 
 byte3=(var>>24)&0xff; */
 
/*Bytes[0]=byte0;
  Bytes[1]=byte1;
  Bytes[2]=byte2;
  Bytes[3]=byte3; */


 
 for(index=0;index<4;index++)
 {
	Bytes[index] = (var>>(index)*8)&0xff;
  printf("extracted bytes %d",&Bytes[index]);
 
 }


}