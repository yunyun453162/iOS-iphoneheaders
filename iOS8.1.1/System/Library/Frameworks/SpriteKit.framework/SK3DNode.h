/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@protocol SCNRenderer;
@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {

	id<SCNRenderer> _scnRenderer;
	SCNVector3 _originalCameraPosition;
	SCNScene* _scene;
	BOOL playing;
	BOOL loops;
	BOOL autoenablesDefaultLighting;
	double sceneTime;
	SCNNode* pointOfView;

}

@property (assign) CGSize viewportSize; 
@property (nonatomic,retain) SCNScene * scnScene; 
@property (assign,nonatomic) double sceneTime; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
+(id)nodeWithViewportSize:(CGSize)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(SCNNode *)pointOfView;
-(double)sceneTime;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(void)setSceneTime:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(3)projectPoint:;
-(3)unprojectPoint:;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
-(id)initWithViewportSize:(CGSize)arg1 ;
-(void)_renderForTime:(double)arg1 ;
-(void)setScnScene:(SCNScene *)arg1 ;
-(SCNScene *)scnScene;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)commonInit;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
@end
