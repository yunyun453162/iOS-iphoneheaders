/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {

	CGPoint _startLocation;
	double _startTime;
	UITouch* _trackingTouch;
	long long _swipeDirection;

}

@property (nonatomic,readonly) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(long long)swipeDirection;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
@end
