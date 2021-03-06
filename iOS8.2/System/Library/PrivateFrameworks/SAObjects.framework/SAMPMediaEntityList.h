/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAbstractItemList.h>

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList

@property (assign,nonatomic) int mediaType; 
@property (nonatomic,retain) SAMPCollection * parentCollection; 
+(id)mediaEntityList;
+(id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(SAMPCollection *)parentCollection;
-(void)setParentCollection:(SAMPCollection *)arg1 ;
@end

