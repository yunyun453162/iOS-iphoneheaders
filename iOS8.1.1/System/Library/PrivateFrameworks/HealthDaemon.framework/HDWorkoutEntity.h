/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDWorkoutEntity : HDSampleEntity
+(void)load;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(id)_databaseTable;
+(id)_columnsSQL;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)_tableValuesFromDataObject:(id)arg1 ;
+(void)applyRelatedPropertiesToObject:(id)arg1 entity:(id)arg2 properties:(id)arg3 values:(id*)arg4 authorizationFilter:(/*^block*/id)arg5 healthDaemon:(id)arg6 ;
+(BOOL)associateSamples:(id)arg1 toWorkout:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteAssociatedEntitiesInDatabase:(id)arg1 error:(id*)arg2 ;
@end
