//
//  MVisaViewController.h
//  MVisa
//
//  Created by Sachin Sharma on 25/12/16.
//  Copyright © 2016 Juspay Technologies Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KMVParams.h"

typedef void (^KMVCompletion)(id data, NSDictionary *error);
@interface MVisaViewController : UIViewController
- (instancetype)initWithParams:(KMVParams*)params;
- (void)startPaymentInViewController:(UIViewController*)viewController completion:(KMVCompletion)completion;
@end
