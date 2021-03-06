/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface iAP2LocationInfo : NSObject {

	unsigned paramCountArr[24];
	NSNumber* componentID;
	NSString* componentName;

}

@property (retain) NSNumber * componentID; 
@property (retain) NSString * componentName; 
-(unsigned)paramCount:(int)arg1 ;
-(NSNumber *)componentID;
-(void)incrementParamCount:(int)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentID:(NSNumber *)arg1 ;
-(char)isSentenceTypeSupported:(int)arg1 ;
-(unsigned)sentenceTypesBitmask;
-(void)dealloc;
-(id)init;
-(NSString *)componentName;
@end

