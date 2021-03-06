/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface _SBSDisplayIdentifiersCache : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSSet* _displayIdentifiers;
	int _changedToken;
	/*^block*/ id _changedBlock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_queue_noteChanged;
-(id)displayIdentifiers;
-(void)registerChangedBlock:(/*^block*/ id)arg1 ;
@end

