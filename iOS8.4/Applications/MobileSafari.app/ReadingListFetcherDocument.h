/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/safarifetcherd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <safarifetcherd/safarifetcherd-Structs.h>
#import <safarifetcherd/ReaderControllerDelegate.h>
#import <safarifetcherd/SiteIconDownloadRequestDelegate.h>

@class WebView, ReaderContextWK1, WebBookmark, SiteIconDownloadRequest, NSTimer, NSString;

@interface ReadingListFetcherDocument : NSObject <ReaderControllerDelegate, SiteIconDownloadRequestDelegate> {

	int _retainCount;
	WebView* _webView;
	ReaderContextWK1* _readerContext;
	WebBookmark* _bookmark;
	SiteIconDownloadRequest* _thumbnailDownloadRequest;
	char _completionPendingThumbnail;
	char _isLoading;
	char _finishedLoadingMainFrame;
	char _mainPageArchived;
	char _fetcherInitiatedLoadCancel;
	char _loadFailed;
	char _didFinishFetchingDocument;
	unsigned _numCompletedSubpages;
	double _loadStartTimestamp;
	double _dataReceivedTimestamp;
	NSTimer* _slowLoadTimer;
	NSTimer* _readerPageTimer;
	NSTimer* _dataCheckTimer;
	NSTimer* _webThreadUnresponsiveFailSafeTimer;

}

@property (nonatomic,readonly) char isLoading;                      //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) char wasCancelled;                   //@synthesize fetcherInitiatedLoadCancel=_fetcherInitiatedLoadCancel - In the implementation block
@property (nonatomic,readonly) char loadFailed;                     //@synthesize loadFailed=_loadFailed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)siteIconDownloadRequestDidFail:(id)arg1 ;
-(void)siteIconDownloadRequest:(id)arg1 didComputeIconKeyColor:(id)arg2 ;
-(void)siteIconDownloadRequest:(id)arg1 didLoadIconData:(id)arg2 ;
-(void)loadBookmark:(id)arg1 ;
-(char)loadFailed;
-(char)isShowingReadingListArchive;
-(int)readerOperationMode;
-(void)doneLoadingReaderPage;
-(void)webFrame:(id)arg1 didFinishLoadingNextPageNumber:(unsigned)arg2 ;
-(float)userVisibleWidth;
-(void)_dataReceived;
-(void)_saveAndSelfExpire;
-(void)finishFetchingDocument;
-(void)startFailSafeTimer;
-(void)_failSafeTimerExpired;
-(void)_cancelFailSafeTimer;
-(void)_loadDidFail;
-(void)_dataCheckTimeoutExpired;
-(void)_slowLoadTimeoutExpired;
-(void)_didCancelLoad;
-(void)didFinishLoadingAllReaderPages;
-(void)_readerPageTimeoutExpired;
-(void)_didDetectReaderAvailability:(char)arg1 ;
-(void)_didFinishLoadingSubpage;
-(id)_mimeTypeForFrameContents:(id)arg1 ;
-(void)detectReaderAvailabilityOnWebThread;
-(void)_webView:(id)arg1 didPerformAnyRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4 ;
-(void)saveNextPage:(id)arg1 asPageNumber:(unsigned)arg2 ;
-(void)_cleanUpAfterIconDownloadRequestCompletion;
-(id)retain;
-(void)dealloc;
-(id)init;
-(unsigned)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(char)isLoading;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(double)progress;
-(char)wasCancelled;
-(oneway void)release;
-(void)cancelLoad;
-(void)webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4 ;
-(void)webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4 ;
@end
