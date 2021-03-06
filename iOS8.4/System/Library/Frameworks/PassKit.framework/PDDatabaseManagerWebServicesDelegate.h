/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PDDatabaseManagerWebServicesDelegate <NSObject>
@required
-(void)handleInsertion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(BOOL)arg4 source:(long long)arg5;
-(void)handleModification:(id)arg1 webService:(id)arg2 pushEnabled:(BOOL)arg3 source:(long long)arg4;
-(void)handleDeletion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(BOOL)arg4;
-(void)handlePushEnabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;
-(void)handlePushDisabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;

@end

