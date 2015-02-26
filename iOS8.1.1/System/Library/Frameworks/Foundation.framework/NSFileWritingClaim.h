/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileWritingClaim : NSFileAccessClaim {

	NSURL* _url;
	BOOL _urlDidChange;
	unsigned long long _options;
	NSFileAccessNode* _location;

}
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(/*^block*/id)arg3 ;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(/*^block*/id)arg4 ;
-(void)resolveURLsThenContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
