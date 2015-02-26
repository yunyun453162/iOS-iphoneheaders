/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {

	int _lock;
	unsigned long long _suspensionCount;
	NSMutableArray* _queuedInvocations;
	/*^block*/id _shouldSuspendInvocationBlock;

}
+(id)proxyWithTarget:(id)arg1 ;
+(id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(void)suspend;
-(void)forwardInvocation:(id)arg1 ;
-(void)resume;
-(void)_dispatchSuspendedMessages;
-(void)removeAllEnqueuedInvocations;
@end
