/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class TSDDrawableInfo, TSDDrawableComment;

@interface TSDDrawableInfoCommentCommand : TSKCommand {

	TSDDrawableInfo* mInfo;
	TSDDrawableComment* mNewComment;
	TSDDrawableComment* mOldComment;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 info:(id)arg2 comment:(id)arg3 ;
-(void)p_doWithBeginEditing:(BOOL)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end

