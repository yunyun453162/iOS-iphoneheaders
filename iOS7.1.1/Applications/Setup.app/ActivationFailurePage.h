/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>

@class UILabel, UITableViewCell;

@interface ActivationFailurePage : BuddyTableViewController {

	id _delegate;
	UILabel* _label;
	UITableViewCell* _tryAgainCell;
	UITableViewCell* _wifiCell;
	BOOL _isOTA;

}
-(id)initWithConnectionFailed:(BOOL)arg1 isOTA:(BOOL)arg2 ;
-(float)_tableHeight;
-(id)_wifiCell;
-(id)_tryAgainCell;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end
