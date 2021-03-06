/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView {

	NSString* _candidate;
	unsigned long long _index;
	UIFont* _font;
	CGSize _stringImageSize;
	BOOL _highlighted;
	id _target;
	SEL _action;
	BOOL _lastItem;
	BOOL _dontDrawRightEdge;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(unsigned long long)index;
-(id)initWithCandidate:(id)arg1 andIndex:(unsigned long long)arg2 withFontSize:(double)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(CGSize)stringImageSize;
-(void)setLastItem:(BOOL)arg1 ;
-(void)dontDrawRightEdge:(BOOL)arg1 ;
@end

