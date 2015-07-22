/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBSearchParsecSimpleChevronCell.h>

@interface SBSearchParsecSimpleMultiIconsCell : SBSearchParsecSimpleChevronCell {

	long long _iconCount;

}

@property (assign) long long iconCount;              //@synthesize iconCount=_iconCount - In the implementation block
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
+(id)keyPathsForValuesAffectingImageWidth;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(double)iconWidth;
-(long long)iconCount;
-(double)iconInterspace;
-(void)setIconCount:(long long)arg1 ;
-(double)imageWidth;
@end
