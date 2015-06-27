/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDFilteredImage, GQDAffineGeometry, GQDImageBinary, GQDPath, NSString;

@interface GQDMedia : GQDGraphic <GQDNameMappable> {

	GQDFilteredImage* mFilteredImage;
	GQDAffineGeometry* mCropGeometry;
	GQDImageBinary* mOriginalImageBinary;
	GQDPath* mMaskingShapePath;
	CGPathRef mAlphaMaskBezier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(id)imageBinary;
-(id)cropGeometry;
-(id)maskingShapePath;
-(CGPathRef)alphaMaskBezier;
-(void)dealloc;
@end
