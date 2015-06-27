/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor;

@interface PKPassColorProfile : NSObject {

	float _backgroundLightness;
	float _foregroundLightness;
	float _labelLightness;
	PKPassColorProfile* _stripProfile;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _labelColor;
	UIColor* _highlightColor;
	float _overlayDarkeningAlpha;
	float _regularDarkeningAlpha;
	float _overlayLighteningAlpha;
	float _regularLighteningAlpha;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * labelColor;                      //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) char isLight; 
@property (nonatomic,readonly) float overlayDarkeningAlpha;               //@synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha - In the implementation block
@property (nonatomic,readonly) float regularDarkeningAlpha;               //@synthesize regularDarkeningAlpha=_regularDarkeningAlpha - In the implementation block
@property (nonatomic,readonly) float overlayLighteningAlpha;              //@synthesize overlayLighteningAlpha=_overlayLighteningAlpha - In the implementation block
@property (nonatomic,readonly) float regularLighteningAlpha;              //@synthesize regularLighteningAlpha=_regularLighteningAlpha - In the implementation block
+(id)profileForDisplayProfile:(id)arg1 ;
-(id)labelImageForGlyph:(id)arg1 ;
-(char)isLight;
-(id)foregroundAttributesForFont:(id)arg1 ;
-(id)labelAttributesForFont:(id)arg1 ;
-(id)foregroundImageForGlyph:(id)arg1 ;
-(id)labelColorOverStrip:(char)arg1 ;
-(id)foregroundColorOverStrip:(char)arg1 ;
-(id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3 ;
-(id)_imageForGlyph:(id)arg1 color:(id)arg2 ;
-(void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3 ;
-(int)_sizeForFont:(id)arg1 ;
-(int)_sizeForGlyph:(id)arg1 ;
-(float)overlayDarkeningAlpha;
-(float)regularDarkeningAlpha;
-(float)overlayLighteningAlpha;
-(float)regularLighteningAlpha;
-(void)dealloc;
-(UIColor *)backgroundColor;
-(UIColor *)highlightColor;
-(UIColor *)foregroundColor;
-(UIColor *)labelColor;
@end
