/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {

	NSString* _buildVersion;
	NSMutableDictionary* _refreshingWaiters;
	NSMutableDictionary* _failedWaiters;
	NSMutableDictionary* _restrictedWaiters;

}

@property (nonatomic,retain) NSString * buildVersion;                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshingWaiters;              //@synthesize refreshingWaiters=_refreshingWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * failedWaiters;                  //@synthesize failedWaiters=_failedWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restrictedWaiters;              //@synthesize restrictedWaiters=_restrictedWaiters - In the implementation block
+(id)sharedBabysitter;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSString *)buildVersion;
-(void)giveAccountWithIDAnotherChance:(id)arg1 ;
-(char)accountWithIDShouldContinue:(id)arg1 ;
-(void)_reloadBabysitterProperties;
-(void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2 ;
-(char)accountShouldContinue:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(char)registerAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(NSMutableDictionary *)refreshingWaiters;
-(void)setRefreshingWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)failedWaiters;
-(void)setFailedWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)restrictedWaiters;
-(void)setRestrictedWaiters:(NSMutableDictionary *)arg1 ;
@end
