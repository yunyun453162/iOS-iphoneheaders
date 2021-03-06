/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIFetchContentInBackgroundAction, NSString;

@interface SBBackgroundFetchExternalRequest : NSObject {

	int _sequenceNumber;
	UIFetchContentInBackgroundAction* _action;
	NSString* _bundleID;

}

@property (nonatomic,retain) UIFetchContentInBackgroundAction * action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) int sequenceNumber;                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
-(id)initForBundleID:(id)arg1 ;
-(void)dealloc;
-(UIFetchContentInBackgroundAction *)action;
-(void)setAction:(UIFetchContentInBackgroundAction *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(int)sequenceNumber;
-(void)execute;
@end

