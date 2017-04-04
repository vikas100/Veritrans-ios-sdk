//
//  MidtransCreditCardConfig.h
//  MidtransCoreKit
//
//  Created by Nanang Rafsanjani on 8/10/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CC_CONFIG ((MidtransCreditCardConfig *)[MidtransCreditCardConfig shared])

typedef NS_ENUM(NSUInteger, MTCreditCardPaymentType) {
    MTCreditCardPaymentTypeNormal,
    MTCreditCardPaymentTypeOneclick,
    MTCreditCardPaymentTypeTwoclick
};

typedef NS_ENUM(NSUInteger, MTAcquiringBank) {
    MTAcquiringBankUnknown,
    MTAcquiringBankBCA,
    MTAcquiringBankBRI,
    MTAcquiringBankCIMB,
    MTAcquiringBankMandiri,
    MTAcquiringBankBNI,
    MTAcquiringBankMaybank
};

@interface MidtransCreditCardConfig : NSObject

@property (nonatomic, readonly) NSString *acquiringBankString;
@property (nonatomic, readonly) NSString *channel;

@property (nonatomic) MTCreditCardPaymentType paymentType;
@property (nonatomic) BOOL setDefaultCreditSaveCardEnabled;

/*
 Enable 3D secure credit card transaction
 */
@property (nonatomic) BOOL secure3DEnabled;

/*
 Enable save credit card feature
 */
@property (nonatomic) BOOL saveCardEnabled;

/*
 Enable TOKEN STORAGE feature
 */
@property (nonatomic) BOOL tokenStorageEnabled;

/*
 Custom acquiring bank for credit card payment
 */
@property (nonatomic) MTAcquiringBank acquiringBank;

/*
 Set to YES if you want to enable promo engine feature
 */
@property (nonatomic, assign) BOOL promoEnabled;

/*
 These NSString array are promo codes that will be allowed by promo engine
 */
@property (nonatomic) NSArray *allowedPromoCodes;

/*
 Boolean value to set pre-auth credit card transaction
 */
@property (nonatomic, assign) BOOL preauthEnabled;

+ (MidtransCreditCardConfig *)shared;

@end
