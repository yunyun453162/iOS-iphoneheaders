/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBInsecureDrawingAlertItem : SBAlertItem {

	NSString* _processName;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(void)dealloc;
-(NSString *)processName;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(void)setProcessName:(NSString *)arg1 ;
-(char)ignoreIfAlreadyDisplaying;
@end
