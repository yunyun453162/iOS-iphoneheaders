/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UITextView.h>

@class GKTextStyle, GKLabel, NSString;

@interface GKTextView : UITextView {

	GKTextStyle* __baseStyle;
	GKTextStyle* _appliedStyle;
	GKLabel* _placeholderLabel;

}

@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) GKTextStyle * _baseStyle;                //@synthesize _baseStyle=__baseStyle - In the implementation block
@property (nonatomic,retain) GKTextStyle * appliedStyle;              //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) GKLabel * placeholderLabel;              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
+(void)initialize;
-(void)_UIAppearance_set_baseStyle:(id)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)set_baseStyle:(id)arg1 ;
-(id)placeholderLabel;
-(void)updatePlaceholderVisibility;
-(void)replayAndApplyStyle;
-(void)setPlaceholderLabel:(id)arg1 ;
-(void)_gkTextViewDidChange;
-(id)_baseStyle;
-(id)appliedStyle;
-(void)setAppliedStyle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2 ;
-(id)placeholderText;
-(void)setPlaceholderText:(id)arg1 ;
@end

