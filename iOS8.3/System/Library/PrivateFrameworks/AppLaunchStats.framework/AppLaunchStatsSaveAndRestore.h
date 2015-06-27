/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:37:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface AppLaunchStatsSaveAndRestore : NSObject {

	BOOL allowSave;
	BOOL hasSavedData;
	NSObject*<OS_dispatch_queue> aplsSaveAndRestoreQueue;
	NSMutableArray* saveRestoreObjects;
	NSMutableDictionary* saveState;

}

@property (assign,nonatomic) BOOL allowSave; 
@property (nonatomic,readonly) BOOL hasSavedData; 
-(id)init;
-(id)getList:(id)arg1 ;
-(void)doDeepCopySavedState:(id)arg1 ;
-(void)createBasicStoreStructure;
-(id)getDict:(id)arg1 ;
-(id)getString:(id)arg1 ;
-(void)quickSaveBlackList:(id)arg1 forKey:(id)arg2 ;
-(void)quickSaveUnBlackList:(id)arg1 forKey:(id)arg2 ;
-(void)quickSaveInstallApps:(id)arg1 forKey:(id)arg2 ;
-(void)quickSaveDelayTime:(id)arg1 forKey:(id)arg2 ;
-(void)quickSaveAppStatistics:(id)arg1 forKey:(id)arg2 ;
-(void)restoreAll;
-(void)saveAll;
-(void)saveState:(id)arg1 withKey:(id)arg2 ;
-(BOOL)allowSave;
-(void)setAllowSave:(BOOL)arg1 ;
-(BOOL)hasSavedData;
-(void)addDataSource:(id)arg1 ;
@end
