/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:19:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/NSURLConnectionDelegate.h>

@class NSString;

@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {

	RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate>* m_connectionDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithConnectionDelegate:(SynchronousResourceHandleCFURLConnectionDelegate*)arg1 ;
-(void)connection:(id)arg1 didReceiveDataArray:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)clearHandle;
@end

