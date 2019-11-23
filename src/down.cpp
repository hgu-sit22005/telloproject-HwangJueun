#include "down.h"
#include <cstring>
#include <sstream> // 출력을 스트링에 넣어준대

down::down()
{
	command = new char[strlen("down 20")+1];
	strcpy(command, "down 20");
}

down::down(int _value)
{
	std::stringstream sstream;
	sstream << "down " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());

}

double down::get_delay() // 딜레이 2초 
{ 
	return 2; 
}