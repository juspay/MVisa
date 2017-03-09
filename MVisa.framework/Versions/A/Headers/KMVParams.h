//
//  KMVParams.h
//  MVisa
//
//  Created by Sachin Sharma on 25/12/16.
//  Copyright © 2016 Juspay Technologies Pvt Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KMVParams : NSObject

@property (nonatomic, strong) NSString *crn;
@property (nonatomic, strong) NSString *sessionToken;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *payeeName;
@property (nonatomic, strong) NSString *env;

@end
