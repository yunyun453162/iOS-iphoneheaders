/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding> {

	NSURL* _originCacheURL;
	int _version;

}

@property (nonatomic,copy) NSURL * originCacheURL;              //@synthesize originCacheURL=_originCacheURL - In the implementation block
@property (assign,nonatomic) int version;                       //@synthesize version=_version - In the implementation block
+(char)supportsSecureCoding;
+(char)shouldCache;
+(int)currentVersion;
+(id)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6 ;
+(int)imageSetType;
+(Class)_classForDisplayProfileType:(int)arg1 ;
+(Class)classForImageSetType:(int)arg1 ;
+(id)_archivedImageSet:(id)arg1 forDisplayProfile:(id)arg2 ;
+(id)_archiveURL:(id)arg1 ;
+(char)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2 ;
+(id)archiveName;
+(id)imageSetForType:(int)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4 ;
-(void)setOriginCacheURL:(NSURL *)arg1 ;
-(NSURL *)originCacheURL;
-(void)saveCache:(id)arg1 ;
-(char)_isSetImage:(id)arg1 equalToImage:(id)arg2 ;
@end

