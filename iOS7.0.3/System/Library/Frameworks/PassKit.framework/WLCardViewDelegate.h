/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(BOOL)passViewBackGrowsCentered:(id)arg1;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(BOOL)passViewShouldFlip:(id)arg1;
-(void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
-(void)passViewTouchesBegan:(id)arg1;
-(void)passViewTouchesCancelled:(id)arg1;
-(void)passViewTapped:(id)arg1;
@end
