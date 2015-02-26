/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>

@class TSCHChartRep;

@interface TSCH3DChartRepAs2D : TSCHChartRep {

	TSCHChartRep* m2DRep;

}
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)p_create2DRep;
-(void)p_convert3DFillFromSeries:(id)arg1 toSeries:(id)arg2 ;
-(id)p_layoutFrom3DInfo:(id)arg1 layout3D:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3 ;
-(void)p_update2DLayout;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
