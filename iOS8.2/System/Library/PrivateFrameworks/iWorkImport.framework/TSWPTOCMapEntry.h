/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject {

	char _showInTOC;
	TSWPTOCEntryStyle* _tocEntryStyle;

}

@property (nonatomic,retain) TSWPTOCEntryStyle * tocEntryStyle;              //@synthesize tocEntryStyle=_tocEntryStyle - In the implementation block
@property (assign,nonatomic) char showInTOC;                                 //@synthesize showInTOC=_showInTOC - In the implementation block
-(id)initWithTOCEntryStyle:(id)arg1 showInTOC:(char)arg2 ;
-(TSWPTOCEntryStyle *)tocEntryStyle;
-(void)setTocEntryStyle:(TSWPTOCEntryStyle *)arg1 ;
-(char)showInTOC;
-(void)setShowInTOC:(char)arg1 ;
@end

