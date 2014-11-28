#include "MyTRex.h"
#include "wait.h"
#include <string.h>
#include <stdio.h>

namespace TRexLib{

    /*
     * Constructor
     *
     * @i2c the I2C representing the bus on which the slave is connected.
     * @i2cAddress the address of the slave
     */
    MyTRex::MyTRex(I2C* i2c, int i2cAddress){
        this->i2c = i2c;
        this->i2cAddress = i2cAddress;
    }
    readStatus::readStatus(StatusDataPacket * ):bool{
	return 0
    }
    writeCommand::writeCommand(CommandDataPacket*):bool{
	return 0
    }
    
}