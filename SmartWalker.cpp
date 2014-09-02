#include <iostream>
#include "SmartWalker.h"

SmartWalker::SmartWalker()
{	
}

int SmartWalker::runNav()
{
	return 1;
}

int SmartWalker::runHR()
{
	return 2;
}

int SmartWalker::runWatch()
{
	return 3;
}

void SmartWalker::killHR(int pid)
{
}

void SmartWalker::killNav(int pid)
{
}

int main(int argc, char* argv[])
{
	SmartWalker* walker = new SmartWalker();
	std::cout << walker->runNav() << std::endl;
	return 0;
}
