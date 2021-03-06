/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, NSString, CKConversation, NSTimer, NSMutableSet;

@interface CKTranscriptStatusController : NSObject {

	UIView* _progressView;
	NSString* _title;
	CKConversation* _conversation;
	float _lastVal;
	NSString* _lastMsg;
	NSTimer* _progressUpdateTimer;
	NSMutableSet* _currentMessages;
	bool _updatingProgress;
	bool _viewTitle;
	bool _finishingUp;
	bool _animatingFadeOut;
	id _delegate;
	bool _suspended;

}

@property (assign,nonatomic) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(void)suspend;
-(id)title;
-(id)_title;
-(void)resume;
-(void)reset;
-(id)conversation;
-(void)setProgressIndicatorHidden:(bool)arg1 ;
-(void)resetProgress;
-(void)setConversation:(id)arg1 ;
-(void)_updateTitle:(bool)arg1 ;
-(void)_hideName;
-(void)_updateCurrentMessages;
-(bool)_shouldShowProgress;
-(void)_updateNavItemTitleView:(bool)arg1 ;
-(void)_startUpdatingProgress;
-(id)_localizedTitleForSendingPart:(long long)arg1 ofPart:(long long)arg2 ;
-(void)_refreshNavigationItemViewAnimate:(bool)arg1 ;
-(bool)_calcVals:(bool*)arg1 ;
-(void)_refreshNavigationItemView;
-(void)_finishProgress;
-(float)_generateVal;
-(id)_generateStatusTitle;
-(void)brieflyShowName;
-(void)refresh;
@end

