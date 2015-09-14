#include <ngl/Vec3.h>
#include <ngl/Mat4.h>
#include <iostream>
#include <ngl/NGLStream.h>
namespace NGLExamples
{
	ngl::Mat4 m4;
	void initIdentity()
	{
		m4.identity();
	}

	void print()
	{
		std::cout<<"NGL \n"<<m4<<"\n";
	}

	void scale(float _x,float _y, float _z)
	{
		m4.scale(_x,_y,_z);
	}

	void translate(float _x,float _y, float _z)
	{
		m4.translate(_x,_y,_z);
	}

	void printOpenGL()
	{
		// need this to unset flags set in the matrix stream class
		// std::cout.unsetf(std::ios::fixed|std::ios::adjustfield|std::ios::showpos);

		std::cout<<"NGL\n[";
		for(int i=0; i<16; ++i)
			std::cout<<m4.openGL()[i]<<",";
		std::cout<<"]\n";
	}
}
