#include "ccw.h"
#include <cstring>
#include <sstream> // 출력을 스트링에 넣어준대

ccw::ccw()
{
	command = new char[strlen("ccw 20")+1];
	strcpy(command, "ccw 20");
}

ccw::ccw(int _value)
{
	std::stringstream sstream;
	sstream << "ccw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}

double ccw::get_delay() // 딜레이 2초 
{ 
	return 2; 
}