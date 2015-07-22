/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CASpringAnimation.h>

@class MFSpringAnimationDelegate;

@interface MFSpringAnimation : CASpringAnimation

@property (nonatomic,retain) MFSpringAnimationDelegate * delegate; 
+(id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
+(double)defaultAnimationDuration;
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end
