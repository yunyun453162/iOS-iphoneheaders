/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {

	NSString* _gradientName;
	NSString* _flatColorName;
	NSString* _startColorName;
	NSString* _endColorName;
	NSArray* _colors;
	double _middleLocation;
	double _opacity;
	bool _horizontal;
	bool _usesRGBColors;
	bool _didQueryRGBColors;

}

@property (assign,nonatomic) double opacity;                    //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) bool horizontal;                   //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,readonly) bool usesRGBColors; 
+(id)gradientWithFlatColor:(id)arg1 ;
+(id)gradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
+(id)gradientWithName:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setHorizontal:(bool)arg1 ;
-(id)initWithName:(id)arg1 ;
-(bool)horizontal;
-(CGGradientRef)CGGradient;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)initWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
-(bool)usesRGBColors;
@end

