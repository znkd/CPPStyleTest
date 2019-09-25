//
//  BaseClass.cpp
//  CPPStyleTest
//
//  Created by zhang nan on 2019/9/25.
//  Copyright © 2019 com.YK.debug3. All rights reserved.
//

#include "BaseClass.hpp"

BaseClass::BaseClass()
{
    printf("BaseClass::BaseClass\r\n");
}

BaseClass::~BaseClass()
{
    printf("BaseClass::~BaseClass\r\n");
}

void BaseClass::fun()
{
    printf("BaseClass::fun()\r\n");
}

DerivedClass::DerivedClass()
{
    printf("DerivedClass::DerivedClass\r\n");
}

DerivedClass::~DerivedClass()
{
    printf("DerivedClass::~DerivedClass\r\n");
}

void DerivedClass::fun()
{
    printf("DerivedClass::fun()\r\n");
}

TwoDerivedClass::TwoDerivedClass()
{
    printf("TwoDerivedClass::TwoDerivedClass\r\n");
}

TwoDerivedClass::~TwoDerivedClass()
{
    printf("TwoDerivedClass::~TwoDerivedClass\r\n");
}

void TwoDerivedClass::fun()
{
    printf("TwoDerivedClass::fun()\r\n");
}
