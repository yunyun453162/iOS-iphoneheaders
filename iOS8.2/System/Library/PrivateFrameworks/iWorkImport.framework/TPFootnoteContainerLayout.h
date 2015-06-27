/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPFootnoteMarkProvider.h>

@protocol TSWPFootnoteMarkProvider;
@class TSWPPadding, NSString;

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider> {

	float _width;
	float _maxFootnoteHeight;
	float _footnoteSpacing;
	char _includeFootnoteSeparatorLine;
	id<TSWPFootnoteMarkProvider> _footnoteMarkProvider;

}

@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) float height; 
@property (assign,nonatomic) char includeFootnoteSeparatorLine;                //@synthesize includeFootnoteSeparatorLine=_includeFootnoteSeparatorLine - In the implementation block
@property (nonatomic,readonly) CGRect footnoteSeparatorLineFrame; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned columnCount; 
@property (nonatomic,readonly) char alwaysStartsNewTarget; 
@property (nonatomic,readonly) char shrinkTextToFit; 
@property (nonatomic,readonly) char columnsAreLeftToRight; 
@property (nonatomic,readonly) float textScaleFactor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(char)shouldProvideSizingGuides;
-(char)textIsVertical;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(float)widthForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)gapForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)positionForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5 ;
-(char)alwaysStartsNewTarget;
-(char)shrinkTextToFit;
-(char)columnsAreLeftToRight;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(float)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(id)markStringForFootnoteReferenceStorage:(id)arg1 ;
-(void)trimFootnoteLayoutsFromIndex:(unsigned)arg1 ;
-(void)setIncludeFootnoteSeparatorLine:(char)arg1 ;
-(void)setFootnoteSpacing:(int)arg1 ;
-(void)removeAllFootnoteLayouts;
-(id)initWithFootnoteMarkProvider:(id)arg1 width:(float)arg2 maxFootnoteHeight:(float)arg3 footnoteSpacing:(float)arg4 ;
-(void)removeFootnoteLayout:(id)arg1 ;
-(void)addFootnoteLayout:(id)arg1 ;
-(void)removeFootnoteLayoutWithInfo:(id)arg1 ;
-(CGRect)footnoteSeparatorLineFrame;
-(char)includeFootnoteSeparatorLine;
-(void)validate;
-(char)isEmpty;
-(TSWPPadding *)layoutMargins;
-(float)height;
-(void)setWidth:(float)arg1 ;
-(unsigned)columnCount;
@end
