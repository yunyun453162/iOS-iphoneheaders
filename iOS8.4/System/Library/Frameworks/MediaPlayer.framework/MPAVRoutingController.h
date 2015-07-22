/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate;
@class NSArray, MPAVRoute, NSMutableArray, NSString;

@interface MPAVRoutingController : NSObject {

	NSArray* _cachedRoutes;
	MPAVRoute* _cachedPickedRoute;
	NSMutableArray* _asyncFetchingCompletionHandlers;
	BOOL _asyncFetchingRoutes;
	long long _externalScreenType;
	BOOL _hasExternalScreenType;
	BOOL _scheduledSendDelegateRoutesChanged;
	BOOL _pickedRouteHasVolumeControl;
	BOOL _hasVolumeControlInfoForPickedRoute;
	int _deviceAvailabilityNotifyToken;
	BOOL _deviceAvailabilityOverrideState;
	id<MPAVRoutingControllerDelegate> _delegate;
	NSString* _name;
	long long _discoveryMode;
	NSString* _category;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                        //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) long long externalScreenType; 
@property (nonatomic,copy,readonly) NSArray * availableRoutes; 
@property (nonatomic,copy) NSString * category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) MPAVRoute * pickedRoute; 
@property (nonatomic,readonly) BOOL volumeControlIsAvailable; 
-(BOOL)pickBestDeviceRoute;
-(BOOL)volumeControlIsAvailable;
-(void)clearCachedRoutes;
-(long long)externalScreenType;
-(BOOL)airtunesRouteIsPicked;
-(BOOL)wirelessDisplayRouteIsPicked;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(BOOL)routeOtherThanHandsetAvailable;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)_setExternalScreenType:(long long)arg1 ;
-(void)_updateCachedRoutes;
-(id)_parseAVRouteDescriptions:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(id)videoRouteForRoute:(id)arg1 ;
-(BOOL)pickHandsetRoute;
-(BOOL)pickSpeakerRoute;
-(BOOL)speakerRouteIsPicked;
-(BOOL)handsetRouteIsPicked;
-(BOOL)receiverRouteIsPicked;
-(BOOL)wirelessDisplayRoutesAvailable;
-(void)logCurrentRoutes;
-(long long)discoveryMode;
-(NSArray *)availableRoutes;
-(MPAVRoute *)pickedRoute;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MPAVRoutingControllerDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<MPAVRoutingControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)initWithName:(id)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
@end
