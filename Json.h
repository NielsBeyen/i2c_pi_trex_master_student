#include <string.h>
#include <sstream>
#include "AcceleroMeter.h"
#ifndef Json_H
#define Json_H

namespace TRexLib{
	class JsonKlas{
		public:
			
			std::string intValue(std::string* output, std::string key, int value );
			std::string charValue(std::string* output, std::string key, char value );
			std::string doubleValue(std::string* output, std::string key, double value );
			std::string accelValue(std::string* output,std::string key, AcceleroMeter accel);
			std::string impValue(std::string* output, std::string key, Impact imp );
		

};
}
#endif

//Overloadconstructoren aanmaken en hun arguementen meegeven. Key = adres