//
//  Twitter.h
//  iOSSocial
//
//  Created by Christopher White on 7/22/11.
//  Copyright 2011 Mad Races, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^AuthorizationHandler)(NSDictionary *userInfo, NSError *error);

@interface Twitter : NSObject

- (id)initWithDictionary:(NSDictionary*)dictionary;

- (void)authorizeWithScope:(NSString *)scope 
        fromViewController:(UIViewController*)vc 
     withCompletionHandler:(AuthorizationHandler)completionHandler;

- (BOOL)isSessionValid;

- (void)logout;

+ (void)authorizeURLRequest:(NSMutableURLRequest*)URLRequest;

+ (id)JSONFromData:(NSData*)data;

@end