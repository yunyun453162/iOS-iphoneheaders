/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <healthd/_HDDemoDataModuleDelegate.h>

@class HKQuantity, NSOperationQueue, NSArray, NSString;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate> {

	int _activity;
	HKQuantity* _speed;
	/*^block*/id _dataHandler;
	NSOperationQueue* _operationQueue;
	NSArray* _modules;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
+(char)_isSupportedActivityType:(int)arg1 ;
-(id)initWithActivity:(int)arg1 speed:(id)arg2 dataObjectHandler:(/*^block*/id)arg3 ;
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2 ;
-(void)stop;
-(HKQuantity *)speed;
-(void)start;
-(int)activityType;
@end
