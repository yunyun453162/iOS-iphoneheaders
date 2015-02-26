/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

@interface TSDMediaRep : TSDStyledRep {

	BOOL mIsZooming;
	CALayer* mTapToReplaceLayer;
	CAShapeLayer* mMaskLayer;
	CAShapeLayer* mStrokeLayer;
	CALayer* mFrameMaskLayer;
	TSDFrameRep* mFrameRep;
	CGRect mLastPictureFrameLayerRect;

}

@property (nonatomic,readonly) TSDMediaInfo * mediaInfo; 
@property (nonatomic,readonly) TSDMediaLayout * mediaLayout; 
@property (nonatomic,readonly) BOOL shouldShowMediaReplaceUI; 
-(void)i_updateFrameRep;
-(BOOL)i_shouldRenderStroke:(id)arg1 ;
-(void)willBeginZooming;
-(void)didEndZooming;
-(id)overlayLayers;
-(void)processChangedProperty:(int)arg1 ;
-(id)additionalLayersOverLayer;
-(BOOL)replaceButtonContainsPoint:(CGPoint)arg1 ;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(id)visibleMediaReplaceButtonLayer;
-(id)commandToResetToSize:(CGSize)arg1 ;
-(TSDMediaLayout *)mediaLayout;
-(BOOL)canResetMediaSize;
-(BOOL)shouldAllowReplacementFromDrop;
-(void)p_addLayerForReplaceButtonToArray:(id)arg1 ;
-(id)p_tapToReplaceLayer;
-(CGSize)p_replaceButtonSize;
-(id)currentReplaceButtonImage;
-(void)p_updateTapToReplaceLayerPosition;
-(CGPoint)p_scaledPositionOfImageReplaceKnob;
-(id)commandToResetMediaToRawPixelSize;
-(id)commandToResetMediaToInsertedSize;
-(id)currentReplaceButtonHighlightedImage;
-(void)dealloc;
-(BOOL)isPlaceholder;
-(TSDMediaInfo *)mediaInfo;
@end
