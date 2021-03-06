/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
+(id)defaultModel;
-(id)init;
-(id)earliestNextActivityDate;
-(id)nextActivityDateByPersonID;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(void)clearAllNextActivityDates;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
@end

