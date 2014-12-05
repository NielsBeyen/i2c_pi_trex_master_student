#include "StatusDataPacket.h"

namespace TRexLib{

	
	      public:
            /*
             * Convert the internal values to a JSON string
             *
             * @return json string
             */
            virtual std::string MyStatusDataPacket::toJSON(void){
            	return null;
            }

           
          

            /*
             * Parse the TRex representation of the DataPacket
             * and set the internal values accordingly.
                   *
             * @buffer char buffer which contains the values that should be parsed
             */
            virtual void  MyStatusDataPacket::fromTRex(char * data){
                  
            }
	
}