/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, UIView;

@interface PLPhotoPostCommentCell : UITableViewCell {

	UILabel* _contentLabel;
	UIButton* _addCommentButton;
	UIView* _styledSeparatorView;

}

@property (nonatomic,readonly) UIButton * addCommentButton;               //@synthesize addCommentButton=_addCommentButton - In the implementation block
@property (nonatomic,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
@property (nonatomic,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(double)heightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)addCommentButton;
-(void)setupContent;
-(id)styledSeparatorView;
-(id)contentLabel;
@end

