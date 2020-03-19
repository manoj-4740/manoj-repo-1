/* C PROGRAMM FOR COMBINING BYTES*/
#include<stdio.h>
#include<stdint.h>


uint16_t Combine_16Bytes(uint8_t low_byte,uint8_t high_byte);

//uint16_t user_data;
uint8_t user_byte1,user_byte2;
 
int main(void)
{
printf("\n Enter the lower byte is:");
scanf("%x",&user_byte1);

printf("\n Enter the higher byte is:");
scanf("%x",&user_byte2);

uint16_t user_data=Combine_16Bytes(user_byte1,user_byte2);
printf("\n Enter the higher byte is %x",user_data);
}

uint16_t Combine_16Bytes(uint8_t low_byte,uint8_t high_byte)
{
 uint16_t data_16bit=0;
 data_16bit=(high_byte<<8)|(low_byte);
 return data_16bit;
} 