#include "forward.h"
#include <cstring>
#include <sstream> // 출력을 스트링에 넣어준대

forward::forward()
{
	command = new char[strlen("forward 20")+1];
	strcpy(command, "forward 20");
}

forward::forward(int _value)
{
	std::stringstream sstream;
	sstream << "forward " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}

double forward::get_delay() // 딜레이 2초 
{ 
	return 2; 
}