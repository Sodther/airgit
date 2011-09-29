
#ifndef AIR_UTIL_H
#define AIR_UTIL_H

#include "compiler.h"

#include "Text.h"

namespace dcpp {
	class AirUtil {
	
	public:

	static string getLocalIp();
	static string getLocale();
	static void setProfile(int profile, bool setSkiplist=false);
	static int getSlotsPerUser(bool download, double value=0, int aSlots=0);
	static int getSlots(bool download, double value=0, bool rarLimits=false);
	static int getSpeedLimit(bool download, double value=0);
	static int getMaxAutoOpened(double value = 0);
	
	
	};
}
#endif