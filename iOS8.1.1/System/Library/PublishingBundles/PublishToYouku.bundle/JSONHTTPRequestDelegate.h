/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PublishingBundles/PublishToYouku.bundle/PublishToYouku
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol JSONHTTPRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3;

@required
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)request:(id)arg1 didReceiveObject:(id)arg2;

@end
