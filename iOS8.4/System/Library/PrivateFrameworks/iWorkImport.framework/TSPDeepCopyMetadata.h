/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSDictionary;

@interface TSPDeepCopyMetadata : TSPObject {

	long long _rootObjectIdentifier;
	unsigned long long _version;
	NSDictionary* _objectUUIDToIdentifierDictionary;
	NSDictionary* _cachedDataMap;

}

@property (nonatomic,readonly) long long rootObjectIdentifier;                               //@synthesize rootObjectIdentifier=_rootObjectIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectUUIDToIdentifierDictionary;              //@synthesize objectUUIDToIdentifierDictionary=_objectUUIDToIdentifierDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedDataMap;                                 //@synthesize cachedDataMap=_cachedDataMap - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(NSDictionary *)objectUUIDToIdentifierDictionary;
-(long long)rootObjectIdentifier;
-(id)initWithRootObject:(id)arg1 version:(unsigned long long)arg2 objectUUIDToIdentifierDictionary:(id)arg3 cachedDataMap:(id)arg4 ;
-(NSDictionary *)cachedDataMap;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)version;
@end
