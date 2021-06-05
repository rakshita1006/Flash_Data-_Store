///*
// * Flash_Sector.h
// *
// *  Created on: Jun 2, 2021
// *      Author: abc
// */

//#ifndef SRC_FLASH_SECTOR_H_
//#define SRC_FLASH_SECTOR_H_
//
//
//#include "stdint.h"
//
//uint32_t Flash_Write_Data (uint32_t StartSectorAddress, uint32_t *Data, uint16_t numberofwords);
//
//void Flash_Read_Data (uint32_t StartSectorAddress, uint32_t *RxBuf, uint16_t numberofwords);
//
//void Convert_To_Str (uint32_t *Data, char *Buf);
//
//void Flash_Write_NUM (uint32_t StartSectorAddress, float Num);
//
//float Flash_Read_NUM (uint32_t StartSectorAddress);
//
//#endif /* SRC_FLASH_SECTOR_H_ */

#include "stm32f4xx_hal.h"

//Typedefs
//1. data size
typedef enum
{
	DATA_TYPE_8=0,
	DATA_TYPE_16,
	DATA_TYPE_32,
}DataTypeDef;

//functions prototypes
//1. Erase Sector
static void MY_FLASH_EraseSector(void);

//2. Set Sector Adress
void MY_FLASH_SetSectorAddrs(uint8_t sector, uint32_t addrs);
//3. Write Flash
void MY_FLASH_WriteN(uint32_t idx, void *wrBuf, uint32_t Nsize, DataTypeDef dataType);
//4. Read Flash
void MY_FLASH_ReadN(uint32_t idx, void *rdBuf, uint32_t Nsize, DataTypeDef dataType);
