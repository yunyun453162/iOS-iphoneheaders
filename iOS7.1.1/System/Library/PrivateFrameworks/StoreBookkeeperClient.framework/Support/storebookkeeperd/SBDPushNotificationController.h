/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:10:32 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSURL, NSArray, NSObject, APSConnection, NSMutableArray, NSNumber;

@interface SBDPushNotificationController : NSObject <APSConnectionDelegate> {

	NSString* _environment;
	NSMutableDictionary* _temporaryConnectionsByEnvironment;
	NSURL* _typeRegistrationURL;
	NSArray* _enabledDomains;
	BOOL _pushEnabled;
	BOOL _bagLoaded;
	BOOL _registrationUpdateScheduled;
	id _fakeNotificationObserver;
	NSObject<OS_dispatch_queue>* _queue;
	APSConnection* _connection;
	NSMutableDictionary* _weakDomainDelegates;
	NSMutableDictionary* _pendingRequests;
	NSMutableArray* _registeredDomains;
	NSNumber* _registeredAccountID;

}

@property (retain) NSArray * enabledDomains; 
@property (readonly) NSObject<OS_dispatch_queue> * queue;                    //@synthesize queue=_queue - In the implementation block
@property (readonly) APSConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (readonly) NSMutableDictionary * weakDomainDelegates;              //@synthesize weakDomainDelegates=_weakDomainDelegates - In the implementation block
@property (readonly) NSMutableDictionary * pendingRequests;                  //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (readonly) NSMutableArray * registeredDomains;                     //@synthesize registeredDomains=_registeredDomains - In the implementation block
@property (readonly) NSNumber * registeredAccountID;                         //@synthesize registeredAccountID=_registeredAccountID - In the implementation block
+(BOOL)deviceSupportsPushNotifications;
-(void)updateNotificationRegistrationsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setDelegate:(id)arg1 forBookkeeperDomain:(id)arg2 ;
-(void)setEnabledDomains:(id)arg1 ;
-(void)_startServiceConnectionsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_onQueue_updateConnectionTopicsAndStoreRegistrations;
-(void)updateStoreBookkeeperNotificationRegistration:(/*^block*/ id)arg1 ;
-(void)_onQueue_updateStoreBookkeeperNotificationRegistration:(/*^block*/ id)arg1 ;
-(void)_onQueue_updateStoreBookkeeperNotificationRegistrationForDomain:(id)arg1 optIn:(BOOL)arg2 accountID:(id)arg3 withCompletionHandler:(/*^block*/ id)arg4 ;
-(BOOL)isEnabledForDomain:(id)arg1 ;
-(id)enabledDomains;
-(id)weakDomainDelegates;
-(id)pendingRequests;
-(id)registeredDomains;
-(id)registeredAccountID;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)connection;
-(id)queue;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
@end

