/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/ChatKitAssistantUI.siriUIBundle/ChatKitAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKitAssistantUI/ChatKitAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, CKTextBalloonView, CKGradientReferenceView;

@interface CKMessageSnippetContentView : UIView {

	UILabel* _toLabel;
	CKTextBalloonView* _balloonImageView;
	CKGradientReferenceView* _gradientRefView;
	int _balloonType;

}
-(void)setBalloonType:(int)arg1 ;
-(void)setToField:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMessageBody:(id)arg1 ;
@end
