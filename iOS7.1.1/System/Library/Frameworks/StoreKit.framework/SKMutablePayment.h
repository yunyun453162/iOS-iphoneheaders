/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/SKPayment.h>

@class NSString, NSData, NSDictionary;

@interface SKMutablePayment : SKPayment

@property (nonatomic,@dynamic,copy) NSString * applicationUsername; 
@property (nonatomic,@dynamic,copy) NSString * productIdentifier; 
@property (assign,nonatomic,@dynamic) long long quantity; 
@property (nonatomic,@dynamic,copy) NSData * requestData; 
@property (nonatomic,@dynamic,copy) NSString * partnerIdentifier; 
@property (nonatomic,@dynamic,copy) NSString * partnerTransactionIdentifier; 
@property (nonatomic,@dynamic,copy) NSDictionary * requestParameters; 
-(void)setRequestParameters:(id)arg1 ;
-(void)setApplicationUsername:(id)arg1 ;
-(void)setProductIdentifier:(id)arg1 ;
-(void)setQuantity:(long long)arg1 ;
-(void)setRequestData:(id)arg1 ;
-(void)setPartnerTransactionIdentifier:(id)arg1 ;
-(void)setPartnerIdentifier:(id)arg1 ;
@end
