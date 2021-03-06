/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCacheInternal;

@interface NSURLCache : NSObject {

	NSURLCacheInternal* _internal;

}

@property (assign) unsigned long long memoryCapacity; 
@property (assign) unsigned long long diskCapacity; 
@property (readonly) unsigned long long currentMemoryUsage; 
@property (readonly) unsigned long long currentDiskUsage; 
+(void)setSharedURLCache:(id)arg1 ;
+(id)sharedURLCache;
-(void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2 ;
-(void)getCachedResponseForDataTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCachedResponseForDataTask:(id)arg1 ;
-(unsigned long long)currentDiskUsage;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(unsigned long long)memoryCapacity;
-(unsigned long long)diskCapacity;
-(unsigned long long)currentMemoryUsage;
-(id)_initWithExistingCFURLCache:(CFURLCache*)arg1 ;
-(id)_diskCacheDefaultPath;
-(id)_cacheDirectory;
-(CFCachedURLResponse*)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)arg1 ;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponse*)arg1 forRequest:(CFURLRequestRef)arg2 ;
-(long long)_nscfBridgeURLCacheDiskCapacity;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1 ;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1 ;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1 ;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(long long)_nscfBridgeURLCacheMemoryCapacity;
-(long long)_nscfBridgeURLCacheCurrentMemoryUsage;
-(long long)_nscfBridgeURLCacheCurrentDiskUsage;
-(id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(BOOL)arg4 ;
-(id)initWithExistingSharedCFURLCache:(CFURLCache*)arg1 ;
-(id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)removeCachedResponsesSinceDate:(id)arg1 ;
-(CFURLCache*)_CFURLCache;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeAllCachedResponses;
@end

