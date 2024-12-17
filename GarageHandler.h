/*
 * GarageHandler.h
 *
 *  Created on: 2023. aug. 26.
 *      Author: HP OMEN
 */

#ifndef GARAGEHANDLER_H_
#define GARAGEHANDLER_H_

extern void fTxGarageDouble();



/*---[ GARAGE ]----------------------------------------------------------------------------------*/
#define U32_PREAMBLE_US 400U /* usec */
#define U32_HIHI_US 800U /* usec */
#define U32_HILO_US 400U /* usec */
#define U32_LOHI_US 400U /* usec */
#define U32_LOLO_US 800U /* usec */

const uint32_t u32Garage1 = 0x77d20b7f;
const uint32_t u32Garage2 = 0x0;

const uint32_t au32GarageStepCode[] = {
		0xacda7092,
		0x8896ea4b,
		0xc16d41d8,
		0xb79be53d,
		0x9d879a56,
		0xa9c1891d,
		0xd8e75a11,
		0xce83fb3a,
		0x69aac50f,
		0x9b1f601d,
		0x6dd02d28,
		0x8391ae62,
		0xb4653c33,
		0x8426db7d,
		0x79e75571,
		0x3787f670,
		0xa8c47145,
		0x8dde168d};

static uint8_t  u8StepCodeCntr = 0;
static uint8_t  u8FvCntr = 0;


void fTxGarage();


void fTxGarageDouble()
{
	if (0U == u8FvCntr) {
		fTxGarage();
		delay(100);
		u8FvCntr++;
	}

	fTxGarage();
}


void fTxGarage()
{
	uint8_t  u8C;
	uint32_t u32_BitCntr;
	uint32_t u32_BitMask;

	/* pre-amble 12 bits */
	for (u8C = 0; u8C < 12U; u8C++) {
		id(id_OUT).turn_on();
		delayMicroseconds(U32_PREAMBLE_US);
		id(id_OUT).turn_off();
		delayMicroseconds(U32_PREAMBLE_US);
	}

	delayMicroseconds(4000U - U32_PREAMBLE_US);

	/* step code */
	for (u32_BitCntr = 0; u32_BitCntr < 32; u32_BitCntr++) {

		u32_BitMask = 1U << u32_BitCntr;

		if (au32GarageStepCode[u8StepCodeCntr] & u32_BitMask) {
			id(id_OUT).turn_on();
			delayMicroseconds(U32_HIHI_US);
			id(id_OUT).turn_off();
			delayMicroseconds(U32_HILO_US);
			id(id_OUT).turn_off();
		} else {
			id(id_OUT).turn_on();
			delayMicroseconds(U32_LOHI_US);
			id(id_OUT).turn_off();
			delayMicroseconds(U32_LOLO_US);
			id(id_OUT).turn_off();
		}
	}

	/* fix code 1 */
	for (u32_BitCntr = 0; u32_BitCntr < 32; u32_BitCntr++) {

		u32_BitMask = 1U << u32_BitCntr;

		if (u32Garage1 & u32_BitMask) {
			id(id_OUT).turn_on();
			delayMicroseconds(U32_HIHI_US);
			id(id_OUT).turn_off();
			delayMicroseconds(U32_HILO_US);
			id(id_OUT).turn_off();
		} else {
			id(id_OUT).turn_on();
			delayMicroseconds(U32_LOHI_US);
			id(id_OUT).turn_off();
			delayMicroseconds(U32_LOLO_US);
			id(id_OUT).turn_off();
		}
	}

	/* fix code 2 */
	for (u32_BitCntr = 0; u32_BitCntr < 2; u32_BitCntr++) {

		u32_BitMask = 1U << u32_BitCntr;

		if (u32Garage2 & u32_BitMask) {
			id(id_OUT).turn_on();
			delayMicroseconds(U32_HIHI_US);
			id(id_OUT).turn_off();
			delayMicroseconds(U32_HILO_US);
			id(id_OUT).turn_off();
		} else {
			id(id_OUT).turn_on();
			delayMicroseconds(U32_LOHI_US);
			id(id_OUT).turn_off();
			delayMicroseconds(U32_LOLO_US);
			id(id_OUT).turn_off();
		}
	}

	if (u8StepCodeCntr < 17U) {
		u8StepCodeCntr++;
	} else {
		u8StepCodeCntr = 0U;
	}

}







#endif /* GARAGEHANDLER_H_ */
