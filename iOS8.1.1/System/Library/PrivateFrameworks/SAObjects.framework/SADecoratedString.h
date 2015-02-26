/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decoratedString;
+(id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siriui_enumeratePropertyRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)siriui_enumerateRangesOfRegionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siriui_attributedStringValueWithAttribute:(id)arg1 value:(id)arg2 forRegionsWithProperty:(id)arg3 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)regions;
-(void)setRegions:(NSArray *)arg1 ;
@end
