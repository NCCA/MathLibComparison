# Introduction

The purpose of this repository is to create a collection of examples and tests for 3D graphics Vector / Matrix libraries used in my teaching.

## Rationale 

For a number of years we have used the [NGL](https://github.com/NCCA/NGL) library for our teaching at the NCCA, it works well and provides a simple set of classes that makes the code accessible to undergraduate students and non-programmers (for example how to use a library before you have learnt templates and more esoteric C++ syntax), this also has the advantage of concentrating on solving problems and writing interesting programs rather than developing and testing a 3D library before starting on the fun stuff. We also encourage students to write code to solve maths problems so simplicity is a must.

I also give the students an option of either developing their own set of classes (a good exercise but I do discourage this as it's quite dull and I want people to enjoy coding) or alternatively choose a 3rd party library to use in the projects. Typically I don't specify which one to use and just point students to what is available to them, this repository is basically my investigation and analysis of some of the major libraries and some basic use cases and results.


## Library Selection

I decided to limit the scope of the libraries to basic C++ libraries as this is our core language, most of these libraries also have python bindings (as does NGL), but these are based on the C++ ones so learning them is similar.

The libraries selected are as follows

- [Eigen3](http://eigen.tuxfamily.org/index.php?title=Main_Page)
- [glm](https://glm.g-truc.net/0.9.9/index.html)
- [IMath from OpenEXR](https://github.com/AcademySoftwareFoundation/openexr/tree/master/IlmBase)
- [Qt 3D classes](https://www.qt.io/) 


### [Eigen3](http://eigen.tuxfamily.org/index.php?title=Main_Page)

This has been selected as it forms the basis of many 3D packages used in academic, it also have support for arbitrary size matrix with loads of operations (for example Jacobians). The internal library code is very complex and makes use of templates and SIMD processing for speed. It is hard for students to look at the source and understand and learn from.

### [glm](https://glm.g-truc.net/0.9.9/index.html)

The glm library is used in many 3D programming courses as it mimics the GLSL shading language. It is header only and easy to use however the code is heavily templated so hard for students to look at and learn from.

### [IMath from OpenEXR](https://github.com/AcademySoftwareFoundation/openexr/tree/master/IlmBase)

IMath is part of the openexr library and thus part of the [VFX Reference platform](https://vfxplatform.com/) so students may encounter it in the industry. Whilst the code is templated it is much simpler to understand and use. There are only specialisations for Vec2/3/4 and Simple Matrix types to make it easier to use.

### [Qt 3D classes](https://www.qt.io/) 

Qt is our core GUI software and from time to time we need to use the build in 3D classes so these are here for comparison only. The are not used that often in teaching.

# Scope of Report

In this investigation I'm only going to concentrate on floating point classes (no double or half types).

The code will be split into directories for the following Types

- [Vec2 / Mat2](Vec2Mat2.md)
- [Vec3 / Mat3](Vec3Mat3.md)
- [Vec4 / Mat4](Vec4Mat4.md)
- Quaternion

With code examples split into the following broad taxonomy

1. Construction and default values / attribute access.
2. Overloaded mathematical operations and free functions.
3. Special Math functions (rotation transpose, length etc)



