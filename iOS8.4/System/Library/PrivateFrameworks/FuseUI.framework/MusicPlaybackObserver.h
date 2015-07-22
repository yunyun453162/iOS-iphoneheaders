/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue, MusicLocalPlaybackEventDataSource, MPMediaPlaylist, MPAVController;

@interface MusicPlaybackObserver : NSObject {

	NSOperationQueue* _addOperationQueue;
	MusicLocalPlaybackEventDataSource* _localPlaybackEventDataSource;
	MPMediaPlaylist* _lastIncrementedPlaylist;
	MPAVController* _player;

}

@property (nonatomic,readonly) MPAVController * player;                                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MusicLocalPlaybackEventDataSource * localPlaybackEventDataSource; 
+(id)playbackObserverForPlayer:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(MusicLocalPlaybackEventDataSource *)localPlaybackEventDataSource;
-(id)_initWithPlayer:(id)arg1 ;
-(void)_currentItemWillChange:(id)arg1 ;
-(void)_currentItemDidChange:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end
