/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {

	DACoreDAVLogger* _curLogger;

}
+(id)instance;
-(void)dealloc;
-(id)init;
-(bool)enabled;
-(void)logString:(id)arg1 ;
-(void)finishSnippets;
-(void)logStringWithFormat:(id)arg1 ;
-(void)logData:(id)arg1 ;
@end
