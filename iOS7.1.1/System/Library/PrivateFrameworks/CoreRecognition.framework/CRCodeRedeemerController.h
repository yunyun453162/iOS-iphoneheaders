/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <UIKit/UIViewController.h>
#import <CoreRecognition/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol CRCodeRedeemerControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSString, CaptureSessionManager, UITapGestureRecognizer, CRBoxLayer, DiagnosticHUDLayer, UIActivityIndicatorView, NSArray, NSDate, NSTimer, NSObject;

@interface CRCodeRedeemerController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {

	bool _captureMode;
	bool _showDiagnosticHUD;
	bool _configPresentCentered;
	bool _codeInverted;
	bool _didSendEndOrCancel;
	bool _didSendFindBox;
	<CRCodeRedeemerControllerDelegate>* _delegate;
	unsigned long long _captureCount;
	double _sessionTimeout;
	long long _whiteBalanceMode;
	long long _focusMode;
	long long _exposureMode;
	long long _torchMode;
	NSString* _cameraMode;
	long long _cameraPosition;
	double _configDemoSpeed;
	CaptureSessionManager* _sessionManager;
	UITapGestureRecognizer* _tapGestureRecognizer;
	CRBoxLayer* _boxLayer;
	DiagnosticHUDLayer* _diagnosticHUDLayer;
	UIActivityIndicatorView* _activityIndicator;
	NSArray* _foundPoints;
	NSString* _foundCode;
	NSDate* _sessionStarted;
	NSDate* _pointsFound;
	NSDate* _codePresented;
	unsigned long long _imagesToCapture;
	NSTimer* _boxLayerHideTimer;
	opaqueCMSampleBufferRef _lastBuffer;
	NSObject<OS_dispatch_semaphore>* _processingImage;
	NSObject<OS_dispatch_queue>* _processingQueue;

}

@property (__weak) <CRCodeRedeemerControllerDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCaptureMode) bool captureMode;                                 //@synthesize captureMode=_captureMode - In the implementation block
@property (assign) unsigned long long captureCount;                                //@synthesize captureCount=_captureCount - In the implementation block
@property (assign) double sessionTimeout;                                          //@synthesize sessionTimeout=_sessionTimeout - In the implementation block
@property (assign) long long whiteBalanceMode;                                     //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign) long long focusMode;                                            //@synthesize focusMode=_focusMode - In the implementation block
@property (assign) long long exposureMode;                                         //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign) long long torchMode;                                            //@synthesize torchMode=_torchMode - In the implementation block
@property (copy) NSString * cameraMode;                                            //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign) long long cameraPosition;                                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign) bool showDiagnosticHUD;                                         //@synthesize showDiagnosticHUD=_showDiagnosticHUD - In the implementation block
@property (assign) bool configPresentCentered;                                     //@synthesize configPresentCentered=_configPresentCentered - In the implementation block
@property (assign) double configDemoSpeed;                                         //@synthesize configDemoSpeed=_configDemoSpeed - In the implementation block
@property (retain) CaptureSessionManager * sessionManager;                         //@synthesize sessionManager=_sessionManager - In the implementation block
@property (retain) UITapGestureRecognizer * tapGestureRecognizer;                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (retain) CRBoxLayer * boxLayer;                                          //@synthesize boxLayer=_boxLayer - In the implementation block
@property (retain) DiagnosticHUDLayer * diagnosticHUDLayer;                        //@synthesize diagnosticHUDLayer=_diagnosticHUDLayer - In the implementation block
@property (retain) UIActivityIndicatorView * activityIndicator;                    //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (retain) NSArray * foundPoints;                                          //@synthesize foundPoints=_foundPoints - In the implementation block
@property (retain) NSString * foundCode;                                           //@synthesize foundCode=_foundCode - In the implementation block
@property (retain) NSDate * sessionStarted;                                        //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (retain) NSDate * pointsFound;                                           //@synthesize pointsFound=_pointsFound - In the implementation block
@property (retain) NSDate * codePresented;                                         //@synthesize codePresented=_codePresented - In the implementation block
@property (assign) bool codeInverted;                                              //@synthesize codeInverted=_codeInverted - In the implementation block
@property (assign) bool didSendEndOrCancel;                                        //@synthesize didSendEndOrCancel=_didSendEndOrCancel - In the implementation block
@property (assign) bool didSendFindBox;                                            //@synthesize didSendFindBox=_didSendFindBox - In the implementation block
@property (assign) unsigned long long imagesToCapture;                             //@synthesize imagesToCapture=_imagesToCapture - In the implementation block
@property (retain) NSTimer * boxLayerHideTimer;                                    //@synthesize boxLayerHideTimer=_boxLayerHideTimer - In the implementation block
@property (assign) opaqueCMSampleBufferRef lastBuffer;                             //@synthesize lastBuffer=_lastBuffer - In the implementation block
@property (retain) NSObject<OS_dispatch_semaphore> * processingImage;              //@synthesize processingImage=_processingImage - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * processingQueue;                  //@synthesize processingQueue=_processingQueue - In the implementation block
+(void)loadFonts;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 ;
+(unsigned long long)isCRCodeRedeemerAvailable;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(long long)exposureMode;
-(void)setExposureMode:(long long)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)cancel;
-(void).cxx_destruct;
-(void)setActivityIndicator:(id)arg1 ;
-(id)activityIndicator;
-(id)tapGestureRecognizer;
-(void)setConfigPresentCentered:(bool)arg1 ;
-(void)setConfigDemoSpeed:(double)arg1 ;
-(void)setCaptureCount:(unsigned long long)arg1 ;
-(void)setSessionTimeout:(double)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setProcessingImage:(id)arg1 ;
-(void)setLastBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setProcessingQueue:(id)arg1 ;
-(void)setSessionManager:(id)arg1 ;
-(long long)cameraPosition;
-(void)hideBoxLayer;
-(void)setBoxLayerHideTimer:(id)arg1 ;
-(bool)showDiagnosticHUD;
-(void)setDiagnosticHUDLayer:(id)arg1 ;
-(id)diagnosticHUDLayer;
-(bool)isCaptureMode;
-(void)handleTapFrom:(id)arg1 ;
-(void)setTapGestureRecognizer:(id)arg1 ;
-(void)removeLayerTree;
-(opaqueCMSampleBufferRef)lastBuffer;
-(unsigned long long)captureCount;
-(unsigned long long)imagesToCapture;
-(void)setImagesToCapture:(unsigned long long)arg1 ;
-(void)sendDidCancel;
-(void)setFoundCode:(id)arg1 ;
-(void)setSessionStarted:(id)arg1 ;
-(void)setPointsFound:(id)arg1 ;
-(void)setCodePresented:(id)arg1 ;
-(void)setCodeInverted:(bool)arg1 ;
-(void)setDidSendEndOrCancel:(bool)arg1 ;
-(void)setDidSendFindBox:(bool)arg1 ;
-(id)boxLayer;
-(void)setBoxLayer:(id)arg1 ;
-(void)captureImageFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)sessionStarted;
-(double)sessionTimeout;
-(void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)processingImage;
-(id)processingQueue;
-(void)findCodeInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)generateStringFromDate:(id)arg1 ;
-(id)foundCode;
-(id)foundPoints;
-(void)setFoundPoints:(id)arg1 ;
-(id)pointsFound;
-(void)primeBoxLayerHideTimer;
-(bool)configPresentCentered;
-(bool)codeInverted;
-(void)sendDidEndWithInfo:(id)arg1 ;
-(void)pauseBoxLayerHideTimer;
-(void)animatePresentCode;
-(id)boxLayerHideTimer;
-(double)configDemoSpeed;
-(CGRect)boxLayerPresentationFrame;
-(id)codePresented;
-(void)sendDidDisplayMessageStyle:(unsigned long long)arg1 ;
-(bool)didSendEndOrCancel;
-(bool)didSendFindBox;
-(void)sendDidFindBox;
-(void)setCaptureMode:(bool)arg1 ;
-(void)setShowDiagnosticHUD:(bool)arg1 ;
-(void)startSession;
-(void)stopSession;
-(void)setCameraMode:(id)arg1 ;
-(id)cameraMode;
-(void)toggleCamera;
-(void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned long long)arg3 duration:(double)arg4 ;
-(id)sessionManager;
@end
