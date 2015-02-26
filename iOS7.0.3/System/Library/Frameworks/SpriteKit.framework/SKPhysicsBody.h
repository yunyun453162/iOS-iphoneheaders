/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSCoding> {

	BOOL _dynamic;
	BOOL _usesPreciseCollisionDetection;
	BOOL _allowsRotation;
	BOOL _resting;
	BOOL _affectedByGravity;
	float _friction;
	float _restitution;
	float _linearDamping;
	float _angularDamping;
	float _density;
	float _mass;
	float _area;
	unsigned _categoryBitMask;
	unsigned _collisionBitMask;
	unsigned _contactTestBitMask;
	NSArray* _joints;
	SKNode* _node;
	float _angularVelocity;
	CGVector _velocity;

}

@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;                   //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection;              //@synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                             //@synthesize allowsRotation=_allowsRotation - In the implementation block
@property (assign,getter=isResting,nonatomic) BOOL resting;                   //@synthesize resting=_resting - In the implementation block
@property (assign,nonatomic) float friction;                                  //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) float restitution;                               //@synthesize restitution=_restitution - In the implementation block
@property (assign,nonatomic) float linearDamping;                             //@synthesize linearDamping=_linearDamping - In the implementation block
@property (assign,nonatomic) float angularDamping;                            //@synthesize angularDamping=_angularDamping - In the implementation block
@property (assign,nonatomic) float density;                                   //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) float mass;                                      //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) float area;                                    //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) BOOL affectedByGravity;                          //@synthesize affectedByGravity=_affectedByGravity - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask;                        //@synthesize categoryBitMask=_categoryBitMask - In the implementation block
@property (assign,nonatomic) unsigned collisionBitMask;                       //@synthesize collisionBitMask=_collisionBitMask - In the implementation block
@property (assign,nonatomic) unsigned contactTestBitMask;                     //@synthesize contactTestBitMask=_contactTestBitMask - In the implementation block
@property (nonatomic,readonly) NSArray * joints;                              //@synthesize joints=_joints - In the implementation block
@property (nonatomic,readonly) SKNode * node;                                 //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGVector velocity;                               //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) float angularVelocity;                           //@synthesize angularVelocity=_angularVelocity - In the implementation block
+(id)bodyWithEdgeLoopFromRect:(CGRect)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)copyWithZone:(NSZoneRef)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithCircleOfRadius:(float)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(void)applyForce:(CGVector)arg1 ;
-(void)applyForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyTorque:(float)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyAngularImpulse:(float)arg1 ;
-(id)allContactedBodies;
-(unsigned)contactTestBitMask;
-(id)joints;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVelocity:(CGVector)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setResting:(BOOL)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setRestitution:(float)arg1 ;
-(float)friction;
-(void)setFriction:(float)arg1 ;
-(float)density;
-(void)setLinearDamping:(float)arg1 ;
-(void)setAngularDamping:(float)arg1 ;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(CGVector)velocity;
-(float)angularVelocity;
-(void)setAngularVelocity:(float)arg1 ;
-(float)restitution;
-(float)linearDamping;
-(float)angularDamping;
-(float)mass;
-(void)applyImpulse:(CGVector)arg1 ;
-(void)setDensity:(float)arg1 ;
-(id).cxx_construct;
-(id)node;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(unsigned)collisionBitMask;
-(unsigned)categoryBitMask;
-(BOOL)isDynamic;
-(BOOL)usesPreciseCollisionDetection;
-(BOOL)isResting;
-(BOOL)affectedByGravity;
-(float)area;
-(void).cxx_destruct;
@end
