/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen;

@interface SBWindowContext : NSObject {

	unsigned _identifier;
	float _level;
	UIScreen* _screen;
	BOOL _orderOutPending;

}

@property (nonatomic,readonly) unsigned identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) float level;                                              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                        //@synthesize screen=_screen - In the implementation block
@property (assign,getter=isOrderOutPending,nonatomic) BOOL orderOutPending;              //@synthesize orderOutPending=_orderOutPending - In the implementation block
+(id)contextWithIdentifier:(unsigned)arg1 level:(float)arg2 screen:(id)arg3 ;
-(void)setOrderOutPending:(BOOL)arg1 ;
-(BOOL)isOrderOutPending;
-(id)initWithIdentifier:(unsigned)arg1 level:(float)arg2 screen:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)screen;
-(float)level;
-(unsigned)identifier;
@end
