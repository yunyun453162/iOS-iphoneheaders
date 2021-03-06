/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:37:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIView, TintedView;

@interface LineGraphView : UIView {

	char _showingTintedLine;
	UIImage* _lineImage;
	UIView* _tintedLineClipView;
	TintedView* _tintedLineView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowingSelectedLine:(char)arg1 ;
-(void)setGraphImageSet:(id)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(float)arg1 rightX:(float)arg2 ;
-(void)setSelectedLineImage:(id)arg1 ;
@end

