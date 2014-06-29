/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {

	NSNumber* _remainingPortion;

}

@property (nonatomic,retain) NSNumber * remainingPortion;              //@synthesize remainingPortion=_remainingPortion - In the implementation block
-(id)initWithAccountURL:(id)arg1 usage:(id)arg2 ;
-(void)setRemainingPortion:(id)arg1 ;
-(id)remainingPortion;
-(void)dealloc;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end
