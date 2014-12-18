#include "StatusDataPacket.h"
#include "Side.h"
#include "AcceleroMeter.h"
#include "Json.h"

#ifndef TREX_MY_STATUS_DATA_PACKET_H
#define TREX_MY_STATUS_DATA_PACKET_H

namespace TRexLib{

	

    class MyStatusDataPacket: public StatusDataPacket{
      public:
            /*
             * Convert the internal values to a JSON string
             *
             * @return json string
             */

            virtual std::string toJSON(void);

           
          

            /*
             * Parse the TRex representation of the DataPacket
             * and set the internal values accordingly.
                   *
             * @buffer char buffer which contains the values that should be parsed
             */
            virtual void fromTRex(char * data);


             /*
             * Parse the json representation of the DataPacket
             * and set the internal values accordingly.
                   *
                   * @json json string representation
             */
            virtual void fromJSON(std::string json);

            /*
             * Convert the internal values to a char buffer representation ready 
             * for writing to the TRex controller using I2C.
             *
             * @buffer buffer to which the values should be written (should be big enough for all values to fit)
             */
            virtual void toTRex(char * buffer);

	};

}

#endif