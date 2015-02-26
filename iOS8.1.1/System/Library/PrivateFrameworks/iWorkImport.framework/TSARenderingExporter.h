/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKRenderingExporter.h>

@protocol TSARenderingExporterDelegate;
@class TSADocumentRoot, TSDImager, NSObject, TSUProgressContext, TSDBitmapRenderingQualityInfo, NSString;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {

	TSADocumentRoot* mDocumentRoot;
	TSDImager* mImager;
	NSObject*<TSARenderingExporterDelegate> mRenderingExporterDelegate;
	BOOL mIsCancelled;
	BOOL mIsQuit;
	BOOL mPaginate;
	BOOL mDoesDrawAllPages;
	TSUProgressContext* mProgressContext;
	TSDBitmapRenderingQualityInfo* mBitmapRenderingQualityInfo;

}

@property (retain) TSUProgressContext * progressContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentInfos;
-(double)totalProgess;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(CGRect)unscaledClipRect;
-(CGRect)boundsRect;
-(void)setMaxPixels:(double)arg1 ;
-(id)p_renderingExporterDelegate;
-(id)initWithDocumentRoot:(id)arg1 imager:(id)arg2 ;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(void)waitForRecalcToFinish;
-(BOOL)incrementPage;
-(void)p_drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 createPage:(BOOL)arg3 ;
-(BOOL)preparePage:(unsigned long long)arg1 ;
-(void)drawAllPagesWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 ;
-(void)drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 ;
-(BOOL)p_exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(double)progressForCurrentPage;
-(BOOL)setInfosToCurrentPage;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)imager;
-(void)setPaginate:(BOOL)arg1 ;
-(BOOL)paginate;
-(BOOL)hasMoreThanOnePageToPrint;
-(id)bitmapRenderingQualityInfo;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(unsigned long long)pageCount;
-(void)setup;
-(void)teardown;
-(void)setProgressContext:(TSUProgressContext *)arg1 ;
-(TSUProgressContext *)progressContext;
-(BOOL)isQuit;
-(void)quit;
-(id)documentRoot;
@end
