#include "right.h"
#include <cstring>
#include <sstream> // 출력을 스트링에 넣어준대

right::right()
{
	command = new char[strlen("right 20")+1];
	strcpy(command, "right 20");
}

right::right(int _value)
{
	std::stringstream sstream;
	sstream << "right " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}

double right::get_delay() // 딜레이 2초 
{ 
	return 2; 
}