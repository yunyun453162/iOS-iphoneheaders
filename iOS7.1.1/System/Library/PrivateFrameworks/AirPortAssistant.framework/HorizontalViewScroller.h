/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView;

@interface HorizontalViewScroller : UIScrollView <UIScrollViewDelegate> {

	UIView* view;
	unsigned long long index;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) unsigned long long index; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id)view;
-(void)setView:(id)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)displayView:(id)arg1 ;
-(void)setMaxMinZoomScalesForCurrentBounds;
-(CGPoint)maximumContentOffset;
-(CGPoint)minimumContentOffset;
-(void)displayImage:(id)arg1 ;
-(CGPoint)pointToCenterAfterRotation;
-(double)scaleToRestoreAfterRotation;
-(void)restoreCenterPoint:(CGPoint)arg1 scale:(double)arg2 ;
@end

