/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSError, SagaImporter;

@interface SagaUpdateLibraryOperation : CloudLibraryOperation {

	NSError* _error;
	SagaImporter* _importer;
	BOOL _prefetchArtwork;
	BOOL _initialImport;

}

@property (assign,nonatomic) BOOL prefetchArtwork;                                     //@synthesize prefetchArtwork=_prefetchArtwork - In the implementation block
@property (nonatomic,readonly) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (getter=isInitialImport,nonatomic,readonly) BOOL initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) float updateProgress; 
+(void)cancelAllOperations;
-(void)setPrefetchArtwork:(BOOL)arg1 ;
-(float)updateProgress;
-(BOOL)prefetchArtwork;
-(BOOL)isInitialImport;
-(id)init;
-(void)cancel;
-(void)main;
-(void).cxx_destruct;
-(id)error;
@end

