//
//  NSString+MBHMAC.h
//  MBHMAC
//
//  Created by Marcel Borsten on 5/21/13.
//  Copyright (c) 2013 Marcel Borsten All rights reserved.
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the
//  "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish,
//  distribute, sublicense, and/or sell copies of the Software, and to
//  permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
//  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>

@interface NSString (MBHMAC)

/**
 * @brief Generates a HMAC with a given key
 * @param algorithm The hashing algorithm that is going to be used to
 * create the HMAC:
 kCCHmacAlgSHA1,
 kCCHmacAlgMD5,
 kCCHmacAlgSHA256,
 kCCHmacAlgSHA384,
 kCCHmacAlgSHA512,
 kCCHmacAlgSHA224
 * @param keyString the secret key to be used to create the HMAC
 * @return The HMAC in base64 string format
 */
-(NSString *)hmacWithHashingAlgorithm:(CCHmacAlgorithm)algorithm
                                  key:(NSString *)keyString;

@end
