/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:29 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)fireExpirationHandler;
@end

