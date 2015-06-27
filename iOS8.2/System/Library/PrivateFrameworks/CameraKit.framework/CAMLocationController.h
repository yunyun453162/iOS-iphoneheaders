/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CLLocationManagerDelegate.h>

@class CLLocation, CLLocationManager, NSMutableArray, NSString;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate> {

	char _enabled;
	char _headingEnabled;
	char __monitoringLocation;
	CLLocation* _currentLocation;
	CLLocationManager* __locationManager;
	NSMutableArray* __assetsWaitingForLocation;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHeadingEnabled,nonatomic) char headingEnabled;                          //@synthesize headingEnabled=_headingEnabled - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (getter=_isMonitoringLocation,nonatomic,readonly) char _monitoringLocation;              //@synthesize _monitoringLocation=__monitoringLocation - In the implementation block
@property (nonatomic,readonly) CLLocationManager * _locationManager;                               //@synthesize _locationManager=__locationManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _assetsWaitingForLocation;                         //@synthesize _assetsWaitingForLocation=__assetsWaitingForLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedGPSTimestampFormatter;
+(id)_sharedGPSDatestampFormatter;
+(char)usesEffectiveBundleIdentifier;
+(void)setUsesEffectiveBundleIdentifier:(char)arg1 ;
-(CLLocation *)currentLocation;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)_stopMonitoringLocationUpdates;
-(void)_updateLocationMonitoring;
-(char)_isMonitoringLocation;
-(void)_authorizeOrStartLocationManager;
-(char)isHeadingEnabled;
-(void)_startMonitoringLocationUpdates;
-(NSMutableArray *)_assetsWaitingForLocation;
-(char)_updateLocationMetadataForAsset:(id)arg1 ;
-(id)_currentLocationMetadataWithDeviceOrientation:(int)arg1 forDevice:(int)arg2 ;
-(void)_updateAssetsWaitingOnLocation;
-(char)addLocationToMetadata:(id)arg1 withOrientation:(int)arg2 device:(int)arg3 ;
-(void)addLocationToAssetWhenAvailable:(id)arg1 ;
-(CLLocationManager *)_locationManager;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setHeadingEnabled:(char)arg1 ;
@end
