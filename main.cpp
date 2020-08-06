#include "turing.h"

int main()
{
  TURING t1;
  BYTE s_add = 0x10;
  t1.writeMemory(s_add++,MVI);
  t1.writeMemory(s_add++,A);
  t1.writeMemory(s_add++,0X21);
  t1.writeMemory(s_add++,MVI);
  t1.writeMemory(s_add++,C);
  t1.writeMemory(s_add++,0XAA);
  t1.writeMemory(s_add++,ADD);
  t1.writeMemory(s_add++,C);
  t1.writeMemory(s_add++,HLT);
  t1.execute(0x10);
  std::cout<<"accumulator = "<<std::hex<<(int)t1.examRegister(A)<<std::endl;
  std::cout<<"Carry = "<<(int)t1.fCarry<<std::endl;
  return 0;
}
