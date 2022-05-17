#include <string>

enum inst {
	NOP				= 0x00,
	LD_BC_d16		= 0x01,
	LD_BC_A			= 0x02,
	INC_BC			= 0x03,
	INC_B			= 0x04,
	DEC_B			= 0x05,
	LD_B_d8			= 0x06,
	RLCA			= 0x07,
	LD_a16_SP		= 0x08,
	ADD_HL_BC		= 0x09,
	LD_A_BC			= 0x0A,
	DEC_BC			= 0x0B,
	INC_C			= 0x0C,
	DEC_C			= 0x0D,
	LD_C_d8			= 0x0E,
	RRCA			= 0x0F,
	STOP			= 0x10,
	LD_DE_d16		= 0x11,
	LD_DE_A			= 0x12,
	INC_DE			= 0x13,
	INC_D			= 0x14,
	DEC_D			= 0x15,
	LD_D_d8			= 0x16,
	RLA				= 0x17,
	JR_s8			= 0x18,
	ADD_HL_DE		= 0x19,
	LD_A_DE			= 0x1A,
	DEC_DE			= 0x1B,
	INC_E			= 0x1C,
	DEC_E			= 0x1D,
	LD_E_d8			= 0x1E,
	RRA				= 0x1F,
	JR_NZ_s8		= 0x20,
	LD_HL_d16		= 0x21,
	LD_HL_PLUS_A	= 0x22,
	INC_HL			= 0x23,
	INC_H			= 0x24,
	DEC_H			= 0x25,
	LD_H_d8			= 0x26,
	DAA				= 0x27,
	JR_Z_s8			= 0x28,
	ADD_HL_HL		= 0x29,
	LD_A_HL_PLUS	= 0x2A,
	DEC_HL			= 0x2B,
	INC_L			= 0x2C,
	DEC_L			= 0x2D,
	LD_L_d8			= 0x2E,
	CPL				= 0x2F,
	JR_NC_s8		= 0x30,
	LD_SP_d16		= 0x31,
	LD_HL_MINUS_A	= 0x32,
	INC_SP			= 0x33,
	INC_HL			= 0x34,
	DEC_HL			= 0x35,
	LD_HL_d8		= 0x36,
	SCF				= 0x37,
	JR_C_r8			= 0x38,
	ADD_HL_SP		= 0x39,
	LD_A_HL_MINUS	= 0x3A,
	DEC_SP			= 0x3B,
	INC_A			= 0x3C,
	DEC_A			= 0x3D,
	LD_A_d8			= 0x3E,
	CCF				= 0x3F,
	LD_B_B			= 0x40,
	LD_B_C			= 0x41,
	LD_B_D			= 0x42,
	LD_B_E			= 0x43,
	LD_B_H			= 0x44,
	LD_B_L			= 0x45,
	LD_B_HL			= 0x46,
	LD_B_A			= 0x47,
	LD_C_B			= 0x48,
	LD_C_C			= 0x49,
	LD_C_D			= 0x4A,
	LD_C_E			= 0x4B,
	LD_C_H			= 0x4C,
	LD_C_L			= 0x4D,
	LD_C_HL			= 0x4E,
	LD_C_A			= 0x4F,


};

