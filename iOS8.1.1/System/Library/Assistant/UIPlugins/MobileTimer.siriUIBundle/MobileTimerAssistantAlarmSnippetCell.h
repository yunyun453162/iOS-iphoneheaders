/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SAAlarmObject, AlarmView;

@interface MobileTimerAssistantAlarmSnippetCell : SiriUIContentCollectionViewCell {

	SAAlarmObject* _alarm;
	AlarmView* _alarmView;

}

@property (nonatomic,retain) SAAlarmObject * alarm;              //@synthesize alarm=_alarm - In the implementation block
-(void)alarmActiveChanged:(id)arg1 ;
-(SAAlarmObject *)alarm;
-(void)setAlarm:(SAAlarmObject *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)reuseIdentifier;
@end
