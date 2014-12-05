#include "StatusDataPacket.h"
#include "Side.h"
#include "AcceleroMeter.h"

#ifndef TREX_STATUS_DATA_PACKET_H
#define TREX_STATUS_DATA_PACKET_H

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

	};

}

#endif