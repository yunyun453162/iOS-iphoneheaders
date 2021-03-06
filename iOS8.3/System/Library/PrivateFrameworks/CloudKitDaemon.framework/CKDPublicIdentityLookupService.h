/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject, CKDKeyValueDiskCache, CKDOperation, CKDClientContext;

@interface CKDPublicIdentityLookupService : NSObject {

	NSMutableArray* _pendingRequests;
	NSObject*<OS_dispatch_source> _lookupSource;
	NSObject*<OS_dispatch_queue> _queue;
	CKDKeyValueDiskCache* _cache;
	CKDOperation* _operationToUseForSettingUpThelookup;
	CKDClientContext* _context;

}

@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)scheduleRequest:(id)arg1 forOperation:(id)arg2 ;
-(void)_fetchEmails;
-(void)_finishCompletedRequests;
-(void)_finishPendingRequestsWithError:(id)arg1 ;
-(void)_saveAndFinishRequestsWithPublicIdentify:(id)arg1 userInfo:(id)arg2 forEmail:(id)arg3 ;
@end

