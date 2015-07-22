/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;

@interface CKMessageEntryWaveformView : UIView {

	double _duration;
	NSMutableArray* _powerLevels;
	UIImageView* _waveformImageView;
	unsigned long long _maxPowerLevelsCount;
	UIImageView* _balloonImageView;
	UILabel* _timeLabel;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * powerLevels;                        //@synthesize powerLevels=_powerLevels - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                     //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) unsigned long long maxPowerLevelsCount;              //@synthesize maxPowerLevelsCount=_maxPowerLevelsCount - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                      //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                 //@synthesize timeLabel=_timeLabel - In the implementation block
+(id)waveformCurveTransform;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(NSMutableArray *)powerLevels;
-(void)setPowerLevels:(NSMutableArray *)arg1 ;
-(UIImageView *)waveformImageView;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(void)setMaxPowerLevelsCount:(unsigned long long)arg1 ;
-(UIImageView *)balloonImageView;
-(UILabel *)timeLabel;
-(void)updateWaveform;
-(unsigned long long)maxPowerLevelsCount;
@end
