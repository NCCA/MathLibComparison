#include <iostream>
#include <cstdlib>
#include "NGLExamples.h"

int main()
{
	std::cout<<"Vector Library test\n";
	NGLExamples::initIdentity();
	NGLExamples::print();
	NGLExamples::scale(1.0f,2.0f,1.0f);
	NGLExamples::print();
	NGLExamples::translate(1.0f,2.0f,3.0f);
	NGLExamples::print();
	NGLExamples::printOpenGL();

	return EXIT_SUCCESS;
}	
