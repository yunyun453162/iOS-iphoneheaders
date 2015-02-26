/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkPlayabilityMonitor : NSObject {

	int _effectiveNetworkTypeForPlayback;
	int _networkType;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,readonly) int networkType; 
@property (nonatomic,readonly) int effectiveNetworkTypeForPlayback; 
+(id)sharedNetworkPlayabilityMonitor;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(int)networkType;
-(int)effectiveNetworkTypeForPlayback;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
