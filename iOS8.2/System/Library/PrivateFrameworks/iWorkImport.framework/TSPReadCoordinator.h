/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPReadCoordinator <NSObject>
@property (nonatomic,readonly) char isReadingFromDocument; 
@required
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(char)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3;
-(char)isReadingFromDocument;

@end
