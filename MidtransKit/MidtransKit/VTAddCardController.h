//
//  VTAddCardController.h
//  MidtransKit
//
//  Created by Nanang Rafsanjani on 2/23/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MidtransCoreKit/VTUser.h>

@interface VTAddCardController : UIViewController

@property (nonatomic, readonly) VTUser *user;
@property (nonatomic, readonly) NSArray *items;

+ (instancetype)controllerWithUser:(VTUser *)user items:(NSArray *)items;
@end