/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PBHandshake : NSObject {

	unsigned _position;
	unsigned _version;
	unsigned _state;

}

@property (assign,nonatomic) unsigned position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned version;               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
@end

