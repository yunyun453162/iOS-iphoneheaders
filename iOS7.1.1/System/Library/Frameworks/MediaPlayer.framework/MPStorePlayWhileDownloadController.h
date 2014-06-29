/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/SSDownloadHandlerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, SSDownloadHandler, SSDownloadManager, NSObject, NSMutableArray;

@interface MPStorePlayWhileDownloadController : NSObject <SSDownloadHandlerDelegate, UIAlertViewDelegate> {

	NSMutableSet* _cellularRestrictedAlertViews;
	SSDownloadHandler* _downloadHandler;
	SSDownloadManager* _downloadManager;
	NSObject<OS_dispatch_queue>* _downloadSessionQueue;
	NSMutableArray* _downloadSessions;

}
+(id)sharedController;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2 ;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2 ;
-(id)openSessionWithMediaItem:(id)arg1 attributes:(id)arg2 assetOptions:(id)arg3 ;
-(bool)canOpenSessionWithMediaItem:(id)arg1 ;
-(bool)isSessionRequiredToPlayMediaItem:(id)arg1 ;
-(id)_openSessionWithProperties:(id)arg1 assetOptions:(id)arg2 ;
-(bool)_showNoNetworkDialogForMediaItem:(id)arg1 ;
-(bool)_showCellularRestrictedDialogForMediaItem:(id)arg1 ;
-(id)_downloadSessionWithID:(id)arg1 ;
-(id)_openSessionWithProperties:(id)arg1 style:(long long*)arg2 ;
-(bool)showNetworkConstraintDialogForMediaItem:(id)arg1 ;
-(void)_closeSessionForAsset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void).cxx_destruct;
@end
