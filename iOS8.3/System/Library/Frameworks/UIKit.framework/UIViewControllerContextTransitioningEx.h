/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray;


@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews; 
@property (assign,setter=_setPercentOffset:,nonatomic) float _percentOffset; 
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) char _allowUserInteraction; 
@required
-(char)_allowUserInteraction;
-(void)__runAlongsideAnimations;
-(void)_setAllowUserInteraction:(char)arg1;
-(NSArray *)_containerViews;
-(float)_percentOffset;
-(void)_interactivityDidChange:(char)arg1;
-(void)_setContainerViews:(id)arg1;
-(void)_setPercentOffset:(float)arg1;

@end
