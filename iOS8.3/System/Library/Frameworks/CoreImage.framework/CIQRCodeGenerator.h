/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator {

	NSString* inputCorrectionLevel;

}

@property (nonatomic,copy) NSString * inputCorrectionLevel; 
+(id)customAttributes;
-(CGImageRef)outputCGImage;
-(void)setInputCorrectionLevel:(NSString *)arg1 ;
-(NSString *)inputCorrectionLevel;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end
