/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TCFontDatabaseCacheEntry : NSObject {

	char _bold;
	char _italic;
	NSString* _name;
	int _fontClass;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int fontClass;                //@synthesize fontClass=_fontClass - In the implementation block
@property (nonatomic,readonly) char bold;                    //@synthesize bold=_bold - In the implementation block
@property (nonatomic,readonly) char italic;                  //@synthesize italic=_italic - In the implementation block
+(id)newFontDatabaseCacheEntryWithName:(id)arg1 fontClass:(int)arg2 bold:(char)arg3 italic:(char)arg4 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(char)bold;
-(char)italic;
-(id)initWithName:(id)arg1 fontClass:(int)arg2 bold:(char)arg3 italic:(char)arg4 ;
-(int)fontClass;
@end
