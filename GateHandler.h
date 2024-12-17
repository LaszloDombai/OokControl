/*
 * GateHandler.h
 *
 *  Created on: 2023. aug. 24.
 *      Author: HP OMEN
 */

#ifndef GATEHANDLER_H_
#define GATEHANDLER_H_


extern void fTxGateOpen();
extern void fTxGateStop();
extern void fTxGatePers();
extern void fTxGate(uint32_t u32pCodeIn);

/*---[ GATE ]------------------------------------------------------------------------------------*/

#define U32_OOK_GATE_SHORT_T_US  500U   /* SHORT width [usec]  */
#define U32_OOK_GATE_LONG_T_US   1000U  /* LONG  width [usec] */

const uint32_t u32GateStop = 0x830010;
const uint32_t u32GateOpen = 0x1030010;
const uint32_t u32GatePers = 0x1830010;
/*-----------------------------------------------------------------------------------------------*/

void fTxGateOpen() {
	for (uint8_t u8C = 0; u8C < 6; u8C++) {
		fTxGate(u32GateOpen);
		delay(10); /* ms */
	}
}

void fTxGateStop() {
	for (uint8_t u8C = 0; u8C < 6; u8C++) {
		fTxGate(u32GateStop);
		delay(10); /* ms */
	}
}

void fTxGatePers() {
	for (uint8_t u8C = 0; u8C < 6; u8C++) {
		fTxGate(u32GatePers);
		delay(10); /* ms */
	}
}


void fTxGate(uint32_t u32pCodeIn)
{
	uint8_t  u8_CodeLen = 25U; /*Bits*/
	uint32_t u32_BitCntr;
	uint32_t u32_BitMask;

	for (u32_BitCntr = 0; u32_BitCntr < u8_CodeLen; u32_BitCntr++) {

		u32_BitMask = 1U << u32_BitCntr;

		if (u32pCodeIn & u32_BitMask) {
			id(id_OUT).turn_off();
			delayMicroseconds(U32_OOK_GATE_SHORT_T_US);
			id(id_OUT).turn_on();
			delayMicroseconds(U32_OOK_GATE_LONG_T_US);
			id(id_OUT).turn_off();
		} else {
			id(id_OUT).turn_off();
			delayMicroseconds(U32_OOK_GATE_LONG_T_US);
			id(id_OUT).turn_on();
			delayMicroseconds(U32_OOK_GATE_SHORT_T_US);
			id(id_OUT).turn_off();
		}
	}
}

#endif /* GATEHANDLER_H_ */
