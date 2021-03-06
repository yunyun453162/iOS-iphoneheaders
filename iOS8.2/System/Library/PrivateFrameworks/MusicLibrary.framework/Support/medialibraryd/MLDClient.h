/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface MLDClient : NSObject {

	NSString* _name;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int processID; 
-(id)init;
-(id)description;
-(NSString *)name;
-(NSXPCConnection *)connection;
-(int)processID;
-(id)initWithConnection:(id)arg1 ;
@end

