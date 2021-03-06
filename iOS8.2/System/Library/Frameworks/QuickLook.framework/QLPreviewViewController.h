/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>
#import <QuickLook/QLPreviewItemInteractionDelegate.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>
#import <QuickLook/QLSwippableItemProtocol.h>

@protocol QLPreviewItemInteractionDelegate, QLPreviewItem;
@class UIView, QLDisplayBundle, NSTimer, QLProgressView, NSString, UIDocumentPasswordView, NSLayoutConstraint, QLGenericView;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLSwippableItemProtocol> {

	id<QLPreviewItemInteractionDelegate> _displayBundleDelegate;
	id<QLPreviewItem> _previewItem;
	int _index;
	SCD_Struct_QL6 _clientContext;
	int _previewMode;
	char _needsReload;
	char _swiping;
	char _shouldSwapDisplayBundles;
	UIView* _scalingView;
	UIView* _contentContainerView;
	UIView* _accessoryContainerView;
	float _aspectRatio;
	float _scaleFactor;
	float _navigationBarVerticalOffset;
	QLDisplayBundle* _displayBundle;
	QLDisplayBundle* _newDisplayBundle;
	NSTimer* _progressTimer;
	QLProgressView* _progressView;
	NSString* _loadingTextForMissingFiles;
	char _overlayHidden;
	UIDocumentPasswordView* _documentPasswordView;
	NSLayoutConstraint* _documentPasswordViewKeyboardConstraint;
	QLGenericView* _airPlayPasswordView;
	char _loadedWithPassword;
	char _visible;
	CGRect _initialFrame;

}

@property (readonly) QLDisplayBundle * displayBundle; 
@property (assign) id<QLPreviewItemInteractionDelegate> displayBundleDelegate;              //@synthesize displayBundleDelegate=_displayBundleDelegate - In the implementation block
@property (assign) int previewMode; 
@property (assign) SCD_Struct_QL7 clientContext; 
@property (readonly) int airPlayMode; 
@property (readonly) UIView * airPlayView; 
@property (readonly) UIView * snapshotView; 
@property (assign,nonatomic) char visible;                                                  //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) CGRect initialFrame;                                           //@synthesize initialFrame=_initialFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int index;                                                               //@synthesize index=_index - In the implementation block
@property (retain) id<QLPreviewItem> previewItem; 
-(id<QLPreviewItem>)previewItem;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(void)setOverlayHidden:(char)arg1 duration:(double)arg2 ;
-(void)previewItemWillLoad:(id)arg1 ;
-(void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3 ;
-(void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3 ;
-(void)viewDidUpdateForPreviewItem:(id)arg1 ;
-(void)cancelLoadIfNeeded;
-(int)airPlayMode;
-(void)beginTrackingViewUpdates;
-(void)endTrackingViewUpdates;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(void)setNavigationBarVerticalOffset:(float)arg1 ;
-(void)showContentsWasTappedForPreviewItem:(id)arg1 ;
-(id)previewItem:(id)arg1 willSendRequest:(id)arg2 ;
-(void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(id)clientProcessAlertViewForPreviewItem:(id)arg1 ;
-(void)overlayWasInteractedWithOnPreviewItem:(id)arg1 ;
-(void)_layoutViews;
-(void)_cancelScheduledShowProgressiveUI;
-(void)_prepareDisplayBundle:(id)arg1 preload:(char)arg2 withHints:(id)arg3 ;
-(void)_showProgressUI;
-(void)_refreshPreviewItem:(char)arg1 withPassword:(id)arg2 ;
-(void)refreshPreviewItem;
-(void)_updateProgressUIWithDuration:(double)arg1 ;
-(void)_hidePasswordView;
-(void)_hideProgressiveUI;
-(void)_removeDisplayBundles;
-(void)_keyboardVisibilityChanged:(id)arg1 ;
-(void)_showGenericDisplayBundleForPreviewItem:(id)arg1 ;
-(void)_scheduleShowProgressiveUI;
-(void)_swapDisplayBundles;
-(void)viewWasTappedOnPreviewItem:(id)arg1 ;
-(void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)_showPasswordView;
-(void)previewItem:(id)arg1 setAVState:(id)arg2 ;
-(void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2 ;
-(void)previewItemDidExitFullScreen:(id)arg1 ;
-(void)willStartSwiping;
-(void)didFinishSwiping;
-(void)setAspectRatio:(float)arg1 scaleFactor:(float)arg2 ;
-(QLDisplayBundle *)displayBundle;
-(UIView *)airPlayView;
-(void)preloadIfNeeded;
-(id<QLPreviewItemInteractionDelegate>)displayBundleDelegate;
-(void)setDisplayBundleDelegate:(id<QLPreviewItemInteractionDelegate>)arg1 ;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(UIView *)snapshotView;
-(void)loadView;
-(void)setVisible:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(int)index;
-(char)visible;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(void)didBeginEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)didEndEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)setIndex:(int)arg1 ;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
-(void)setClientContext:(SCD_Struct_QL7)arg1 ;
-(SCD_Struct_QL7)clientContext;
@end

