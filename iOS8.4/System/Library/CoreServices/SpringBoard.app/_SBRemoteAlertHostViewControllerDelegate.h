/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol _SBRemoteAlertHostViewControllerDelegate <NSObject>
@required
-(void)remoteAlertWantsToAllowBanners:(BOOL)arg1;
-(void)remoteAlertDidTerminateWithError:(id)arg1;
-(void)remoteAlertWantsToLockUIAndDismiss;
-(void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(long long)arg1;
-(void)remoteAlertWantsWallpaperTunnelActive:(BOOL)arg1;
-(void)remoteAlertWantsToSetBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
-(void)remoteAlertWantsMenuButtonDismissal:(BOOL)arg1;
-(void)remoteAlertWantsToAllowAlertStacking:(BOOL)arg1;
-(void)remoteAlertWantstoSetDismissalAnimationStyle:(long long)arg1;
-(void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1;
-(void)remoteAlertWantsToSetIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
-(void)remoteAlertWantsToSetAutoLockDuration:(double)arg1;
-(void)remoteAlertWantsToSetStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2;
-(void)remoteAlertWantsToDismissOnUILock:(BOOL)arg1;
-(void)remoteAlertWantsToDisableFadeInAnimation:(BOOL)arg1;
-(void)remoteAlertWantstoSetSupportedInterfaceOrientationOverride:(unsigned long long)arg1;

@end
