/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@protocol BiometricKitDelegate;
@class BiometricKitXPCClient, BiometricKitStatistics, UIImage;

@interface BiometricKit : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	int _enrollingMode;
	int _matchingMode;
	BiometricKitStatistics* _statistics;
	UIImage* _scanbedImage;
	UIImage* _fauxprintImage;
	CGRect _nodeRect[50];
	UIImage* _images[50];
	SCD_Struct_Bi4* _compSet;
	int _rejectTouchCount;
	bool _rejectTouch;
	bool _showDebugImages;
	bool _enableLogger;
	SCD_Struct_Bi6 _enrollImageSet;
	bool _isInternalInstall;
	bool _inUse;
	int _enrollProgressConfigRenderMode;
	int _renderMode;
	float _opacity;
	<BiometricKitDelegate>* _delegate;
	CGSize _enrollProgressConfigRenderViewSize;

}

@property (assign,nonatomic) <BiometricKitDelegate> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) bool inUse;                                                       //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) int enrollProgressConfigRenderMode;                     //@synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode - In the implementation block
@property (assign,nonatomic) CGSize enrollProgressConfigRenderViewSize;              //@synthesize enrollProgressConfigRenderViewSize=_enrollProgressConfigRenderViewSize - In the implementation block
@property (assign,nonatomic) int renderMode;                                         //@synthesize renderMode=_renderMode - In the implementation block
@property (assign,nonatomic) float opacity;                                          //@synthesize opacity=_opacity - In the implementation block
+(id)allocWithZone:(NSZone)arg1 ;
+(id)preferencesGetStringValue:(const CFStringRef)arg1 ;
+(bool)preferencesGetBOOLValue:(const CFStringRef)arg1 ;
+(double)getModulationRatio;
+(id)stringForProvisioningState:(int)arg1 ;
+(long long)getSensorPatchVersion;
+(id)getLogsForProcess:(id)arg1 ;
+(void)preferencesSetBOOLValue:(bool)arg1 forKey:(const CFStringRef)arg2 ;
+(id)manager;
-(void)statusMessage:(unsigned)arg1 ;
-(int)renderMode;
-(void)setRenderMode:(int)arg1 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)copyWithZone:(NSZone)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)cancel;
-(void)appWillResignActive:(id)arg1 ;
-(void)appDidBecomeActive:(id)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)matchResult:(id)arg1 withDictionary:(id)arg2 ;
-(void)homeButtonPressed;
-(void)logSensorStatus:(id)arg1 ;
-(void)logHomeButtonState:(bool)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)templateUpdate:(id)arg1 withDictionary:(id)arg2 ;
-(int)enroll:(int)arg1 withAuthToken:(id)arg2 ;
-(int)match:(id)arg1 withOptions:(id)arg2 ;
-(int)matchIdentities:(id)arg1 ;
-(id)getIdentityFromUUID:(id)arg1 ;
-(int)resetEngine;
-(int)preventAutonomousMatchingMode:(bool)arg1 ;
-(long long)getProvisioningState;
-(int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(int)registerStoreToken:(id)arg1 ;
-(int)getCountersignedStoreToken:(id*)arg1 ;
-(long long)getCalBlobVersion;
-(long long)getSensorCalibrationStatus;
-(long long)getCalibrationDataState;
-(id)pullCaptureBuffer;
-(void)setDebugImages:(bool)arg1 ;
-(int)enroll:(int)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)updateEnableLogger;
-(id)imageFromRawImageData:(SCD_Struct_Bi9*)arg1 ;
-(id)imageFromBitmapData:(id)arg1 inRect:(CGRect)arg2 ;
-(void)pullDebugImageData:(bool)arg1 target:(SCD_Struct_Bi9*)arg2 ;
-(id)createMatchInfo:(id)arg1 withTopology:(const SCD_Struct_Bi13*)arg2 withMatchImage:(SCD_Struct_Bi9*)arg3 ;
-(void)enrollProgressMessage:(unsigned)arg1 ;
-(id)imageWithImage:(id)arg1 inRect:(CGRect)arg2 ;
-(id)identityImage:(id)arg1 ;
-(id)imageWithImage:(id)arg1 withNode:(id)arg2 withRect:(CGRect)arg3 alpha:(float)arg4 ;
-(id)compositeTopologyImage:(SCD_Struct_Bi0*)arg1 ;
-(id)imageTopology:(SCD_Struct_Bi0*)arg1 forGroup:(unsigned short)arg2 ;
-(id)imageFauxprint:(CGRect)arg1 withTheta:(const SCD_Struct_Bi15*)arg2 withLamda:(float)arg3 ;
-(id)imageWithImage:(id)arg1 withTintColor:(id)arg2 ;
-(id)getMatchPolicyInfo;
-(id)getTemplateInfo:(id)arg1 ;
-(id)pullDebugImage:(bool)arg1 ;
-(id)getLoggerAttachmentsForRadar:(bool)arg1 ;
-(id)stringFromSensorConfiguration;
-(int)matchIdentity:(id)arg1 ;
-(id)topologyImage:(id)arg1 ;
-(id)imageWithImage:(id)arg1 withMaskImage:(id)arg2 ;
-(int)enrollProgressConfigRenderMode;
-(void)setEnrollProgressConfigRenderMode:(int)arg1 ;
-(CGSize)enrollProgressConfigRenderViewSize;
-(void)setEnrollProgressConfigRenderViewSize:(CGSize)arg1 ;
-(int)match:(id)arg1 ;
-(void)setInUse:(bool)arg1 ;
-(bool)inUse;
-(id)identities:(id)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 ;
-(int)removeIdentity:(id)arg1 ;
-(int)updateIdentity:(id)arg1 ;
@end
