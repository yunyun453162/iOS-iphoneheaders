/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {

	NSDictionary* _dictionary;

}
-(id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4 ;
-(id)initWithNormalizedDictionary:(id)arg1 ;
-(BOOL)isEqualToFeatureSetting:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)type;
-(id)value;
-(id)selector;
-(id)tag;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
@end
