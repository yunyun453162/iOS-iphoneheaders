/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassbookSettingsDelegate <NSObject>
@required
-(void)settingsControllerRequestsReloadSpecifiers:(id)arg1;
-(void)settingsController:(id)arg1 requestsReloadSpecifier:(id)arg2;
-(void)settingsController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)settingsController:(id)arg1 requestsAddCardPreflightWithCompletion:(/*^block*/id)arg2;
-(void)settingsController:(id)arg1 requestsDetailViewControllerForPass:(id)arg2 animated:(BOOL)arg3;
-(void)settingsController:(id)arg1 requestsPushViewController:(id)arg2 animated:(BOOL)arg3;

@end
