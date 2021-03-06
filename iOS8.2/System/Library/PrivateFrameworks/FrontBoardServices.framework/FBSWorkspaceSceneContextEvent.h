/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSContext;

@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent {

	FBSContext* _context;
	char _orderOut;

}

@property (nonatomic,retain) FBSContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char orderOut;                     //@synthesize orderOut=_orderOut - In the implementation block
-(void)dealloc;
-(id)description;
-(FBSContext *)context;
-(void)setContext:(FBSContext *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)orderOut;
-(void)setOrderOut:(char)arg1 ;
@end

