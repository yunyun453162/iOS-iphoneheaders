/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@class NSString;

@interface TSWPTOCLayoutHint : NSObject <TSDHint> {

	NSRange _charRange;

}

@property (nonatomic,readonly) NSRange charRange;                   //@synthesize charRange=_charRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(void)saveToArchive:(TOCLayoutHintArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TOCLayoutHintArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)overlapsWithSelection:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(BOOL)isFirstHint;
-(NSRange)charRange;
-(id)initWithRange:(NSRange)arg1 ;
@end
