/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <assistantd/ADSessionDelegate.h>
#import <assistantd/ADSyncManagerDelegate.h>
#import <assistantd/ADSpeechManagerDelegate.h>
#import <assistantd/ADContextManagerDelegate.h>
#import <assistantd/ADLocationManagerDelegate.h>
#import <assistantd/ADAcousticIDHelperDelegate.h>
#import <assistantd/ADUIServiceDelegate.h>
#import <assistantd/AFSiriTaskmasterDelegate.h>
#import <assistantd/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, ADCommandCenterClient, ADCommandCenterRequestDelegate, ADCommandCenterSpeechDelegate, OS_dispatch_group, OS_dispatch_source;
@class NSObject, ADUIService, ADAccount, ADSession, ADDiagnosticsManager, ADSyncManager, ADSpeechManager, ADServiceManager, ADContextManager, ADManagedStore, ADRetryManager, ADResultObjectCache, ADLocationManager, ADMotionManager, ADOfflineSAMetricsManager, ADUserActivityHelper, ADAcousticIDHelper, ADCallObserver, NSUUID, NSMutableSet, AFSpeechRequestOptions, SASStartSpeech, SABaseCommand, SASPronunciationContext, SAClearContext, NSMutableDictionary, NSString, ADSharedDataConnection, ADRequestStatistics;

@interface ADCommandCenter : NSObject <ADSessionDelegate, ADSyncManagerDelegate, ADSpeechManagerDelegate, ADContextManagerDelegate, ADLocationManagerDelegate, ADAcousticIDHelperDelegate, ADUIServiceDelegate, AFSiriTaskmasterDelegate, MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	id<ADCommandCenterClient> _currentClient;
	id<ADCommandCenterRequestDelegate> _requestDelegate;
	id<ADCommandCenterSpeechDelegate> _speechDelegate;
	id<ADCommandCenterSpeechDelegate> _speechFileDelegate;
	ADUIService* _uiService;
	ADAccount* _account;
	ADSession* _session;
	ADDiagnosticsManager* _diagnosticsManager;
	ADSyncManager* _syncManager;
	ADSpeechManager* _speechManager;
	ADServiceManager* _serviceManager;
	ADContextManager* _contextManager;
	ADManagedStore* _managedStore;
	ADRetryManager* _retryManager;
	ADResultObjectCache* _resultObjectCache;
	ADLocationManager* _locationManager;
	ADMotionManager* _motionManager;
	ADOfflineSAMetricsManager* _offlineSAMetricsManager;
	ADUserActivityHelper* _activityHelper;
	ADAcousticIDHelper* _acousticIDHelper;
	ADCallObserver* _callObserver;
	int _callState;
	NSUUID* _callTransactionUUID;
	BOOL _callIsLikely;
	/*^block*/id _speechCompletion;
	NSMutableSet* _outstandingSyncChunks;
	BOOL _needsToSendSyncFinished;
	AFSpeechRequestOptions* _currentSpeechRequestOptions;
	SASStartSpeech* _startSpeechCommand;
	SABaseCommand* _currentRequest;
	SABaseCommand* _lastRequest;
	BOOL _startingPronunciationRequest;
	SASPronunciationContext* _pronunciationContext;
	BOOL _speechDelegateHasReceivedSpeechRecognized;
	BOOL _speechDelegateHasReceivedPartialResult;
	NSObject*<OS_dispatch_group> _speechRecognitionGroup;
	NSObject*<OS_dispatch_source> _partialResultAcousticIDTimer;
	NSObject*<OS_dispatch_group> _speechRequestGroup;
	SCD_Struct_AD1 _contextFetchState;
	NSObject*<OS_dispatch_group> _contextDispatchGroup;
	SAClearContext* _lastClearContext;
	NSMutableSet* _outstandingRequestIds;
	NSMutableDictionary* _aceCompletionMap;
	BOOL _deviceIsLocked;
	BOOL _deviceIsShowingLockScreen;
	double _requestEffectiveStartTime;
	BOOL _isActive;
	BOOL _hasIsActiveNotifyToken;
	int _isActiveNotifyToken;
	BOOL _hasSanityCheckedAutodownloadedAssets;
	BOOL _isInStarkMode;
	BOOL _cachedLocationWasSentForRequest;
	BOOL _restrictionsWereSetForRequest;
	/*^block*/id _requestEndCompletion;
	NSString* _deferredRequestEndIdentifier;
	ADSharedDataConnection* _sharedDataConnection;
	ADRequestStatistics* _requestStatistics;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                          //@synthesize queue=_queue - In the implementation block
@property (getter=_requestStatistics,nonatomic,retain) ADRequestStatistics * requestStatistics;              //@synthesize requestStatistics=_requestStatistics - In the implementation block
@property (setter=_setCurrentRequest:,nonatomic,retain) SABaseCommand * _currentRequest;                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (setter=_setLastRequest:,nonatomic,retain) SABaseCommand * _lastRequest;                           //@synthesize lastRequest=_lastRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedQueue;
+(id)sharedCommandCenter;
-(void)getSharedDataForPeer:(/*^block*/id)arg1 ;
-(void)updateSharedDataFromPeerUseCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_sharedDataConnection;
-(void)_updateSharedDataWithData:(id)arg1 ;
-(void)sharedDataConnection:(id)arg1 didUpdateSharedData:(id)arg2 ;
-(void)_handleCommandInAMOS:(id)arg1 ;
-(BOOL)_sendAMOSCommand:(id)arg1 domain:(id)arg2 toBundleWithIdentifier:(id)arg3 ;
-(void)_sendCreateResponseForCommand:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)_handleSADOCommandIfServiceDoesNotUseAMOS:(id)arg1 allowInterposing:(BOOL)arg2 ;
-(void)_amosSADomainObjectCreate:(id)arg1 ;
-(void)_sendRetrieveResponseForCommand:(id)arg1 withSADObjects:(id)arg2 ;
-(void)_sendAMOSCommandToService:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_amosSADomainObjectRetrieve:(id)arg1 ;
-(void)_sendUpdateResponseForCommand:(id)arg1 withUpdatedIdentifier:(id)arg2 ;
-(void)_updateObjectFromService:(id)arg1 sadIdentifier:(id)arg2 ;
-(void)_amosSADomainObjectUpdate:(id)arg1 ;
-(void)_sendCancelResponseForCommand:(id)arg1 ;
-(void)_amosSADomainObjectCancel:(id)arg1 ;
-(void)_amosSADomainObjectDelete:(id)arg1 ;
-(void)_amosSADomainObjectCommit:(id)arg1 ;
-(void)_amosSADomainObjectPunchOut:(id)arg1 ;
-(void)_saDomainObjectCreate:(id)arg1 ;
-(void)_saDomainObjectRetrieve:(id)arg1 ;
-(void)_saDomainObjectUpdate:(id)arg1 ;
-(void)_saDomainObjectCancel:(id)arg1 ;
-(void)_saDomainObjectDelete:(id)arg1 ;
-(void)_saDomainObjectCommit:(id)arg1 ;
-(void)_saDomainObjectPunchOut:(id)arg1 ;
-(void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientDisconnected:(id)arg1 ;
-(void)releaseLocationInUseAssertionForReason:(id)arg1 ;
-(void)clientConnected:(id)arg1 ;
-(void)sanityCheckAutodownloadedAssetsForced:(BOOL)arg1 ;
-(void)installedAssetsUpdated;
-(void)syncAnchorKeys:(id)arg1 forceReset:(BOOL)arg2 ;
-(void)syncNeeded;
-(void)rescheduleValidationRefresh;
-(void)refreshAssistantValidation;
-(void)prepareForShutdown;
-(void)refreshActivation;
-(void)destroyActiveAccount;
-(void)dismissAssistant;
-(id)_speechManager;
-(id)_requestStatistics;
-(void)_activityContinuationIsAllowedFlagMayHaveChanged;
-(void)_cancelSession;
-(id)_serviceManager;
-(void)_setCallIsLikely:(BOOL)arg1 ;
-(void)_setCurrentRequest:(id)arg1 ;
-(void)_setLastRequest:(id)arg1 ;
-(void)_cancelCurrentRequest;
-(void)_clearRequestDelegateState;
-(void)_clearSpeechDelegateState;
-(void)_replaceSpeechDelegateWhenReady:(id)arg1 cancelRequestIfDelegatesMatch:(BOOL)arg2 suppressAlert:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_sendCommandToServer:(id)arg1 ;
-(BOOL)_isInCall;
-(id)_offlineSAMetricsManager;
-(id)_retryManager;
-(void)_sendCommandToServer:(id)arg1 opportunistically:(BOOL)arg2 ;
-(void)_sendCommandToServer:(id)arg1 opportunistically:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addCompletion:(/*^block*/id)arg1 forCommandId:(id)arg2 ;
-(void)_addOutstandingRequestId:(id)arg1 ;
-(void)_sendRequestToServer:(id)arg1 ;
-(void)_recordRequestStatisticsMetrics;
-(void)_retryNakedCommandsIfNeeded;
-(void)_sendRetryableRequestToServer:(id)arg1 ;
-(void)_handleGenericConcreteAceCommand:(id)arg1 withDelegate:(id)arg2 interruptOutstandingRequest:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)_reallyHandleNewStartLocalRequest:(id)arg1 ;
-(void)_handleNextCallbacksForReply:(id)arg1 forCommand:(id)arg2 currentMissingCommands:(id)arg3 ;
-(id)_resultObjectCache;
-(void)_handleCommand:(id)arg1 ;
-(void)_saCommandFailed:(id)arg1 ;
-(SABaseCommand *)_currentRequest;
-(void)_removeOutstandingRequestId:(id)arg1 ;
-(BOOL)_hasActiveClientOrSyncing;
-(id)_lockStateSetRestrictionsThunk;
-(void)_handleNextCallbacksForReply:(id)arg1 forCommand:(id)arg2 ;
-(void)_sendCommandFailedForCommand:(id)arg1 reason:(id)arg2 ;
-(void)_handleValidServiceReply:(id)arg1 forCommand:(id)arg2 ;
-(void)_handleServiceReply:(id)arg1 inverse:(id)arg2 error:(id)arg3 forCommand:(id)arg4 ;
-(id)_syncManager;
-(BOOL)_syncChunkWindowFull;
-(void)_continueSyncIfConditionsMet;
-(void)_requestAnchorsForKeys:(id)arg1 ;
-(void)_shutdownSessionWhenIdle;
-(void)_cancelCallKeepAlive;
-(void)_scheduleCallKeepAlive;
-(void)_gatherAndSendSuccessMetrics;
-(void)_handleBareRequestCompleted:(id)arg1 ;
-(void)_removeOutstandingSyncChunkId:(id)arg1 ;
-(BOOL)_refIdIsSpeechStart:(id)arg1 ;
-(void)_endSpeechRequestForCommand:(id)arg1 withError:(id)arg2 suppressAlert:(BOOL)arg3 ;
-(id)_acousticIDHelper;
-(void)_handleNewStartLocalRequest:(id)arg1 suppressCancelationAlertIfCapturingSpeech:(BOOL)arg2 ;
-(void)_dictationSessionDidComplete;
-(void)_informSpeechManagerOfRecognitionForElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recordFailureMetricsForError:(id)arg1 ;
-(id)_contextManager;
-(id)_diagnosticsManager;
-(BOOL)_hasCompletionForCommandId:(id)arg1 ;
-(void)_startAcousticIDRequestWithDelegate:(id)arg1 withOptions:(id)arg2 context:(id)arg3 ;
-(void)cancelSpeechForDelegate:(id)arg1 ;
-(BOOL)_hasOutstandingRequestId:(id)arg1 ;
-(BOOL)_hasOutstandingSyncChunkId:(id)arg1 ;
-(void)_processCallbacksForCommand:(id)arg1 ;
-(void)_handleServiceCommand:(id)arg1 ;
-(void)_invokeCompletionForCommand:(id)arg1 ;
-(void)_startObservingCallState;
-(void)_invokeAllCompletions;
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(BOOL)_shouldClearNakedCommandsOnError:(id)arg1 ;
-(void)_sessionDidFailWithError:(id)arg1 ;
-(void)_changeRequestIdFrom:(id)arg1 to:(id)arg2 ;
-(void)_resetSyncState;
-(void)_addOutstandingSyncChunkId:(id)arg1 ;
-(void)_sendStartSpeechCommandWithSpeechManager:(id)arg1 info:(id)arg2 ;
-(void)_sendContextAndRestrictionsForSpeechRequestWithInfo:(id)arg1 ;
-(void)_sendLocationForSpeechRequest:(id)arg1 ;
-(void)_updateAlertContextIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_sendRestrictionsInPreparationForRequest;
-(void)_sendSessionObject:(id)arg1 opportunistically:(BOOL)arg2 ;
-(void)_speechCaptureCompleted;
-(void)_sendCancelSpeechForCommand:(id)arg1 ;
-(void)_setOutputVoice:(id)arg1 ;
-(void)_updateAutoDownloadedVoiceAssetsForOutputVoice;
-(void)_reallyEndSessionForDelegate:(id)arg1 ;
-(void)_replaceSpeechDelegateWhenReady:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_resetContextDispatchGroup;
-(void)_replaceRequestDelegate:(id)arg1 ;
-(void)_setBackgroundContext;
-(id)_contextDispatchGroup;
-(void)_ensureBackgroundContextSentToServer;
-(void)_sendAppContextCommandToServer:(id)arg1 ;
-(void)_setApplicationContextWithFuture:(id)arg1 ;
-(void)_saRequestCompleted:(id)arg1 ;
-(void)_reallyCommitOrSaveMetrics:(id)arg1 ;
-(void)_startNonSpeechRequest:(id)arg1 forDelegate:(id)arg2 ;
-(void)_startNonSpeechRequest:(id)arg1 forDelegate:(id)arg2 options:(id)arg3 suppressAlert:(BOOL)arg4 ;
-(void)_reallyHandleNewStartRequest:(id)arg1 ;
-(void)_startSpeechRequestWithDelegate:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SABaseCommand *)_lastRequest;
-(void)_sendRollbackCommandForCommand:(id)arg1 ;
-(void)_updateSpeechOptions:(id)arg1 forDelegate:(id)arg2 allowUpdateInSpeechCompletion:(BOOL)arg3 ;
-(void)_sendCommandToServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_clearAccount;
-(id)_managedStore;
-(void)_preheatWithStyle:(long long)arg1 ;
-(void)_forceAudioSessionActive;
-(void)_setLanguageCode:(id)arg1 ;
-(void)_setLockState:(BOOL)arg1 showingLockScreen:(BOOL)arg2 ;
-(void)_setStarkRestriction:(BOOL)arg1 ;
-(void)_setVoiceOverIsActive:(BOOL)arg1 ;
-(void)_endSessionForDelegate:(id)arg1 ;
-(void)_startRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)_startDirectActionRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)_startContinuationRequestWithUserInfo:(id)arg1 delegate:(id)arg2 ;
-(void)_prepareAudioSessionForDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)_startSpeechRequestWithDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)_startRecordingForPendingSpeechRequestForDelegate:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startSpeechPronunciationRequestWithDelegate:(id)arg1 withOptions:(id)arg2 pronunciationContext:(id)arg3 ;
-(void)_startSpeechRequestWithURL:(id)arg1 isNarrowBand:(BOOL)arg2 withDelegate:(id)arg3 ;
-(void)_cancelRequestForDelegate:(id)arg1 ;
-(void)_rollbackRequestForDelegate:(id)arg1 ;
-(void)_startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 delegate:(id)arg4 ;
-(void)_startDictationWithURL:(id)arg1 isNarrowBand:(BOOL)arg2 language:(id)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(void)_startSpeechCorrectionWithText:(id)arg1 forCorrectionContext:(id)arg2 delegate:(id)arg3 ;
-(void)_removeDelegate:(id)arg1 ;
-(void)_stopSpeechWithOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)_cancelSpeechForDelegate:(id)arg1 ;
-(void)_updateSpeechOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)_sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2 ;
-(void)_handleGenericAceCommand:(id)arg1 withDelegate:(id)arg2 interruptOutstandingRequest:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)_rollbackClearContext;
-(void)_setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2 ;
-(void)_setApplicationContext:(id)arg1 ;
-(void)_setApplicationContextForApplicationInfos:(id)arg1 ;
-(void)_setAlertContextDirty;
-(void)_prepareForPhoneCall;
-(void)_telephonyRequestCompleted;
-(void)_markUsefulUserResultPresentationTimestamp:(double)arg1 ;
-(void)_recordInteractionMetrics:(id)arg1 ;
-(void)_fetchSupportedLanguagesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSupportedLanguagesWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteAccountWithIdentifier:(id)arg1 ;
-(id)_activeAccountIdentifier;
-(void)_setActiveAccountIdentifier:(id)arg1 ;
-(void)_destroyActiveAccount;
-(void)_rescheduleValidationRefresh;
-(void)_refreshActivation;
-(id)_managedStoreObjectForKey:(id)arg1 ;
-(void)_setManagedStoreObject:(id)arg1 forKey:(id)arg2 ;
-(void)_syncAnchorKeys:(id)arg1 forceReset:(BOOL)arg2 ;
-(void)_syncNeeded;
-(void)_setUIService:(id)arg1 ;
-(void)_startUpdatingMotionActivity;
-(void)_setSiriActiveFlag:(BOOL)arg1 ;
-(void)_stopUpdatingMotionActivity;
-(void)_recordRequestIndifferentMetrics;
-(void)_sanityCheckAutodownloadedAssetsForced:(BOOL)arg1 ;
-(void)_syncIfNeeded;
-(void)_installedAssetsUpdated;
-(void)assistantSessionWillStartConnection:(id)arg1 ;
-(void)assistantSession:(id)arg1 receivedCommand:(id)arg2 ;
-(void)assistantSession:(id)arg1 receivedError:(id)arg2 ;
-(BOOL)assistantSessionShouldLogVisibleRequestFailure:(id)arg1 forError:(id)arg2 ;
-(BOOL)assistantSessionShouldRestartConnectionOnWiFi:(id)arg1 ;
-(void)assistantSessionConnectionDidReset:(id)arg1 ;
-(BOOL)assistantSessionShouldAttemptRetry:(id)arg1 ;
-(id)assistantSessionCommandsToRestoreStateOnNewConnection:(id)arg1 ;
-(void)assistantSession:(id)arg1 didChangeRequestIdFrom:(id)arg2 toId:(id)arg3 ;
-(void)assistantSession:(id)arg1 didLoadAssistantSyncRequested:(BOOL)arg2 syncAnchors:(id)arg3 ;
-(void)assistantSession:(id)arg1 didOpenConnectionWithPolicyId:(id)arg2 routeId:(id)arg3 connectionDelay:(double)arg4 ;
-(void)assistantSession:(id)arg1 willRetryOnError:(id)arg2 ;
-(void)syncManager:(id)arg1 chunkForKey:(id)arg2 chunkInfo:(id)arg3 ;
-(void)syncManager:(id)arg1 finishedSyncForKeys:(id)arg2 postNotification:(BOOL)arg3 ;
-(void)speechManager:(id)arg1 preheatWithRecordingInfo:(id)arg2 ;
-(void)speechManager:(id)arg1 willStartRecordingAtTimestamp:(double)arg2 ;
-(void)speechManager:(id)arg1 didStartWithRecordingInfo:(id)arg2 ;
-(void)speechManager:(id)arg1 didUpdateRecordingInfo:(id)arg2 ;
-(void)speechManager:(id)arg1 capturedPackets:(id)arg2 totalCount:(long long)arg3 ;
-(void)speechManager:(id)arg1 capturedFingerprint:(id)arg2 duration:(double)arg3 ;
-(void)speechManagerDidDetectMusic:(id)arg1 ;
-(void)speechManagerDidDelayEndpointForMusic:(id)arg1 ;
-(void)speechManager:(id)arg1 updatedAveragePower:(float)arg2 peakPower:(float)arg3 ;
-(void)speechManager:(id)arg1 finishedWithTotalPackets:(long long)arg2 endpointMode:(long long)arg3 ;
-(void)speechManagerDidCancel:(id)arg1 ;
-(void)speechManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)speechManager:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3 ;
-(void)contextManager:(id)arg1 didReceiveNewBackgroundContext:(id)arg2 ;
-(void)locationManager:(id)arg1 wantsToSetRequestOrigin:(id)arg2 ;
-(void)acousticIDHelperDidStartSession:(id)arg1 ;
-(void)acousticIDHelper:(id)arg1 didCompleteSessionSuccessfully:(BOOL)arg2 ;
-(void)UIService:(id)arg1 executeCommandHandler:(/*^block*/id)arg2 ;
-(BOOL)_hasOutstandingRequests;
-(id)_activityHelper;
-(void)_cancelSessionIfIdle;
-(void)_sendCommandIgnoredForCommand:(id)arg1 ;
-(void)_sendCachedLocationInPreparationForSpeech;
-(void)_sendUndoServiceCommands:(id)arg1 toService:(id)arg2 ;
-(void)_sendServiceCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_stopObserveringCallState;
-(void)_saCommandIgnored:(id)arg1 ;
-(void)_saSendCommands:(id)arg1 ;
-(void)_saAssistantDestroyed:(id)arg1 ;
-(void)_saCancelSucceeded:(id)arg1 ;
-(void)_saRollbackSucceeded:(id)arg1 ;
-(void)_saSetClientData:(id)arg1 ;
-(void)_saSetHandoffPayload:(id)arg1 ;
-(void)_saStartLocalRequest:(id)arg1 ;
-(void)_saAddResultObjects:(id)arg1 ;
-(void)_saSyncGetAnchorsResponse:(id)arg1 ;
-(void)_saSyncChunkDenied:(id)arg1 ;
-(void)_saSyncChunkAccepted:(id)arg1 ;
-(void)_sasSpeechRecognized:(id)arg1 ;
-(void)_sasSpeechPartialResult:(id)arg1 ;
-(void)_saStructuredDictationResult:(id)arg1 ;
-(void)_saStructuredDictationFailure:(id)arg1 ;
-(void)_sasSpeechFailure:(id)arg1 ;
-(void)_sasAbortSpeechRequest:(id)arg1 ;
-(void)_saAcknowledgeAlert:(id)arg1 ;
-(void)_saGetRequestOrigin:(id)arg1 ;
-(void)_saHandoffAvailabilityCheck:(id)arg1 ;
-(void)_saSetLatencyDiagnosticConfiguration:(id)arg1 ;
-(void)_saUnhandledObject:(id)arg1 ;
-(void)_saAIRequestSearch:(id)arg1 ;
-(void)_saAISearchCompleted:(id)arg1 ;
-(void)_saAIRetrySearch:(id)arg1 ;
-(BOOL)assistantSessionShouldSetAssistantData:(id)arg1 ;
-(void)_prepareForAppLaunchForRequest:(id)arg1 ;
-(void)setLanguageCode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endSessionForDelegate:(id)arg1 ;
-(void)startRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)startDirectActionRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)startContinuationRequestWithUserInfo:(id)arg1 delegate:(id)arg2 ;
-(void)prepareAudioSessionForDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)startSpeechRequestWithDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)startRecordingForPendingSpeechRequestForDelegate:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSpeechPronunciationRequestWithDelegate:(id)arg1 withOptions:(id)arg2 pronunciationContext:(id)arg3 ;
-(void)startAcousticIDRequestWithDelegate:(id)arg1 withOptions:(id)arg2 context:(id)arg3 ;
-(void)startSpeechRequestWithURL:(id)arg1 isNarrowBand:(BOOL)arg2 withDelegate:(id)arg3 ;
-(void)cancelRequestForDelegate:(id)arg1 ;
-(void)rollbackRequestForDelegate:(id)arg1 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 delegate:(id)arg4 ;
-(void)startDictationWithURL:(id)arg1 isNarrowBand:(BOOL)arg2 language:(id)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(void)startSpeechCorrectionWithText:(id)arg1 forCorrectionContext:(id)arg2 delegate:(id)arg3 ;
-(void)stopSpeechWithOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)updateSpeechOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)handleGenericAceCommand:(id)arg1 withDelegate:(id)arg2 interruptOutstandingRequest:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)fetchSupportedLanguages;
-(void)fetchAccounts:(/*^block*/id)arg1 ;
-(void)fetchActiveAccountIdentifier:(/*^block*/id)arg1 ;
-(void)fetchManagedStoreObjectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchContext:(/*^block*/id)arg1 ;
-(void)openApplicationWithBundleID:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_broadcastCommand:(id)arg1 ;
-(void)_listInstalledServicesWithCompletion:(/*^block*/id)arg1 ;
-(void)setRequestStatistics:(ADRequestStatistics *)arg1 ;
-(void)_clearContext;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_motionManager;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)_requestDidEnd;
-(void)setVoiceOverIsActive:(BOOL)arg1 ;
-(void)recordFailureMetricsForError:(id)arg1 ;
-(void)preheatWithStyle:(long long)arg1 ;
-(void)forceAudioSessionActive;
-(void)setLockState:(BOOL)arg1 showingLockScreen:(BOOL)arg2 ;
-(void)setIsStark:(BOOL)arg1 ;
-(void)recordMetrics:(id)arg1 ;
-(void)rollbackClearContext;
-(void)setApplicationContextForApplicationInfos:(id)arg1 ;
-(void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2 ;
-(void)setAlertContextDirty;
-(void)prepareForPhoneCall;
-(void)telephonyRequestCompleted;
-(void)markUsefulUserResultPresentationTimestamp:(double)arg1 ;
-(void)defrost;
-(void)sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2 ;
-(void)setManagedStoreObject:(id)arg1 forKey:(id)arg2 ;
-(void)deleteAccountWithIdentifier:(id)arg1 ;
-(void)setOutputVoice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)taskmaster:(id)arg1 didReceivePunchoutOutcome:(id)arg2 ;
-(void)_refreshAssistantValidation;
-(void)_requestWillStart;
-(id)_session;
-(id)_locationManager;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(BOOL)isDeviceLocked;
-(void)removeDelegate:(id)arg1 ;
-(id)_accounts;
-(void)setApplicationContext:(id)arg1 ;
-(void)clearContext;
-(id)_account;
@end

