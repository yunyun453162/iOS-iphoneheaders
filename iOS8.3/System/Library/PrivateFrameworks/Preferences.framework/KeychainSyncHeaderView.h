/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	char _usesCompactLayout;

}

@property (assign,nonatomic) char usesCompactLayout;              //@synthesize usesCompactLayout=_usesCompactLayout - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)setUsesCompactLayout:(char)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(char)usesCompactLayout;
@end

