/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject {

	MPQueueFeeder* _feeder;
	unsigned _currentItemIndex;
	double _currentTime;
	int _feederMode;

}

@property (nonatomic,retain) MPQueueFeeder * feeder;                 //@synthesize feeder=_feeder - In the implementation block
@property (assign,nonatomic) unsigned currentItemIndex;              //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic) double currentTime;                     //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) int feederMode;                         //@synthesize feederMode=_feederMode - In the implementation block
-(MPQueueFeeder *)feeder;
-(void)setFeeder:(MPQueueFeeder *)arg1 ;
-(void)setFeederMode:(int)arg1 ;
-(int)feederMode;
-(id)initWithStateOfAVController:(id)arg1 ;
-(unsigned)currentItemIndex;
-(void)setCurrentItemIndex:(unsigned)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id)description;
-(double)currentTime;
@end
