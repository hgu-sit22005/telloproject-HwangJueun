#include "left.h"
#include <cstring>
#include <sstream> // 출력을 스트링에 넣어준대

left::left()
{
	command = new char[strlen("left 20")+1];
	strcpy(command, "left 20");
}

left::left(int _value)
{
	std::stringstream sstream;
	sstream << "left " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}

double left::get_delay() // 딜레이 2초 
{ 
	return 2; 
}