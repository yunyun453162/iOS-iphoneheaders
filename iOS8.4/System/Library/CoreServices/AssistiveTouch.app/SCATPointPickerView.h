/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, _UIBackdropView, NSString;

@interface SCATPointPickerView : UIView {

	UILabel* _promptLabel;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,copy) NSString * prompt; 
-(void)_updatePromptBackdropViewMask;
-(void)layoutSubviews;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
@end
