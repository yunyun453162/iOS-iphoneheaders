/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:52:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TKPickerItem : NSObject {

	int _section;

}

@property (assign,nonatomic) int section;              //@synthesize section=_section - In the implementation block
-(id)description;
-(int)section;
-(void)_setSection:(int)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(int)arg2 toString:(id)arg3 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(char)arg2 toString:(id)arg3 ;
@end
