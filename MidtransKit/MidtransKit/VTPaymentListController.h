//
//  VTPaymentListController.h
//  MidtransKit
//
//  Created by Nanang Rafsanjani on 2/22/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VTItemViewModel.h"
#import <MidtransCoreKit/VTUser.h>

@interface VTPaymentListController : UIViewController
+ (instancetype)controllerWithUser:(VTUser *)user items:(NSArray *)items;
@end