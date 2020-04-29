struct tm
{
	int tm_sec; /*second after the minute-[0,59]*/
	int tm_min; /*minutes after the hour- [0,59]*/
	int tm_hour; /*hours since midnight- [0,23]*/
	int tm_mday; /* day of the month- [1,31]*/;
	int tm_mon; /* month since Januaray-[0,11]*/ //실제는 +1
	int tm_year; /*years since 1900*/ //실제사용시 +1900 해야함
	int tm_wday; /* days since Sunday- [0,6]*/
	int tm_yday; /*days since January 1-[0,365]*/
	int tm_isdst; /*서머타임 실시하는지, 하지 않는지*/
};