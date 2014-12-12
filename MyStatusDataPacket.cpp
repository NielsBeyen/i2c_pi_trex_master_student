#include "MyStatusDataPacket.h"

namespace TRexLib{

            /*
             * Convert the internal values to a JSON string
             *
             * @return json string
             */
            std::string MyStatusDataPacket::toJSON(void){
            	
                  // important code here!!! 
                  return "";
            }

           
          

            /*
             * Parse the TRex representation of the DataPacket
             * and set the internal values accordingly.
                   *
             * @buffer char buffer which contains the values that should be parsed
             */
                  //

            void  MyStatusDataPacket::fromTRex(char * data){
                
                // important code here!!!  
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