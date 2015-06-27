/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MFWeakReferenceHolder, NSObject;

@interface _MFContentProtectionObserverWrapper : NSObject {

	MFWeakReferenceHolder* _observerReference;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<MFContentProtectionObserver> observer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id<MFContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
@end
