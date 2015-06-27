/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject {

	PQLConnection* _db;
	NSString* _identifier;
	CKDClientContext* _context;
	double _expirationTimeout;

}

@property (assign,nonatomic) double expirationTimeout;                       //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
@property (nonatomic,retain) PQLConnection * db;                             //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(CKDClientContext *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(PQLConnection *)db;
-(void)setExpirationTimeout:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(char)setupCacheWithError:(id*)arg1 ;
-(id)dbPath;
-(void)_garbageCollectExpiredEntries;
-(double)expirationTimeout;
-(long)expirationTimeoutAsTime;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(void)setDb:(PQLConnection *)arg1 ;
@end
