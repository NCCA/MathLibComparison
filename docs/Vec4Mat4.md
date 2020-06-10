# Vec4 Mat4 

The following document summarises the code for the Vec4 / Mat4 classes.

## Vec4 Default Construction

All the classes have default constructors, when designing NGL I decided to default to a Point so set the w components to a 1.0f all other libraries default to all zeros. This decision was made as student usually forget to set the w component to 1 and translation don't happen. Am considering changing this behaviour for the next iteration. 

IMath seems to not initialize the values and this is explicitly stated in the header files ``` Vec4 ();	// no initialization```

## User Defined Constructors

Only Imath, NGL and glm allow the construction with a single parameter, again NGL set the w component 1.0 whilst the others set it to the param set in (for example ```glm::vec4 a(2.0);``` will result in 2,2,2,2)

All classes can be constructed with x,y,z,w parameters, only NGL allows x,y,z and has w defaulted to 1.0f.

All copy constructors work as expected with both forms
```
a=b;
c(b);
```

## Accessors

A mixed bag for accessors, NGL,glm and IMath have public attributes for x,y,z,w (ngl coding standard uses m_ as a prefix for all methods). Eigen and QVector4D use methods and public access is not available. 

## Mutators

As with the previous accessors NGL,glm and IMath have public access to members. QVector4D uses the standard Qt model of ```setX/Y/Z/W```. Perhaps the most interesting approach is from Eigen which uses overloaded ```<< and , operators``` as shown below

```
auto eigenV4=Eigen::Vector4f();
eigenV4<<1.0f,2.0f,3.0f,4.0f;
```

## Subscript operators 

All of the classes allow subscript access to the methods, if writing code to target / change which library you are going to use I would suggest this is the best way of getting to the attributes.

Note glm and Eigen will throw abort is subscript is out of range, NGL if compiled as debug will also do this. Other classes just seem to ignore.

# Basic Maths

## Addition / Subtraction

The addition and subtraction works as expected with overloaded +/- operator returning a new Vec4 type. All of the libraries except NGL do component wise addition / subtraction so w(+/-)w is done.

In the case of NGL I made the design decision (due to experience with students making errors with the operation) of not adding the w components and always using the Left Hand side w component in the returned value. Whilst most of the time I use Vec3 anyway It may be worth changing this for later versions of NGL to be compatible with other libs.

The same is true for the += and -= operators.

## Multiplication and Division

Both work as expected, as with addition the w component with NGL remains the same as the Left hand side.

In all cases division by zero seems to just set values to inf, I've 

