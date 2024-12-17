/*
 * RedonyHandler.h
 *
 *  Created on: 2023. ápr. 8.
 *      Author: HP OMEN
 */

#ifndef REDONYHANDLER_H_
#define REDONYHANDLER_H_


void fTxRKoFel();
void fTxRKoLe();
void fTxRKoSTOP();

void fTxRN1Fel();
void fTxRN1Le();
void fTxRN1STOP();

void fTxRN2Fel();
void fTxRN2Le();
void fTxRN2STOP();

void fTxLentiRFel();
void fTxLentiRLe();
void fTxLentiRSTOP();
void fTxRedony(const uint8_t *au8p_VctrIn);

void fTxFentiRFel();
void fTxFentiRLe();
void fTxFentiRSTOP();

extern const uint8_t au8_RHalo0Fel[];
extern const uint8_t au8_RHalo0Le[];
extern const uint8_t au8_RHalo1Fel[];
extern const uint8_t au8_RHalo1Le[];
extern const uint8_t au8_RHalo0Stop[];
extern const uint8_t au8_RHalo1Stop[];
/*---[ Reka redonyok ]--------------------------------------------------------------------------*/
extern const uint8_t au8_RReka0Fel[];
extern const uint8_t au8_RReka0Le[];
extern const uint8_t au8_RReka0Stop[];
extern const uint8_t au8_RReka1Fel[];
extern const uint8_t au8_RReka1Le[];
extern const uint8_t au8_RReka1Stop[];
/*---[ Aron redonyok ]--------------------------------------------------------------------------*/
extern const uint8_t au8_RAronFel[];
extern const uint8_t au8_RAronLe[];
extern const uint8_t au8_RAronStop[];
/*---[ Lenti redonyok ]--------------------------------------------------------------------------*/
extern const uint8_t au8_RKoFel[];
extern const uint8_t au8_RKoLe[];
extern const uint8_t au8_RKoSTOP[];
extern const uint8_t au8_RN1Fel[];
extern const uint8_t au8_RN1Le[];
extern const uint8_t au8_RN1STOP[];
extern const uint8_t au8_RN2Fel[];
extern const uint8_t au8_RN2Le[];
extern const uint8_t au8_RN2STOP[];


#define U8_WAIT_BETWEEN_TX_PACKETS 100U
#define U8_REPEAT_PACKETS          4U

#define U32_OOK_L_T_US     340U                  /* LOW width [usec]  */
#define U32_OOK_H_T_US     740U  /* HIGH width [usec] */


/*---[ Halo redonyok ]--------------------------------------------------------------------------*/
/* Halo 0 redony FEL */
const uint8_t au8_RHalo0Fel[] = {0xB5, 0x30, 0x2E, 0x71, 0x11, };
/* Halo 0 redony LE */
const uint8_t au8_RHalo0Le[] = {0xB5, 0x30, 0x2E, 0x71, 0x33, };
/* Halo 1 redony FEL */
const uint8_t au8_RHalo1Fel[] = {0xB5, 0x30, 0x2E, 0x72, 0x11, };
/* Halo 1 redony LE */
const uint8_t au8_RHalo1Le[] = {0xB5, 0x30, 0x2E, 0x72, 0x33, };
/* Halo 0 stop */
const uint8_t au8_RHalo0Stop[] = {0xB5, 0x30, 0x2E, 0x71, 0x55, };
/* Halo 1 stop */
const uint8_t au8_RHalo1Stop[] = {0xB5, 0x30, 0x2E, 0x72, 0x55, };
/*---[ Reka redonyok ]--------------------------------------------------------------------------*/
/* Reka 0 redony FEL */
const uint8_t au8_RReka0Fel[] = {0xB5, 0x30, 0x9F, 0x91, 0x11, };
/* Reka 0 redony LE */
const uint8_t au8_RReka0Le[] = {0xB5, 0x30, 0x9F, 0x91, 0x33, };
/* Reka 0 stop */
const uint8_t au8_RReka0Stop[] = {0xB5, 0x30, 0x9F, 0x91, 0x55, };
/* Reka 1 redony FEL */
const uint8_t au8_RReka1Fel[] = {0xB5, 0x30, 0x9F, 0x92, 0x11, };
/* Reka 1 redony LE */
const uint8_t au8_RReka1Le[] = {0xB5, 0x30, 0x9F, 0x92, 0x33, };
/* Reka 1 stop */
const uint8_t au8_RReka1Stop[] = {0xB5, 0x30, 0x9F, 0x92, 0x55, };
/*---[ Aron redonyok ]--------------------------------------------------------------------------*/
/* Aron 0 redony FEL */
const uint8_t au8_RAronFel[] = {0xB3, 0x30, 0xCB, 0x81, 0x11, };
/* Aron 0 redony LE */
const uint8_t au8_RAronLe[] = {0xB3, 0x30, 0xCB, 0x81, 0x33, };
/* Aron 0 stop */
const uint8_t au8_RAronStop[] = {0xB3, 0x30, 0xCB, 0x81, 0x55, };
/*---[ Lenti redonyok ]--------------------------------------------------------------------------*/
/* Konyha redony FEL */
const uint8_t au8_RKoFel[] = {0xB5, 0x30, 0x91, 0xA1, 0x11, };
/* Konyha redony LE */
const uint8_t au8_RKoLe[] = {0xB5, 0x30, 0x91, 0xA1, 0x33, };
/* Konyha STOP */
const uint8_t au8_RKoSTOP[] = {0xB5, 0x30, 0x91, 0xA0, 0x55, };
/* Nappali 1 redony FEL */
const uint8_t au8_RN1Fel[] = {0xB5, 0x30, 0x91, 0xA2, 0x11, };
/* Nappali 1 redony LE */
const uint8_t au8_RN1Le[] = {0xB5, 0x30, 0x91, 0xA2, 0x33, };
/* Nappali 1 STOP */
const uint8_t au8_RN1STOP[] = {0xB5, 0x30, 0x91, 0xA2, 0x55, };
/* Nappali 2 redony FEL */
const uint8_t au8_RN2Fel[] = {0xB5, 0x30, 0x91, 0xA3, 0x11, };
/* Nappali 2 redony LE */
const uint8_t au8_RN2Le[] = {0xB5, 0x30, 0x91, 0xA3, 0x33, };
/* Nappali 2 STOP */
const uint8_t au8_RN2STOP[] = {0xB5, 0x30, 0x91, 0xA3, 0x55, };



void fTxRKoFel() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RKoFel);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRKoLe() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RKoLe);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRKoSTOP() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RKoSTOP);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRN1Fel() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RN1Fel);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRN1Le() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RN1Le);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRN1STOP() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RN1STOP);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRN2Fel() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RN2Fel);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRN2Le() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RN2Le);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxRN2STOP() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RN2STOP);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}



void fTxLentiRFel() {
	fTxRKoFel();
	delay(50); /* ms */
	fTxRN1Fel();
	delay(50); /* ms */
	fTxRN2Fel();
}

void fTxLentiRLe() {
	fTxRKoLe();
	delay(50); /* ms */
	fTxRN1Le();
	delay(50); /* ms */
	fTxRN2Le();
}

void fTxLentiRSTOP() {
	fTxRKoSTOP();
	delay(50); /* ms */
	fTxRN1STOP();
	delay(50); /* ms */
	fTxRN2STOP();
}

/*---[ Fenti redonyok]----------------------------------------------------------------------------*/
void fTxReka0Fel() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RReka0Fel);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxReka0Le() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RReka0Le);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxReka0STOP() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RReka0Stop);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxAronFel() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RAronFel);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxAronLe() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RAronLe);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxAronSTOP() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RAronStop);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxHalo0Fel() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RHalo0Fel);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxHalo0Le() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RHalo0Le);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

void fTxHalo0STOP() {
	for (uint8_t u8C = 0; u8C < U8_REPEAT_PACKETS; u8C++) {
		fTxRedony(au8_RHalo0Stop);
		delay(U8_WAIT_BETWEEN_TX_PACKETS); /* ms */
	}
}

/* Gyorsmenuk */
void fTxFentiRFel() {
	fTxReka0Fel();
	delay(50); /* ms */
	fTxAronFel();
	delay(50); /* ms */
	fTxHalo0Fel();
}


void fTxFentiRLe() {
	fTxReka0Le();
	delay(50); /* ms */
	fTxAronLe();
	delay(50); /* ms */
	fTxHalo0Le();
}


void fTxFentiRSTOP() {
	fTxReka0STOP();
	delay(50); /* ms */
	fTxAronSTOP();
	delay(50); /* ms */
	fTxHalo0STOP();
}



void fTxRedony(const uint8_t *au8p_VctrIn)
{
	if (NULL != au8p_VctrIn) {
		/* Preamble */
		id(id_OUT).turn_on();
		delayMicroseconds(5000U);
		id(id_OUT).turn_off();
		delayMicroseconds(1500U);

		uint8_t  u8_VectLen = 5U; /*Bytes*/
		uint32_t u32_C;
		uint8_t u8_D;
		uint8_t u8_Mask;

		//Serial.printf("TxRedony start, 0x%x\n", au8p_VctrIn);

		for (u32_C = 0; u32_C < u8_VectLen; u32_C++) {
			u8_D = 8U;
			while (u8_D > 0) {
				u8_D--;
				u8_Mask = 0x01 << u8_D;
				id(id_OUT).turn_on();

				if (au8p_VctrIn[u32_C] & u8_Mask ) {
					delayMicroseconds(U32_OOK_H_T_US);
					id(id_OUT).turn_off();
					delayMicroseconds(U32_OOK_L_T_US);
				}
				else
				{
					delayMicroseconds(U32_OOK_L_T_US);
					id(id_OUT).turn_off();
					delayMicroseconds(U32_OOK_H_T_US);
				}
			}
		}
	}
}




#endif /* REDONYHANDLER_H_ */
