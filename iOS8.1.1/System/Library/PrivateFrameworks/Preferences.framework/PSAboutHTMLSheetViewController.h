/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3 ;
-(void)dealloc;
-(void)loadView;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)donePressed;
-(void)viewDidBecomeVisible;
-(void)setHTMLContent:(id)arg1 isFragment:(BOOL)arg2 ;
@end
