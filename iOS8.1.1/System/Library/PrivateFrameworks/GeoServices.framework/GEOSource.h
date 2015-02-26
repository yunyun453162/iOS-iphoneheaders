/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOSource : PBCodable <NSCopying> {

	NSString* _sourceId;
	NSString* _sourceName;
	NSString* _sourceVersion;

}

@property (nonatomic,retain) NSString * sourceName;                 //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,retain) NSString * sourceId;                   //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) NSString * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
-(id)initWithAttributionID:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
-(NSString *)sourceId;
-(void)setSourceName:(NSString *)arg1 ;
-(BOOL)hasSourceVersion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceName;
@end
