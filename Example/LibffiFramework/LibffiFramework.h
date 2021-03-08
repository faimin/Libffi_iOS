//
//  LibffiFramework.h
//  LibffiFramework
//
//  Created by Zero.D.Saber on 2021/3/8.
//  Copyright © 2021 faimin. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for LibffiFramework.
FOUNDATION_EXPORT double LibffiFrameworkVersionNumber;

//! Project version string for LibffiFramework.
FOUNDATION_EXPORT const unsigned char LibffiFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LibffiFramework/PublicHeader.h>


#if __has_include(<Libffi_iOS/ffi.h>)
#import <Libffi_iOS/ffi.h>
#elif __has_include(<ffi.h>)
#import <ffi.h>
#elif __has_include("ffi.h")
#import "ffi.h"
#endif
