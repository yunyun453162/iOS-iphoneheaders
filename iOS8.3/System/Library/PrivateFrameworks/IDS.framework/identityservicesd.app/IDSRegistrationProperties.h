/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IDSRegistrationProperties : NSObject {

	NSArray* _interesting;
	NSArray* _requireAll;

}

@property (nonatomic,retain) NSArray * interesting;              //@synthesize interesting=_interesting - In the implementation block
@property (nonatomic,retain) NSArray * requireAll;               //@synthesize requireAll=_requireAll - In the implementation block
-(NSArray *)requireAll;
-(void)setRequireAll:(NSArray *)arg1 ;
-(NSArray *)interesting;
-(void)setInteresting:(NSArray *)arg1 ;
-(void)dealloc;
@end

