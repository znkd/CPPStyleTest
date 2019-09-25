//
//  ViewController.m
//  CPPStyleTest
//
//  Created by zhang nan on 2019/9/25.
//  Copyright © 2019 com.YK.debug3. All rights reserved.
//

#import "ViewController.h"
#import "BaseClass.hpp"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
#if 0
    DerivedClass dc = DerivedClass();
    BaseClass* pb = &dc;
    //BaseClass bc = BaseClass();
    pb->fun();
    //bc.fun();
#else

    DerivedClass* pdc = new DerivedClass();
    BaseClass* pbc = pdc;
    
    pbc->fun();
    
    TwoDerivedClass* ptdc = new TwoDerivedClass();
    DerivedClass* pnewdc = ptdc;   //如果这里用BaseClass* 来替换，那么，析构函数，只调用base的，不会调用derived和twoderived。
    
    pnewdc->fun();
    delete pnewdc;
    pnewdc = nil;
    
    delete pbc;
    pbc = nil;
#endif
}


@end
