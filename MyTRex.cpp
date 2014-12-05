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
            MyTRex::MyTRex(I2C* i2c, int i2cAddress):TRex(i2c,i2cAddress){

            }

            /*
             * Read the status of the TRex controller.
             *
             * @status pointer to the StatusDataPacket that contains the values read from the controller.
             *
             * @return true if the read action was successful
             */
            virtual bool MyTRex::readStatus(StatusDataPacket * status){
                return false;
            }

            /*
             * Write command to the TRex controller.
             *
             * @command pointer to the CommandDataPacket that contains the values that should be send to the controller.
             *
             * @return true if the write action was successful
             */
            virtual bool MyTRex::writeCommand(CommandDataPacket * command){
                return false;
            }
    
}