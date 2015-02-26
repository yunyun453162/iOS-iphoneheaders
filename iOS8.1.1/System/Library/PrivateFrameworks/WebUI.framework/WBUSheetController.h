/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIAlertController, WebUIAlert, NSMutableArray, UITableView, NSString;

@interface WBUSheetController : NSObject <UITableViewDelegate, UITableViewDataSource> {

	UIAlertController* _alertController;
	WebUIAlert* _alert;
	NSMutableArray* _alertInvocationQueue;
	UITableView* _tableView;
	id _delegate;
	BOOL _isDismissed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_alertDidDismissWithAction:(int)arg1 ;
-(void)showSheetForAlert:(id)arg1 ;
-(void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3 ;
-(void)showSheetForAlert:(id)arg1 inView:(id)arg2 ;
-(void)hideSheet;
@end
