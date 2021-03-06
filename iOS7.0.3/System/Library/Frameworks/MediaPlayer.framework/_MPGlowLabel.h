/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor;

@interface _MPGlowLabel : UILabel {

	UIColor* _glowColor;
	float _glowRadius;

}

@property (nonatomic,retain) UIColor * glowColor;              //@synthesize glowColor=_glowColor - In the implementation block
@property (assign,nonatomic) float glowRadius;                 //@synthesize glowRadius=_glowRadius - In the implementation block
-(void)setGlowColor:(id)arg1 ;
-(void)setGlowRadius:(float)arg1 ;
-(id)glowColor;
-(float)glowRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void).cxx_destruct;
@end

