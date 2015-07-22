/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {

	long long _taskType;
	long long _retryCount;

}

@property (assign,nonatomic) long long taskType;                //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)retryCount;
-(long long)taskType;
-(void)setTaskType:(long long)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
@end
