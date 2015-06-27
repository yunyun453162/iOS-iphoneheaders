/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SBRoundedRectBorderView : UIView

@property (nonatomic,retain) UIColor * borderColor; 
@property (assign,nonatomic) float borderWidth; 
@property (assign,nonatomic) float cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(float)borderWidth;
-(UIColor *)borderColor;
@end
