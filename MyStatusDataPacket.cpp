#include "StatusDataPacket.h"

namespace TRexLib{

	
            /* Number of bytes in the TREX byte array representation */
           // const static int SIZE_STATUS_DATA_PACKET = 24;

        /* Setters are only needed internally so we set them protected */
        
            /*
             * Set the start byte of the status data packet.
             *
             * @start value of the start byte
             */
            void setStartByte(char start){

            }

            /*
             * Set the error flags of the status data packet.
             *
             * @error value of the error flags
             */
            void setErrorFlags(char error){}

            /*
             * Set the battery voltage (in Volt) of the status data packet.
             *
             * @voltage value of the battery voltage
             */
            void setBatteryVoltage(double voltage){}

            /*
             * Set the current (in Ampere) of the motor on a side.
             *
             * @side the side of the H-bridge on the controller
             * @current the current in Ampere
             */
            void setMotorCurrent(Side side, double current){}

            /*
             * Set the encoder count on a side.
             *
             * @side the side of the encoder on the controller
             * @count the count of the encoder
             */
            void setEncoderCount(Side side, int count){}
            /*
             * Set the accelero meter values.
             *
             * @accelero AcceleroMeter instance containing the values of the accelero meter
             */
            void setAcceleroMeter(AcceleroMeter accelero){}

            /*
             * Set the accelero meter impact values.
             *
             * @impact Impact instance containing the values of the accelero meter impact
             */
            void setImpact(Impact impact){}

        /* Getters need to be accessible by all */
       
            /*
             * Get the start byte of the status data packet.
             *
             * @return value of the start byte
             */
            char getStartByte(void){
            	return false;
            }

            /*
             * Get the error flags of the status data packet.
             *
             * @return value of the error flags byte
             */
            char getErrorFlags(void){return false;}

            /*
             * Get the battery voltage (in Volt) of the status data packet.
             *
             * @return value of the battery voltage
             */
            double getBatteryVoltage(void){return false;}

            /*
             * Get the current (in Ampere) of the motor on a side.
             *
             * @side the side of the H-bridge on the controller
             *
             * @return the current in Ampere
             */
            double getMotorCurrent(Side side){return false;}

            /*
             * Get the encoder count on a side.
             *
             * @side the side of the encoder on the controller
             *
             * @return the count of the encoder
             */
            int getEncoderCount(Side side){return false;}

            /*
             * Get the accelero meter values.
             *
             * @return AcceleroMeter instance containing the values of the accelero meter
             */
            AcceleroMeter getAcceleroMeter(void){return false;}

            /*
             * Get the accelero meter impact values.
             *
             * @return Impact instance containing the values of the accelero meter impact
             */
            Impact getImpact(void){return false;}

	
}