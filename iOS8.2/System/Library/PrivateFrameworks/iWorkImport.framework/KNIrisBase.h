/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class TSDGLShader, TSDGLDataBuffer, NSString;

@interface KNIrisBase : KNAnimationEffect <KNAnimationPluginArchiving> {

	TSDGLShader* mQuadShader;
	TSDGLDataBuffer* mQuadDataBuffer;
	TSDGLShader* mOpaqueShader;
	TSDGLDataBuffer* mOpaqueDataBuffer;
	TSDGLShader* mFadeShader;
	TSDGLDataBuffer* mFadeDataBuffer;
	unsigned mNumDivisionsPerQuadrant;
	char _isBuildOut;
	CGRect _frameRect;
	CGRect _drawableFrame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(char)isTransition;
+(id)animationName;
-(void)p_setupShaders;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(float)p_angleFromQuadrant:(unsigned)arg1 inRect:(CGRect)arg2 ;
-(float)p_largestDividedAngleInRect:(CGRect)arg1 ;
-(void)p_setupDataBuffersWithFrameRect:(CGRect)arg1 openFromCenter:(char)arg2 ;
-(void)dealloc;
@end

