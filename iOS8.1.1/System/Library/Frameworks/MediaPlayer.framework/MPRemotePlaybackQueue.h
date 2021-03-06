/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSDictionary;

@interface MPRemotePlaybackQueue : NSObject {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * userInfo;                                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isRequestingImmediatePlayback,nonatomic,readonly) BOOL requestingImmediatePlayback; 
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)isRequestingImmediatePlayback;
-(void)dealloc;
-(id)init;
-(NSDictionary *)userInfo;
@end

