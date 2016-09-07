//
//  VTPaymentKlikBCA.h
//  MidtransCoreKit
//
//  Created by Arie on 6/16/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MidtransPaymentDetails.h"
@interface MTPaymentKlikBCA : NSObject<MidtransPaymentDetails>
- (instancetype _Nonnull)initWithKlikBCAUserId:(NSString * _Nonnull)userId token:(MidtransTransactionTokenResponse *_Nonnull)token;
@end
