/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PFUBLogEventID : NSObject {

	NSString* _idString;
	long long _hash;
	long long _eventType;

}

@property (nonatomic,readonly) NSString * idString;              //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) long long hash;                   //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
+(void)initialize;
-(id)initWithEventType:(int)arg1 ;
-(id)initWithCustomKey:(id)arg1 ;
-(NSString *)idString;
-(long long)eventType;
-(long long)hash;
@end

