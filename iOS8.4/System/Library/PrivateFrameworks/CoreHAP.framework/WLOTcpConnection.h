/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/NSStreamDelegate.h>

@protocol WLOTcpConnectionDelegate;
@class NSInputStream, NSOutputStream, NSString;

@interface WLOTcpConnection : NSObject <NSStreamDelegate> {

	id<WLOTcpConnectionDelegate> _delegate;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (assign,nonatomic,__weak) id<WLOTcpConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                               //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                             //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WLOTcpConnectionDelegate>)arg1 ;
-(id<WLOTcpConnectionDelegate>)delegate;
-(void)close;
-(BOOL)open;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned long long)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)openStream:(id)arg1 ;
-(NSInputStream *)inputStream;
-(void)closeStream:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(long long)_writeData:(id)arg1 ;
-(id)_readData:(BOOL)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(NSOutputStream *)outputStream;
-(long long)writeData:(id)arg1 ;
@end

