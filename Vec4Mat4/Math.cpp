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


void plusEquals()
{
  std::cout<<"********************************************\n";
  std::cout<<"Plus Equals += \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      ngl::Vec4 b(5,6,7,8);
      a+=b;
      print("ngl::Vec4 a+=b",a);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      Eigen::Vector4f b(5,6,7,8);
      a+=b;
      print("Eigen::Vector4f a+=b",a);
   }
   {
      glm::vec4 a(1,2,3,4);
      glm::vec4 b(5,6,7,8);
      a+=b;
      print("glm::vec4 a+=b",a);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      Imath::Vec4<float>  b(5,6,7,8);
      a+=b;
      print("Imath::Vec4<float> a+=b",a);

   }
   {
      QVector4D a(1,2,3,4);
      QVector4D b(5,6,7,8);
      a+=b;
      print("QVector4D c=a+b",a);
   }
}

void minusEquals()
{
  std::cout<<"********************************************\n";
  std::cout<<"minus Equals -= \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      ngl::Vec4 b(5,6,7,8);
      a-=b;
      print("ngl::Vec4 a-=b",a);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      Eigen::Vector4f b(5,6,7,8);
      a-=b;
      print("Eigen::Vector4f a-=b",a);
   }
   {
      glm::vec4 a(1,2,3,4);
      glm::vec4 b(5,6,7,8);
      a-=b;
      print("glm::vec4 a-=b",a);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      Imath::Vec4<float>  b(5,6,7,8);
      a-=b;
      print("Imath::Vec4<float> a-=b",a);

   }
   {
      QVector4D a(1,2,3,4);
      QVector4D b(5,6,7,8);
      a-=b;
      print("QVector4D c=a+b",a);
   }
}


void multScalar()
{
  std::cout<<"********************************************\n";
  std::cout<<"Multiply Scalar \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      auto c=a*2.0f;
      print("ngl::Vec4 a*2.0f",c);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      auto c=a*2.0f;
      print("Eigen::Vector4f a*2.0f",c);
   }
   {
      glm::vec4 a(1,2,3,4);
      auto c=a*2.0f;
      print("glm::vec4 c=a*2.0f",c);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      auto c=a*2.0f;
      print("Imath::Vec4<float> c=a*2.0f",c);

   }
   {
      QVector4D a(1,2,3,4);
      auto c=a*2.0f;
      print("QVector4D c=a*2.0f",c);
   }
}


void divScalar()
{
  std::cout<<"********************************************\n";
  std::cout<<"Division Scalar \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      auto c=a/2.0f;
      print("ngl::Vec4 a/2.0f",c);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      auto c=a/2.0f;
      print("Eigen::Vector4f a/2.0f",c);
   }
   {
      glm::vec4 a(1,2,3,4);
      auto c=a/2.0f;
      print("glm::vec4 c=a/2.0f",c);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      auto c=a/2.0f;
      print("Imath::Vec4<float> c=a/2.0f",c);

   }
   {
      QVector4D a(1,2,3,4);
      auto c=a/2.0f;
      print("QVector4D c=a/2.0f",c);
   }
}


void divZero()
{
  std::cout<<"********************************************\n";
  std::cout<<"Division zero \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      auto c=a/0.0f;
      print("ngl::Vec4 a/0.0f",c);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      auto c=a/0.0f;
      print("Eigen::Vector4f a/2.0f",c);
   }
   {
      glm::vec4 a(1,2,3,4);
      auto c=a/0.0f;
      print("glm::vec4 c=a/2.0f",c);

   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      auto c=a/0.0f;
      print("Imath::Vec4<float> c=a/2.0f",c);

   }
   {
      QVector4D a(1,2,3,4);
      auto c=a/0.0f;
      print("QVector4D c=a/2.0f",c);
   }
}


