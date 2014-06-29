/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSString, NSArray;

@interface SUSimpleMenuViewController : SUMenuViewController {

	NSString* _cancelButtonTitle;
	NSArray* _titles;

}

@property (nonatomic,copy) NSArray * titles;                          //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(void)dealloc;
-(void)setTitles:(id)arg1 ;
-(id)titles;
-(void)setCancelButtonTitle:(id)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(void)reloadContentSizeForViewInPopover;
-(long long)numberOfMenuItems;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(bool)isMenuItemEnabledAtIndex:(long long)arg1 ;
-(id)initWithTitles:(id)arg1 ;
-(id)cancelButtonTitle;
@end
