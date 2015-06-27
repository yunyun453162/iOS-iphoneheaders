/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPassbookSettingsOptionsDelegate.h>

@class CNContact, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPassbookSettingsOptionsDelegate>

@property (nonatomic,retain) CNContact * defaultShippingAddress; 
@property (nonatomic,retain) CNContact * defaultBillingAddress; 
@property (nonatomic,retain) CNContact * defaultContactEmail; 
@property (nonatomic,retain) CNContact * defaultContactPhone; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaults;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(void)_keychainData:(id*)arg1 forKey:(id)arg2 ;
-(id)_contactForKeychainKey:(id)arg1 ;
-(void)_setContact:(id)arg1 propertyID:(int)arg2 forKeychainKey:(id)arg3 ;
-(CNContact *)defaultShippingAddress;
-(CNContact *)defaultBillingAddress;
-(CNContact *)defaultContactEmail;
-(CNContact *)defaultContactPhone;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultShippingAddress:(CNContact *)arg1 ;
-(void)setDefaultBillingAddress:(CNContact *)arg1 ;
-(void)setDefaultContactEmail:(CNContact *)arg1 ;
-(void)setDefaultContactPhone:(CNContact *)arg1 ;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(id)init;
@end
