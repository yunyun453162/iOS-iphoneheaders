/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSPData;

@interface TSPDataObserverInfo : NSObject {

	id _observer;
	TSPData* _data;
	/*^block*/id _completionHandler;
	BOOL _isInternalObserver;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL isInternalObserver;                 //@synthesize isInternalObserver=_isInternalObserver - In the implementation block
-(BOOL)shouldNotifyStatus:(long long)arg1 ;
-(BOOL)shouldClearObserverForStatus:(long long)arg1 ;
-(id)initWithObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)notifyWithStatus:(long long)arg1 info:(id)arg2 ;
-(BOOL)isInternalObserver;
-(id)init;
-(unsigned long long)options;
@end

