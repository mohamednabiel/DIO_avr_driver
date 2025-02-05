
#ifndef utils
#define utils


#define Set_Bit(reg, n) (reg |= (1<<n))
#define Rst_Bit(reg, n) (reg &=  ~(1<<n))
#define Tog_Bit(reg, n) (reg ^=(1<<n))
#define Get_Bit(reg, n) ((reg>>n)&1)

#define Set_Nbl_L(reg) (reg = reg | (0x0f))
#define Set_Nbl_H(reg) (reg = reg | (0xf0))

#define Rst_Nbl_L(reg) (reg &= ~(0xf0))


#define Rst_Nbl_H(reg) (reg &= ~(0xf0))

#define Get_Nbl_L(reg) (reg &= ~(0xf0))
#define Get_Nbl_H(reg) (reg &= ~(0xf0))

#define Set_Nbl_value_L(reg,value) (reg &= ~(0xf0))

#define Set_Nbl_value_H(reg,value) (reg &= ~(0xf0))
#endif
