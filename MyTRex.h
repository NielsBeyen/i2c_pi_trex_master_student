#include "I2C.h"
#include "Serial.h"
#include "StatusDataPacket.h"
#include "CommandDataPacket.h"

#ifndef MYTREX_H
#define MYTREX_H

namespace TRexlib{

	class MyTRex: public Trex{
	public:  
		MyTRex(I2C,int);
		readStatus::readStatus(StatusDataPacket * ):bool;
		writeCommand(CommandDataPacket*):bool;










};}
#endif