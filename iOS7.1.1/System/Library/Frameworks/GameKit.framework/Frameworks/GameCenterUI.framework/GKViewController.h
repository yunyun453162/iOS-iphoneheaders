/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class GKColorPalette;

@interface GKViewController : UIViewController {

	bool _shouldUpdateContentOnlyWhenAuthenticated;
	GKViewController* _rootViewController;
	GKColorPalette* _colorPalette;
	long long _gkFocusBubbleType;

}

@property (nonatomic,retain) GKColorPalette * colorPalette;                              //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) bool shouldUpdateContentOnlyWhenAuthenticated;              //@synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated - In the implementation block
@property (nonatomic,retain) GKViewController * rootViewController;                      //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) long long gkFocusBubbleType;                                //@synthesize gkFocusBubbleType=_gkFocusBubbleType - In the implementation block
-(long long)lastKnownOrientation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(long long)gkFocusBubbleType;
-(void)setGkFocusBubbleType:(long long)arg1 ;
-(bool)shouldUpdateContentOnlyWhenAuthenticated;
-(bool)displayUsingSplitNavigationBar;
-(void)pushFullScreenViewController:(id)arg1 animated:(bool)arg2 ;
-(void)setShouldUpdateContentOnlyWhenAuthenticated:(bool)arg1 ;
-(void)dealloc;
-(void)setRootViewController:(id)arg1 ;
-(id)rootViewController;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)popToRootViewControllerAnimated:(bool)arg1 ;
-(void)setColorPalette:(id)arg1 ;
-(id)colorPalette;
@end
