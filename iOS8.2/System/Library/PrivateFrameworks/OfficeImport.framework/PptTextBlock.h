/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {

	PptTextHeaderAtom* mTextHeader;
	NSMutableString* mText;
	PptTextBlockStylingAtom* mStyleText;
	NSMutableArray* mMetaCharacterFields;
	NSMutableArray* mBookmarks;
	NSMutableArray* mHyperlinks;
	PptTextRulerAtom* mTextRuler;

}
-(void)dealloc;
-(id)init;
-(id)text;
-(unsigned long)textIndex;
-(id)hyperlinks;
-(int)textType;
-(void)readTextBlock:(id)arg1 ;
-(PptTextRulerAtom*)textRuler;
-(int)paragraphRunCount;
-(PptParaRun*)paragraphRunAtIndex:(int)arg1 ;
-(int)characterRunCount;
-(PptCharRun*)characterRunAtIndex:(int)arg1 ;
-(id)metaCharacterFields;
-(void)readString:(id)arg1 ;
-(void)readStyles:(id)arg1 ;
-(void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1 ;
-(void)writeTextBlock:(id)arg1 ;
-(id)bookmarks;
@end

