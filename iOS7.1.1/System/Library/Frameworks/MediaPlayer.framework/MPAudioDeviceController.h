/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface MPAudioDeviceController : NSObject {

	NSString* _category;
	id _delegate;
	bool _determiningPickableRoutes;
	bool _fakeRouteAvailable;
	NSArray* _pickableRoutes;
	NSDictionary* _pickedRoute;
	bool _pickedRouteHasVolumeControl;
	bool _pickedRouteHasVolumeControlIsValid;
	NSMutableArray* _pickableRoutesCompletionHandlers;
	bool _scheduledSendAudioRoutesDidChange;

}

@property (assign,nonatomic,__weak) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool routeDiscoveryEnabled; 
+(id)_routeDiscoveryModeStack;
+(void)_internalPushRouteDiscoveryMode:(long long)arg1 ;
+(long long)routeDiscoveryMode;
+(void)_internalSetSystemRouteDiscoveryMode:(long long)arg1 ;
+(void)setRouteDiscoveryMode:(long long)arg1 ;
+(bool)routeDiscoveryEnabled;
+(void)setRouteDiscoveryEnabled:(bool)arg1 ;
+(void)pushRouteDiscoveryMode:(long long)arg1 ;
+(void)restoreRouteDiscoveryMode;
-(bool)pickBestDeviceRoute;
-(bool)volumeControlIsAvailable;
-(id)_pickedRoute;
-(void)clearCachedRoutes;
-(bool)airtunesRouteIsPicked;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(bool)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(bool)pickRoute:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(bool)pickHandsetRoute;
-(bool)pickSpeakerRoute;
-(bool)speakerRouteIsPicked;
-(bool)handsetRouteIsPicked;
-(bool)receiverRouteIsPicked;
-(void)logCurrentRoutes;
-(id)_pickableRoutes;
-(bool)_routeIsHandset:(id)arg1 ;
-(bool)_routeIsSpeaker:(id)arg1 ;
-(bool)_routeIsDisplayPort:(id)arg1 ;
-(bool)routeDiscoveryEnabled;
-(void)setRouteDiscoveryEnabled:(bool)arg1 ;
-(bool)pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2 ;
-(bool)_routeIsHeadphones:(id)arg1 ;
-(long long)indexOfPickedRoute;
-(id)routeNameAtIndex:(unsigned long long)arg1 isPicked:(bool*)arg2 ;
-(bool)_routeIsReceiver:(id)arg1 ;
-(bool)_routeIsWireless:(id)arg1 ;
-(id)pickedRouteDescription;
-(void)_scheduleSendDelegateAudioRoutesChanged;
-(void)determinePickableRoutesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_pickableRoutesChangedNotification:(id)arg1 ;
-(void)_portStatusDidChangeNotification:(id)arg1 ;
-(void)_routeDiscoveryDidEndNotification:(id)arg1 ;
-(unsigned long long)numberOfAudioRoutes;
-(bool)routeOtherThanHandsetIsAvailable;
-(bool)routeOtherThanHandsetAndSpeakerIsAvailable;
-(id)routeDescriptionAtIndex:(unsigned long long)arg1 ;
-(bool)routeRequiresPasswordAtIndex:(unsigned long long)arg1 ;
-(id)routeTypeAtIndex:(unsigned long long)arg1 ;
-(long long)indexOfRouteWithName:(id)arg1 ;
-(bool)pickRouteAtIndex:(unsigned long long)arg1 ;
-(void)restorePickedRoute;
-(id)nameOfPickedRoute;
-(bool)wirelessRouteIsPicked;
-(bool)isPickedRouteDistinctFromRoute:(id)arg1 ;
-(void)_sendFakeRouteChange;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setCategory:(id)arg1 ;
-(void).cxx_destruct;
@end
