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
                this->i2c = i2c;
                this->i2cAddress = i2cAddress;
            }

            /*
             * Read the status of the TRex controller.
             *
             * @status pointer to the StatusDataPacket that contains the values read from the controller.
             *
             * @return true if the read action was successful
             */
            bool MyTRex::readStatus(StatusDataPacket * status){
                
                    char dataArray[StatusDataPacket::SIZE_STATUS_DATA_PACKET];
                    i2c->read(i2cAddress,dataArray,StatusDataPacket::SIZE_STATUS_DATA_PACKET);
                    status->fromTRex(dataArray);


                    return true;
                    
            }

            /*
             * Write command to the TRex controller.
             *
             * @command pointer to the CommandDataPacket that contains the values that should be send to the controller.
             *
             * @return true if the write action was successful
             */
            bool MyTRex::writeCommand(CommandDataPacket * command){

                char buff[]={"command"};
                i2c->write(i2cAddress,buff,sizeof(buff));


                return true;
            }
    
}