#include "Json.h"
#include <string.h>
#include <sstream>


	namespace TRexLib{
		
		std::string JsonKlas::intValue(std::string* output, std::string key, int value ){
			std::ostringstream outputstream ;
			outputstream << value ;
			output->append( "\"" + key + "\": " + outputstream.str());
		}

		std::string JsonKlas::charValue(std::string* output, std::string key, char value ){
			output->append( "\"" + key + "\": " + value);  //niet nodig om een output stream aantemaken want dit is al een char(en kan dus per definitie onmiddelijk in een string buffer)
		}

		std::string JsonKlas::doubleValue(std::string* output, std::string key, double value ){
			std::ostringstream outputstream ;
			outputstream << value ;
			output->append( "\"" + key + "\": " + outputstream.str());
		}



		std::string JsonKlas::accelValue(std::string* output, std::string key, AcceleroMeter accel ){
			
			std::ostringstream outputstream_x ;  //aanmaken van een string buffer(sequentie van char)wordt als string aangesproken.
			outputstream_x << accel.x ; //de string buffer linken met de accelero meter x as
			
			std::ostringstream outputstream_y ;
			outputstream_y << accel.y ;
			
			std::ostringstream outputstream_z ;
			outputstream_z << accel.z ;
			
			output->append( "\"" + key + "\": [" + outputstream_x.str()+","+outputstream_y.str()+","+outputstream_z.str()+"],"); 
			//Json string van het zooitje maken en deze versturen : De Json string bestaat uit
			//  \device_path\ : [value1,value2,value3]
		}
		std::string JsonKlas::impValue(std::string* output, std::string key, Impact imp ){
			
			std::ostringstream outputstream_x ;
			outputstream_x << imp.x ;
			
			std::ostringstream outputstream_y ;
			outputstream_y << imp.y ;
			
			std::ostringstream outputstream_z ;
			outputstream_z << imp.z ;
			
			output->append( "\"" + key + "\": [" + outputstream_x.str()+","+outputstream_y.str()+","+outputstream_z.str()+"],");
		}
}		
		
		
		