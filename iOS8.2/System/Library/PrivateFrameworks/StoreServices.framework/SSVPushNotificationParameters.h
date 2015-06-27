/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class NSNumber, NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _environmentName;
	NSMutableDictionary* _parameterDictionary;
	int _requestType;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSArray * mediaKinds; 
@property (nonatomic,copy) NSString * notificationType; 
@property (nonatomic,copy) NSDictionary * putParameters; 
@property (assign,nonatomic) int requestType;                         //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)accountIdentifier;
-(void)setNotificationType:(NSString *)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(int)requestType;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(NSArray *)mediaKinds;
-(NSString *)notificationType;
-(NSDictionary *)putParameters;
-(void)setMediaKinds:(NSArray *)arg1 ;
-(void)setPutParameters:(NSDictionary *)arg1 ;
-(id)_copyParametersDictionary;
-(NSString *)environmentName;
@end
