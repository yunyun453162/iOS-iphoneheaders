/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>

@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {

	UIImageView* _backsideSnapshotView;
	UIView* _previewContainerView;
	MSAudioProgressView* _previewProgressView;
	SUPlayerStatus* _previewStatus;

}

@property (nonatomic,retain) SUPlayerStatus * previewStatus;              //@synthesize previewStatus=_previewStatus - In the implementation block
-(void)dealloc;
-(void)setPreviewStatus:(id)arg1 ;
-(void)setPreviewStatus:(id)arg1 animated:(bool)arg2 ;
-(void)_flipFromPreviewProgressView;
-(void)_destroyPreviewProgressView;
-(void)_flipToPreviewProgressView;
-(id)previewStatus;
@end

