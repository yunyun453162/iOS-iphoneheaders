/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKFollowPath : SKAction {

	SKCFollowPath* _mycaction;
	CGPathRef _cgPath;

}
+(id)followPath:(CGPathRef)arg1 duration:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4 ;
-(id)reversedAction;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

