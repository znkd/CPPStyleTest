//
//  BaseClass.hpp
//  CPPStyleTest
//
//  Created by zhang nan on 2019/9/25.
//  Copyright © 2019 com.YK.debug3. All rights reserved.
//

#ifndef BaseClass_hpp
#define BaseClass_hpp

#include <stdio.h>

class BaseClass {
public:
    BaseClass();
     ~BaseClass();
    virtual void fun();
public:
    
};


class DerivedClass : public BaseClass {
public:
    DerivedClass();
    virtual ~DerivedClass();
    virtual void fun();
public:
    
};

class TwoDerivedClass : public DerivedClass {
public:
    TwoDerivedClass();
    ~TwoDerivedClass();
    virtual void fun();
public:
    
};
#endif /* BaseClass_hpp */
