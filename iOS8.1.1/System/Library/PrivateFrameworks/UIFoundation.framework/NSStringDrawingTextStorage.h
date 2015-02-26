/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>

@class NSConcreteNotifyingMutableAttributedString, NSLayoutManager, NSTextContainer, CUICatalog, CUIStyleEffectConfiguration, NSString;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

	NSConcreteNotifyingMutableAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	double _baselineDelta;
	struct {
		unsigned _typesetterBehavior : 4;
		unsigned _needToFlushCache : 1;
		unsigned _baselineMode : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 24;
	}  _sdflags;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;
	double _defaultTighteningFactor;

}

@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) BOOL usesSimpleTextEffects; 
@property (assign) double defaultTighteningFactor;                                                                                    //@synthesize defaultTighteningFactor=_defaultTighteningFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(void)_setHasCustomSettings:(BOOL)arg1 ;
+(BOOL)_hasCustomSettings;
+(id)stringDrawingTextStorage;
-(id)init;
-(unsigned long long)length;
-(id)string;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)layoutManager;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)textContainer;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)processEditing;
-(oneway void)release;
-(CUICatalog *)cuiCatalog;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(BOOL)_isStringDrawingTextStorage;
-(long long)typesetterBehavior;
-(void)_setBaselineDelta:(double)arg1 ;
-(BOOL)_baselineMode;
-(BOOL)_forceWordWrapping;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(double)defaultTighteningFactor;
-(void)setDefaultTighteningFactor:(double)arg1 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(id)textContainerForAttributedString:(id)arg1 containerSize:(CGSize)arg2 lineFragmentPadding:(double)arg3 ;
-(void)_setBaselineMode:(BOOL)arg1 ;
-(void)drawTextContainer:(id)arg1 withRect:(CGRect)arg2 graphicsContext:(CGContextRef)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(double)arg6 ;
-(double)_baselineDelta;
-(CGPoint)defaultTextContainerOriginForRect:(CGRect)arg1 ;
-(id)textContainerForAttributedString:(id)arg1 ;
-(void)fontSetChanged;
@end
