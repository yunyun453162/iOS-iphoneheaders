/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:43:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(void)initialize;
+(char)libraryContentsChangeForProperty:(id)arg1 ;
+(char)canonicalizeCollectionRepresentativeItemsWithWriteConnection:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)propertiesForGroupingUniqueCollections;
+(id)artworkCacheIDProperty;
+(id)collectionEntityClasses;
+(char)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned)arg3 usingConnection:(id)arg4 ;
+(char)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned)arg3 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(void)updateCloudStatus;
-(void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3 ;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkToken:(id)arg3 ;
@end

