/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/DetailView.h>

@class NSNumber, ActivityCalorieChart, NSTimer;

@interface MoveDetailView : DetailView {

	NSNumber* _activeCalories;
	NSNumber* _restingCalories;
	ActivityCalorieChart* _chart;
	NSTimer* _bmrTimer;
	NSNumber* _bmrkCalPerSecond;

}

@property (nonatomic,retain) NSNumber * bmrkCalPerSecond;              //@synthesize bmrkCalPerSecond=_bmrkCalPerSecond - In the implementation block
-(void)setActiveCalories:(int)arg1 goalCalories:(int)arg2 percent:(double)arg3 ;
-(void)setBmrkCalPerSecond:(NSNumber *)arg1 ;
-(void)setCaloriesChartData:(id)arg1 ;
-(void)setRestingCalories:(id)arg1 ;
-(void)onTick:(id)arg1 ;
-(void)_timeChangedUpdateRestingCalorieCounter:(id)arg1 ;
-(void)_createTimerAndSetRestingCaloriesIfToday;
-(void)_updateRestingAndTotalCalories;
-(NSNumber *)bmrkCalPerSecond;
-(id)initWithDate:(id)arg1 ;
-(void)dealloc;
@end

