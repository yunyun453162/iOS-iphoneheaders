/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@interface SagaCloudAddOperation : CloudLibraryOperation
-(unsigned)currentDatabaseRevision;
-(id)cloudAddRequestWithDatabaseID:(unsigned)arg1 ;
-(id)cloudAddRequestDescription;
-(void)processAddedItems:(id)arg1 ;
-(void)removePendingAddedItemsForPermanentlyFailedOperation;
-(BOOL)isPersistent;
-(void)main;
@end

