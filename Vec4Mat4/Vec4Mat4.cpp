#include <ngl/Vec4.h>
#include <ngl/Mat4.h>
#include <ngl/NGLStream.h>
#include <Eigen/Dense>
#include <glm/vec4.hpp>
#include <OpenEXR/ImathVec.h>
#include <QVector4D>
#include <glm/gtx/string_cast.hpp>
#include <type_traits>
#include <ngl/fmt/format.h>

template <class T>
void print(const char *msg,T type) 
{
   if constexpr(std::is_same_v<T, ngl::Vec4> || std::is_same_v<T, Eigen::Vector4f> || std::is_same_v<T,Imath::Vec4<float>>) 
   {
      std::cout<<msg<<" ["<<type<<"]\n";
   } 
   else if constexpr(std::is_same_v<T,glm::vec4>)
   {
      std::cout<<msg<<" ["<<glm::to_string(type)<<"]\n";
   }
   else if constexpr(std::is_same_v<T,QVector4D>)
   {
      std::cout<<msg<<" ["<<type[0]<<','<<type[1]<<','<<type[2]<<','<<type[3]<<"]\n";
   }
}



void defaultConstructVec4();
void singleParamConstructVec4();
void multipleParamConstructVec4();
void accesorsVec4();
void mutatorVec4();
void subscriptVec4();
void copyConstruction();


int main()
{
   defaultConstructVec4();
   singleParamConstructVec4();
   multipleParamConstructVec4();
   accesorsVec4();
   mutatorVec4();
   subscriptVec4();
   copyConstruction();
   return EXIT_SUCCESS;
}

void defaultConstructVec4()
{
  std::cout<<"********************************************\n";
  std::cout<<"Default Construction\n";
  std::cout<<"********************************************\n";
   // Construct NGLVec4
  auto nglV4=ngl::Vec4();
  // Construct eigen Vec4
  auto eigenV4=Eigen::Vector4f(); 
  // construct glm Vec4
  auto glmVec4=glm::vec4();
  // construct IMath Vec4
  auto imathVec4=Imath::Vec4<float>();
  // construct Qt Vec4
  auto qtVec4=QVector4D();
  print("NGL Vec4()",nglV4);
  print("Eigen::Vector4f()",eigenV4);
  print("Imath::Vec4<float>()",imathVec4);
  print("glm::vec4()",glmVec4);
  print("QVector4D()",qtVec4); 
}

void singleParamConstructVec4()
{
  std::cout<<"********************************************\n";
  std::cout<<"Single Param Construction\n";
  std::cout<<"********************************************\n";
   // Construct NGLVec4
  auto nglV4=ngl::Vec4(2.0f);
  // construct glm Vec4
  auto glmVec4=glm::vec4(2.0f);
  // construct IMath Vec4
  auto imathVec4=Imath::Vec4<float>(2.0f);
  print("NGL Vec4(2.0f)",nglV4);
  print("Imath::Vec4<float>(2.0f)",imathVec4);
  print("glm::vec4(2.0f)",glmVec4);
  
}


void multipleParamConstructVec4()
{
  std::cout<<"********************************************\n";
  std::cout<<"Default Construction\n";
  std::cout<<"********************************************\n";
   // Construct NGLVec4
  auto nglV4=ngl::Vec4(1.0f,2.0f,3.0f);
  // Construct eigen Vec4
  auto eigenV4=Eigen::Vector4f(1.0f,2.0f,3.0f,4.0f); 
  // construct glm Vec4
  auto glmVec4=glm::vec4(1.0f,2.0f,3.0f,4.0f);
  // construct IMath Vec4
  auto imathVec4=Imath::Vec4<float>(1.0f,2.0f,3.0f,4.0f);
  // construct Qt Vec4
  auto qtVec4=QVector4D(1.0f,2.0f,3.0f,4.0f);
  print("NGL Vec4(1.0f,2.0f,3.0f,4.0f)",nglV4);
  print("Eigen::Vector4f(1.0f,2.0f,3.0f,4.0f)",eigenV4);
  print("Imath::Vec4<float>(1.0f,2.0f,3.0f,4.0f)",imathVec4);
  print("glm::vec4(1.0f,2.0f,3.0f,4.0f)",glmVec4);
  print("QVector4D(1.0f,2.0f,3.0f,4.0f)",qtVec4); 
}

void accesorsVec4()
{
   std::cout<<"********************************************\n";
   std::cout<<"accesors\n";
   std::cout<<"********************************************\n";
   // Construct NGLVec4
   auto nglV4=ngl::Vec4(1.0f,2.0f,3.0f);
   // Construct eigen Vec4
   auto eigenV4=Eigen::Vector4f(1.0f,2.0f,3.0f,4.0f); 
   // construct glm Vec4
   auto glmVec4=glm::vec4(1.0f,2.0f,3.0f,4.0f);
   // construct IMath Vec4
   auto imathVec4=Imath::Vec4<float>(1.0f,2.0f,3.0f,4.0f);
   // construct Qt Vec4
   auto qtVec4=QVector4D(1.0f,2.0f,3.0f,4.0f);
   std::cout<<fmt::format("ngl::Vec4(1.0f,2.0f,3.0f) m_x {} m_y {} m_z {} m_w {} \n",nglV4.m_x,nglV4.m_y,nglV4.m_z,nglV4.m_w);
   std::cout<<fmt::format("Eigen::Vector4f(1.0f,2.0f,3.0f) x() {} y() {} z() {} w() {} \n",eigenV4.x(),eigenV4.y(),eigenV4.z(),eigenV4.w());
   std::cout<<fmt::format("glm::vec4(1.0f,2.0f,3.0f) x {} y {} z {} w {} \n",glmVec4.x,glmVec4.y,glmVec4.z,glmVec4.w);
   std::cout<<fmt::format("Imath::Vec4<float>(1.0f,2.0f,3.0f) x {} y {} z {} w {} \n",imathVec4.x,imathVec4.y,imathVec4.z,imathVec4.w);
   std::cout<<fmt::format("QVector4D(1.0f,2.0f,3.0f) x() {} y() {} z() {} w() {} \n",qtVec4.x(),qtVec4.y(),qtVec4.z(),qtVec4.w());
}


void mutatorVec4()
{
  std::cout<<"********************************************\n";
  std::cout<<"Mutator \n";
  std::cout<<"********************************************\n";
   // Construct NGLVec4
  auto nglV4=ngl::Vec4();
  nglV4.m_x=1.0f;
  nglV4.m_y=2.0f;
  nglV4.m_z=3.0f;
  nglV4.m_w=4.0f;
  
  // Construct eigen Vec4
  auto eigenV4=Eigen::Vector4f();
  eigenV4<<1.0f,2.0f,3.0f,4.0f;
  // construct glm Vec4
  auto glmVec4=glm::vec4();
  glmVec4.x=1.0f;
  glmVec4.y=2.0f;
  glmVec4.z=3.0f;
  glmVec4.w=4.0f;
  
  // construct IMath Vec4
  auto imathVec4=Imath::Vec4<float>();
  imathVec4.x=1.0f;
  imathVec4.y=2.0f;
  imathVec4.z=3.0f;
  imathVec4.w=4.0f;
  // construct Qt Vec4
  auto qtVec4=QVector4D();
  qtVec4.setX(1.0f);
  qtVec4.setY(2.0f);
  qtVec4.setZ(3.0f);
  qtVec4.setW(4.0f);
  
  print("NGL Vec4(); ",nglV4);
  print("Eigen::Vector4f()",eigenV4);
  print("Imath::Vec4<float>()",imathVec4);
  print("glm::vec4()",glmVec4);
  print("QVector4D()",qtVec4); 
}

void subscriptVec4()
{
  std::cout<<"********************************************\n";
  std::cout<<"subscript \n";
  std::cout<<"********************************************\n";
   // Construct NGLVec4
  auto nglV4=ngl::Vec4();
  nglV4[0]=1.0f;
  nglV4[0]=2.0f;
  nglV4[0]=3.0f;
  nglV4[0]=4.0f;
  
  // Construct eigen Vec4
  auto eigenV4=Eigen::Vector4f();
  eigenV4[0]=1.0f;
  eigenV4[1]=1.0f;
  eigenV4[2]=1.0f;
  eigenV4[3]=1.0f;
  // construct glm Vec4
  auto glmVec4=glm::vec4();
  glmVec4[0]=1.0f;
  glmVec4[1]=2.0f;
  glmVec4[2]=3.0f;
  glmVec4[3]=4.0f;
  
  // construct IMath Vec4
  auto imathVec4=Imath::Vec4<float>();
  imathVec4[0]=1.0f;
  imathVec4[1]=2.0f;
  imathVec4[2]=3.0f;
  imathVec4[3]=4.0f;
  // construct Qt Vec4
  auto qtVec4=QVector4D();
  qtVec4[0]=1.0f;
  qtVec4[1]=2.0f;
  qtVec4[2]=3.0f;
  qtVec4[3]=4.0f;
  
  print("NGL Vec4(); ",nglV4);
  print("Eigen::Vector4f()",eigenV4);
  print("Imath::Vec4<float>()",imathVec4);
  print("glm::vec4()",glmVec4);
  print("QVector4D()",qtVec4); 
// try these to see what out of bounds does.
//   qtVec4[5]=99;
//   imathVec4[5]=4.0f;
//   glmVec4[5]=4.0f;
//   eigenV4[5]=1.0f;
//   nglV4[5]=4.0f;

}

void copyConstruction()
{
  std::cout<<"********************************************\n";
  std::cout<<"copy construction \n";
  std::cout<<"********************************************\n";

   {
      ngl::Vec4 a(1,2,3,4);
      auto b=a;
      auto c(b);
      print("ngl::Vec4 a(1,2,3,4)",a);
      print("auto b=a;",b);
      print("auto c(b)",c);
   }
   {
      Eigen::Vector4f a(1,2,3,4);
      auto b=a;
      auto c(b);
      print("Eigen::Vector4f a(1,2,3,4)",a);
      print("auto b=a;",b);
      print("auto c(b)",c);
   }
   {
      glm::vec4 a(1,2,3,4);
      auto b=a;
      auto c(b);
      print("glm::vec4 a(1,2,3,4)",a);
      print("auto b=a;",b);
      print("auto c(b)",c);
   }
   {
      Imath::Vec4<float> a(1,2,3,4);
      auto b=a;
      auto c(b);
      print("Imath::Vec4<float> a(1,2,3,4)",a);
      print("auto b=a;",b);
      print("auto c(b)",c);
   }
   {
      QVector4D a(1,2,3,4);
      auto b=a;
      auto c(b);
      print("QVector4D a(1,2,3,4)",a);
      print("auto b=a;",b);
      print("auto c(b)",c);
   }


}