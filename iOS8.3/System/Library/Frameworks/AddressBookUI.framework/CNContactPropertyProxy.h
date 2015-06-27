/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:35:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNContact, NSString;

@interface CNContactPropertyProxy : NSObject {

	CNContact* _contact;
	NSString* _property;
	int _identifier;

}

@property (assign) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (assign) NSString * property;              //@synthesize property=_property - In the implementation block
@property (assign) int identifier;                   //@synthesize identifier=_identifier - In the implementation block
+(id)proxyForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(int)arg3 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
@end
