/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
-(void)reloadData;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(BOOL)ignoresContentOffsetChanges;
-(BOOL)isFastAnimationAvailableForContentOffset;
@end
