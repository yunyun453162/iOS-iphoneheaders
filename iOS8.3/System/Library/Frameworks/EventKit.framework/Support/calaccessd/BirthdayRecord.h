/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BirthdayRecord : NSObject {

	NSMutableDictionary* _record;
	char _isEmpty;

}

@property (nonatomic,readonly) char isEmpty;              //@synthesize isEmpty=_isEmpty - In the implementation block
-(char)doesPerson:(void*)arg1 haveBirthday:(id)arg2 ;
-(void)recordBirthday:(id)arg1 forPerson:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isEmpty;
@end
