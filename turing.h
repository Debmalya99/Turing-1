#ifndef TURING_H_
#define TURING_H_

////////////////////////  DEFINTIONS  ///////////////////////////////

///////////////// REGISTERS ////////////////////////////
#define A 0x00 // accumulator
#define B 0x01
#define C 0x02
#define D 0x03
#define E 0x04
#define M 0x05
///////////////// REGISTERS ////////////////////////////

////////////////////////  INSTRUCTIONS  ///////////////////////
#define HLT 0x06
#define MVI 0x07
#define MOV 0x08
#define ADD 0x09
////////////////////////  INSTRUCTIONS  ///////////////////////

////////////////////////  DEFINTIONS  ///////////////////////////////


#include <iostream>
typedef unsigned char BYTE;
class TURING
{
public:
  BYTE registers[6];
  BYTE memory[256];
  bool fZero,fCarry;
  void execute(BYTE start_addr);
  BYTE examRegister(BYTE reg);
  BYTE examMemory(BYTE addr);
  void writeMemory(BYTE addr,BYTE val);
  //ALU FUNCTIONS
  void add(BYTE* v1,BYTE v2);

};

#endif /* end of include guard: TURING_H_ */
