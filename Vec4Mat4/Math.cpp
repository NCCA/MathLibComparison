#include "Functions.h"

void addition()
{
  std::cout<<"********************************************\n";
  std::cout<<"addition \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      ngl::Vec4 b(5,6,7,8);
      auto c=a+b;
      print("ngl::Vec4 c=a+b",c);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      Eigen::Vector4f b(5,6,7,8);
      auto c=a+b;
      print("Eigen::Vector4f c=a+b",c);
   }
   {
      glm::vec4 a(1,2,3,4);
      glm::vec4 b(5,6,7,8);
      auto c=a+b;
      print("glm::vec4 c=a+b",c);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      Imath::Vec4<float>  b(5,6,7,8);
      auto c=a+b;
      print("Imath::Vec4<float> c=a+b",c);

   }
   {
      QVector4D a(1,2,3,4);
      QVector4D  b(5,6,7,8);
      auto c=a+b;
      print("QVector4D c=a+b",c);
   }
}


void subtraction()
{
  std::cout<<"********************************************\n";
  std::cout<<"subtraction \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      ngl::Vec4 b(5,6,7,8);
      auto c=a-b;
      print("ngl::Vec4 c=a-b",c);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      Eigen::Vector4f b(5,6,7,8);
      auto c=a-b;
      print("Eigen::Vector4f c=a-b",c);
   }
   {
      glm::vec4 a(1,2,3,4);
      glm::vec4 b(5,6,7,8);
      auto c=a-b;
      print("glm::vec4 c=a-b",c);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      Imath::Vec4<float>  b(5,6,7,8);
      auto c=a-b;
      print("Imath::Vec4<float> c=a-b",c);

   }
   {
      QVector4D a(1,2,3,4);
      QVector4D  b(5,6,7,8);
      auto c=a-b;
      print("QVector4D c=a-b",c);
   }
}