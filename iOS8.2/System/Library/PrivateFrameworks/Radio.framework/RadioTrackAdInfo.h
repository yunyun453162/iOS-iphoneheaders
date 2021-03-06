/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/NSSecureCoding.h>

@class NSString;

@interface RadioTrackAdInfo : NSObject <NSSecureCoding> {

	char _gatewayAdSlot;
	NSString* _slotIdentifier;

}

@property (getter=isGatewayAdSlot,nonatomic,readonly) char gatewayAdSlot;              //@synthesize gatewayAdSlot=_gatewayAdSlot - In the implementation block
@property (nonatomic,copy,readonly) NSString * slotIdentifier;                         //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithAdInfoDictionary:(id)arg1 ;
-(NSString *)slotIdentifier;
-(char)isGatewayAdSlot;
@end

