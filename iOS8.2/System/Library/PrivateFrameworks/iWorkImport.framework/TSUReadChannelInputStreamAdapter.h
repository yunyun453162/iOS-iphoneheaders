/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/SFUInputStream.h>

@protocol TSUReadChannel, TSUStreamReadChannel, OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {

	id<TSUReadChannel> _readChannel;
	id<TSUStreamReadChannel> _streamReadChannel;
	NSObject*<OS_dispatch_data> _leftoverData;
	NSObject*<OS_dispatch_queue> _readQueue;
	long long _offset;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2 ;
-(id)initWithReadChannel:(id)arg1 ;
-(id)initWithStreamReadChannel:(id)arg1 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(char)canSeek;
@end
