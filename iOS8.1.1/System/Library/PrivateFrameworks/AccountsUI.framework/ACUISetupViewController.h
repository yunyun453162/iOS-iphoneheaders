/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController {

	BOOL _didAttemptDataclassSetup;
	BOOL _shouldForceMailSetup;

}
-(id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3 ;
-(void)_dismissAndNotifyParent;
-(void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2 ;
-(void)finishedAccountSetup;
@end
