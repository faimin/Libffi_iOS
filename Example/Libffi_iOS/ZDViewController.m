//
//  ZDViewController.m
//  Libffi_iOS
//
//  Created by faimin on 12/23/2020.
//  Copyright (c) 2020 faimin. All rights reserved.
//

#import "ZDViewController.h"
#if __has_include(<Libffi_iOS_Library/Libffi_iOS.h>)
#import <Libffi_iOS_Library/Libffi_iOS.h>
#else
//@import Libffi_iOS;
#endif

//static void ZD_ffi_closure_func(ffi_cif *cif, void *ret, void **args, void *userdata) {
//
//}

@interface ZDViewController ()

@end

@implementation ZDViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
//    ffi_cif *cif = calloc(1, sizeof(ffi_cif));
//
//    void *newIMP = NULL;
//    ffi_closure *cloure = ffi_closure_alloc(sizeof(ffi_closure), (void **)&newIMP);
//    ffi_status prepClosureStatus = ffi_prep_closure_loc(cloure, cif, ZD_ffi_closure_func, "hello", newIMP);
//    if (prepClosureStatus != FFI_OK) {
//        NSCAssert1(NO, @"ffi_prep_closure_loc failed = %d", prepClosureStatus);
//    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
