/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NNMKMessagesSyncServiceServerDelegate <NSObject>
@required
-(void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(int)arg3;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;

@end

