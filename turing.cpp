#include "turing.h"
void TURING::execute(BYTE start_addr)
{
  BYTE i = start_addr;
  while(memory[i] != HLT)
  {
    ///////////////////// INSTRUCTIONS  //////////////////////////
    if(memory[i] == MVI)
    {
      BYTE b = memory[++i];
      registers[b] = memory[++i];
    }
    if(memory[i] == MOV)
    {
      BYTE b1 = memory[++i];
      BYTE b2 = memory[++i];
      registers[b1] = registers[b2];
    }
    if(memory[i] == ADD)
    {
      BYTE b = memory[++i];
      add(&registers[A],registers[b]);
    }

    ///////////////////// INSTRUCTIONS  //////////////////////////

    i++;
  }
}

BYTE TURING::examRegister(BYTE reg)
{
  return registers[reg];
}
BYTE TURING::examMemory(BYTE addr)
{
  return memory[addr];
}
void TURING::writeMemory(BYTE addr,BYTE val)
{
  memory[addr] = val;
}

void TURING::add(BYTE* v1,BYTE v2)
{
  BYTE sum = *v1 + v2;
  if(sum-v2 == *v1)
  {
    fCarry = false;
  }
  else fCarry = true;
  *v1 = sum;
}
