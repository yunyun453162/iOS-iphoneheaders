/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier {

	SCD_Struct_TS479 _GLPoint2DValue;
	SCD_Struct_TS479 _proposedGLPoint2DValue;

}

@property (getter=LPoint2DValue,nonatomic,readonly) SCD_Struct_TS479 GLPoint2DValue;              //@synthesize GLPoint2DValue=_GLPoint2DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS479 proposedGLPoint2DValue;                             //@synthesize proposedGLPoint2DValue=_proposedGLPoint2DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS479)GLPoint2DValue;
-(void)setProposedGLPoint2DValue:(SCD_Struct_TS479)arg1 ;
-(SCD_Struct_TS479)proposedGLPoint2DValue;
-(id)description;
@end

