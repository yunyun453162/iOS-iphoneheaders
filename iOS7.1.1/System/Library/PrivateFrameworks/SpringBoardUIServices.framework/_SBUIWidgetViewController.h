/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoardUIServices/_SBUIWidgetHost.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController_Remote_IPC.h>

@protocol _SBUIWidgetHost;
@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost, _SBUIWidgetViewController_Remote_IPC> {

	long long _widgetIdiom;
	NSString* _widgetidentifier;
	<_SBUIWidgetHost>* _widgetHost;
	NSString* _widgetIdentifier;

}

@property (assign,nonatomic) <_SBUIWidgetHost> * widgetHost;              //@synthesize widgetHost=_widgetHost - In the implementation block
@property (nonatomic,copy) NSString * widgetIdentifier;                   //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic) long long widgetIdiom;                       //@synthesize widgetIdiom=_widgetIdiom - In the implementation block
@property (nonatomic,readonly) CGSize preferredViewSize; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(void)__setWidgetIdentifier:(id)arg1 ;
-(void)__setWidgetIdiom:(long long)arg1 ;
-(void)__requestPreferredViewSizeWithReplyHandler:(/*^block*/ id)arg1 ;
-(void)__hostWillPresent;
-(void)__hostDidPresent;
-(void)__hostWillDismiss;
-(void)__hostDidDismiss;
-(CGSize)preferredViewSize;
-(void)setWidgetIdentifier:(id)arg1 ;
-(void)setWidgetIdiom:(long long)arg1 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(void)requestPresentationOfViewController:(id)arg1 presentationStyle:(long long)arg2 context:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(id)widgetHost;
-(long long)widgetIdiom;
-(id)widgetIdentifier;
-(void)setWidgetHost:(id)arg1 ;
@end

