/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString, NSData;

@interface AAGenericTermsUIResponse : AAResponse {

	NSDictionary* _responseTermsDictionary;
	NSString* _responseAgreeURL;
	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData; 
@property (nonatomic,readonly) NSString * agreeURL; 
@property (nonatomic,readonly) NSDictionary * termsDictionary; 
-(id)responseData;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)termsDictionary;
-(id)agreeURL;
-(void).cxx_destruct;
@end
