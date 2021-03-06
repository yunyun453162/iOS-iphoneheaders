/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionId;
	NSString* _sourceAppBundleId;
	NSString* _uriScheme;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionId;                  //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId;              //@synthesize sourceAppBundleId=_sourceAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme;                      //@synthesize uriScheme=_uriScheme - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionId;
-(BOOL)hasSessionId;
-(void)setSessionId:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(void)setUriScheme:(NSString *)arg1 ;
-(BOOL)hasSourceAppBundleId;
-(BOOL)hasUriScheme;
-(NSString *)sourceAppBundleId;
-(NSString *)uriScheme;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

