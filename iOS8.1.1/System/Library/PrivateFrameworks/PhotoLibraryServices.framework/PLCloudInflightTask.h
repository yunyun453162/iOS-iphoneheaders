/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLCloudInflightTask : NSObject {

	/*^block*/id _progressBlock;
	/*^block*/id _completionHandler;

}

@property (readonly) id progressBlock; 
@property (readonly) id completionHandler; 
-(void)dealloc;
-(id)completionHandler;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressBlock;
@end

