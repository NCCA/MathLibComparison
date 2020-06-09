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
  if constexpr(std::is_same<decltype(type), ngl::Vec4>::value || std::is_same<decltype(type), Eigen::Vector4f>::value || std::is_same<decltype(type),Imath::Vec4<float>>::value) 
    {
        std::cout<<msg<<" ["<<type<<"]\n";
    } 
   else if constexpr(std::is_same<decltype(type),glm::vec4>::value)
   {
        std::cout<<msg<<" ["<<glm::to_string(type)<<"]\n";
   }
   else if constexpr(std::is_same<decltype(type),QVector4D>::value)
   {
      std::cout<<msg<<" ["<<type[0]<<','<<type[1]<<','<<type[2]<<','<<type[3]<<"]\n";
   }
}



void defaultConstructVec4();
void singleParamConstructVec4();
void multipleParamConstructVec4();
void accesorsVec4();


int main()
{
 defaultConstructVec4();
 singleParamConstructVec4();
 multipleParamConstructVec4();
 accesorsVec4();

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