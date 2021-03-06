/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface RefreshUpdateDownloadOperation : ISOperation {

	long long _downloadID;

}

@property (readonly) long long downloadIdentifier; 
-(BOOL)_refreshDownloadUsingUpdate:(id)arg1 application:(id)arg2 ;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)run;
@end

