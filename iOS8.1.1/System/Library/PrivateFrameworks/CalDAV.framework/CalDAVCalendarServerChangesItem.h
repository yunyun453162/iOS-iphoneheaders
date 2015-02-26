/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {

	NSMutableSet* _changedProperties;

}

@property (nonatomic,retain) NSMutableSet * changedProperties;              //@synthesize changedProperties=_changedProperties - In the implementation block
-(NSMutableSet *)changedProperties;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setChangedProperties:(NSMutableSet *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)addChangedProperty:(id)arg1 ;
@end
