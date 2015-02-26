/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class NSData, NSString, SSURLConnectionRequest;

@interface RadioReportIssueRequest : RadioRequest {

	NSData* _data;
	NSString* _description;
	int _issueType;
	SSURLConnectionRequest* _request;

}
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithIssueType:(int)arg1 description:(id)arg2 ;
-(id)initWithIssueType:(int)arg1 description:(id)arg2 data:(id)arg3 ;
@end
