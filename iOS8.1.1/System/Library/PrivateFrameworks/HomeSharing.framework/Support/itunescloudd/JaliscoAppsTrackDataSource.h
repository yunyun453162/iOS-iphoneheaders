/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <itunescloudd/itunescloudd-Structs.h>
@class SSAccount, NSData, NSArray, NSNumber;

@interface JaliscoAppsTrackDataSource : NSObject {

	SSAccount* _account;
	NSData* _itemsResponseData;
	NSArray* _rawItems;
	NSArray* _deletedItems;
	NSNumber* _familyMemberStoreID;

}
+(id)metadataMap;
-(id)initWithItemsResponseData:(id)arg1 account:(id)arg2 familyMemberStoreID:(id)arg3 ;
-(id)insertIntoDatabase:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(BOOL)mediaKindIsSupported:(unsigned)arg1 ;
-(BOOL)_parseFlavor:(id)arg1 forRedownloadParameterForStatement:(sqlite3_stmtRef)arg2 ;
@end
