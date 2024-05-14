#include <iostream>
#include "Sample.h"
void Sample::Input1()
{
	x = 10;
}
void Sample::Input2()
{
	int x;
	x = 20;
	this->x = 20;//this->‚Åƒƒ“ƒo•Ï”‚Ìx‚É‘ã“ü‚Å‚«‚é
}
void Sample::Disp()
{
	std::cout << x;
}
