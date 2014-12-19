#include "MyStatusDataPacket.h"

namespace TRexLib{

            /*
             * Convert the internal values to a JSON string
             *
             * @return json string
             */
            std::string MyStatusDataPacket::toJSON(void){
            	
                JsonKlas jsonF; //instantie/object maken van Json klasse

                std::string json="{\"device_path\": \"/dev/i2c-1\", \"i2c_address\": 7,";
                jsonF.doubleValue(&json,"battery_voltage",this->getBatteryVoltage());
                json=+",";

                json=+" \"motor_current\": {";
                jsonF.doubleValue(&json,"left",this->getMotorCurrent(LEFT));
                json=+",";

                jsonF.doubleValue(&json,"right",this->getMotorCurrent(RIGHT));
                json=+"},";

                json=+" \"encoder_count\": {";
                jsonF.doubleValue(&json,"left",this->getEncoderCount(LEFT));
                json=+",";

                jsonF.doubleValue(&json,"right",this->getEncoderCount(RIGHT));
                json=+"},";

                jsonF.accelValue(&json,"accelero_meter",this->getAcceleroMeter());
                
                jsonF.impValue(&json,"impact",this->getImpact());

                return json;
            }

           
            /*
             * Parse the TRex representation of the DataPacket
             * and set the internal values accordingly.
                   *
             * @buffer char buffer which contains the values that should be parsed
             */
            void  MyStatusDataPacket::fromTRex(char * data){
                this->setStartByte(data[STATUS_START]);
                if (STATUS_START != 0x0f){}; // als startstatus != (0f)h mag er niet worden verder gegaan
                this->setErrorFlags(data[STATUS_ERROR]); // "->" word gebruikt in geval van pointer
                // read error data from TRex
                this->setBatteryVoltage((((data[STATUS_BATTERY_MSB])<<8)+(data[STATUS_BATTERY_LSB]))/100.0);
                // read Batt data from TRex---------LSB en MSB dus MSB moet 8 bits worden geshifed
                this->setMotorCurrent(LEFT,((data[STATUS_LEFT_MOTOR_CURRENT_MSB])<<8)+(data[STATUS_LEFT_MOTOR_CURRENT_LSB])/1000.0);
                // read motorcurrent data from TRex
                this->setMotorCurrent(RIGHT,((data[STATUS_RIGHT_MOTOR_CURRENT_MSB])<<8)+(data[STATUS_RIGHT_MOTOR_CURRENT_LSB])/1000.0);
                // read data from TRex
                this->setEncoderCount(LEFT,((data[STATUS_LEFT_ENCODER_COUNT_MSB]<<8)+data[STATUS_LEFT_ENCODER_COUNT_LSB]));
                // read data from TRex
                this->setEncoderCount(RIGHT,((data[STATUS_RIGHT_MOTOR_CURRENT_MSB]<<8)+data[STATUS_RIGHT_MOTOR_CURRENT_LSB]));
                // read data from TRex

                AcceleroMeter acc; //instantie/object maken van AcceleroMeter klasse
                acc.x=((data[STATUS_ACCELEROMETER_X_MSB]<<8)+data[STATUS_ACCELEROMETER_X_LSB]);
                acc.y=((data[STATUS_ACCELEROMETER_Y_MSB]<<8)+data[STATUS_ACCELEROMETER_Y_LSB]);
                acc.z=((data[STATUS_ACCELEROMETER_Z_MSB]<<8)+data[STATUS_ACCELEROMETER_Z_LSB]);
                // read data from TRex -> accelerometer
                this->setAcceleroMeter(accelero);

                Impact imp; //instantie/object maken van Impact klasse
                imp.x=((data[STATUS_IMPACT_X_MSB]<<8)+data[STATUS_IMPACT_X_LSB]);
                imp.y=((data[STATUS_IMPACT_Y_MSB]<<8)+data[STATUS_IMPACT_Y_LSB]);
                imp.z=((data[STATUS_IMPACT_Z_MSB]<<8)+data[STATUS_IMPACT_Z_LSB]);
                this->setImpact(imp);
                
            }


             /*
             * Parse the json representation of the DataPacket
             * and set the internal values accordingly.
                   *
                   * @json json string representation
             */
            void MyStatusDataPacket::fromJSON(std::string json) {
                
            }

            /*
             * Convert the internal values to a char buffer representation ready 
             * for writing to the TRex controller using I2C.
             *
             * @buffer buffer to which the values should be written (should be big enough for all values to fit)
             */
            void MyStatusDataPacket::toTRex(char * buffer){
  
                  
            }
	
}