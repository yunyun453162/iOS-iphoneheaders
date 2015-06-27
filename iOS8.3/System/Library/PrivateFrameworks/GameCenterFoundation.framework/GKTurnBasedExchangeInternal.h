/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:46:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation {

	NSString* _exchangeID;
	NSArray* _recipientIndexes;
	NSString* _statusString;
	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _sendDate;
	NSDate* _timeoutDate;
	NSDate* _completionDate;
	NSArray* _replies;
	unsigned char _senderIndex;

}

@property (nonatomic,retain) NSString * exchangeID;                          //@synthesize exchangeID=_exchangeID - In the implementation block
@property (assign,nonatomic) unsigned char senderIndex;                      //@synthesize senderIndex=_senderIndex - In the implementation block
@property (nonatomic,retain) NSArray * recipientIndexes;                     //@synthesize recipientIndexes=_recipientIndexes - In the implementation block
@property (nonatomic,retain) NSString * statusString;                        //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * sendDate;                              //@synthesize sendDate=_sendDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                           //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                        //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSArray * replies;                              //@synthesize replies=_replies - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSDate *)timeoutDate;
-(NSArray *)replies;
-(unsigned char)senderIndex;
-(NSArray *)recipientIndexes;
-(void)setReplies:(NSArray *)arg1 ;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(NSString *)exchangeID;
-(void)setTimeoutDate:(NSDate *)arg1 ;
-(void)setExchangeID:(NSString *)arg1 ;
-(void)setSenderIndex:(unsigned char)arg1 ;
-(void)setRecipientIndexes:(NSArray *)arg1 ;
-(NSString *)statusString;
-(void)setSendDate:(NSDate *)arg1 ;
-(NSDate *)sendDate;
@end
