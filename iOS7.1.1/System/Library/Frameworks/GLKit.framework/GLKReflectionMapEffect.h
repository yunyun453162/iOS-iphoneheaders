/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GLKit/GLKBaseEffect.h>
#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect> {

	GLKEffectPropertyTexture* _textureCubeMap;
	GLKMatrix3 _matrix;
	bool _dirtyUniforms;
	int _matrixLoc;

}

@property (nonatomic,readonly) GLKEffectPropertyTexture * textureCubeMap;              //@synthesize textureCubeMap=_textureCubeMap - In the implementation block
@property (assign,nonatomic) _GLKMatrix3 matrix;                                       //@synthesize matrix=_matrix - In the implementation block
@property (assign,nonatomic) bool dirtyUniforms;                                       //@synthesize dirtyUniforms=_dirtyUniforms - In the implementation block
@property (assign,nonatomic) int matrixLoc;                                            //@synthesize matrixLoc=_matrixLoc - In the implementation block
-(void)prepareToDraw;
-(void)setDirtyUniforms:(bool)arg1 ;
-(bool)dirtyUniforms;
-(id)textureCubeMap;
-(int)matrixLoc;
-(void)setMatrixLoc:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setMatrix:(_GLKMatrix3)arg1 ;
-(_GLKMatrix3)matrix;
@end
