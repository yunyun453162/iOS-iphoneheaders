/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocs/BRQueryItem.h>

@class BRCItemID, NSSet, NSMutableSet, BRCLocalContainer, NSString, NSNumber, NSURL;

@interface BRCNotification : BRQueryItem {

	BRCItemID* _itemID;
	BRCItemID* _parentID;
	unsigned long long _oldParentFileID;
	unsigned long long _parentFileID;
	NSSet* _parentIDs;
	NSMutableSet* _containerIDsWithReverseAliases;
	BRCLocalContainer* _container;
	NSString* _aliasContainerID;

}

@property (nonatomic,readonly) BRCLocalContainer * container;                            //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * aliasContainerID;                              //@synthesize aliasContainerID=_aliasContainerID - In the implementation block
@property (nonatomic,readonly) BRCItemID * itemID;                                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCItemID * parentID;                                     //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) unsigned long long oldParentFileID;                       //@synthesize oldParentFileID=_oldParentFileID - In the implementation block
@property (nonatomic,readonly) unsigned long long parentFileID;                          //@synthesize parentFileID=_parentFileID - In the implementation block
@property (nonatomic,readonly) NSNumber * oldParentFileObjectID; 
@property (nonatomic,readonly) NSNumber * parentFileObjectID; 
@property (nonatomic,retain) NSSet * parentIDs;                                          //@synthesize parentIDs=_parentIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * containerIDsWithReverseAliases;              //@synthesize containerIDsWithReverseAliases=_containerIDsWithReverseAliases - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(BOOL)supportsSecureCoding;
+(id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BRCLocalContainer *)container;
-(id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2 updateDiffs:(unsigned short)arg3 ;
-(unsigned long long)parentFileID;
-(BRCItemID *)itemID;
-(BRCItemID *)parentID;
-(void)_setupFileIDsWithLocalItem:(id)arg1 ;
-(void)_setupWithNonAliasItem:(id)arg1 diffs:(unsigned long long)arg2 ;
-(void)merge:(id)arg1 ;
-(NSNumber *)oldParentFileObjectID;
-(NSNumber *)parentFileObjectID;
-(id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2 ;
-(BOOL)canMerge:(id)arg1 ;
-(void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(unsigned long long)oldParentFileID;
-(NSSet *)parentIDs;
-(void)setParentIDs:(NSSet *)arg1 ;
-(NSMutableSet *)containerIDsWithReverseAliases;
-(void)setContainerIDsWithReverseAliases:(NSMutableSet *)arg1 ;
-(NSString *)aliasContainerID;
@end
