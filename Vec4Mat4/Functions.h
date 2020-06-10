#ifndef FUNCTIONS_H_
#define FUNCTIONS_h_

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
extern void defaultConstructVec4();
extern void singleParamConstructVec4();
extern void multipleParamConstructVec4();
extern void accesorsVec4();
extern void mutatorVec4();
extern void subscriptVec4();
extern void copyConstruction();

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




#endif