/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBTestRecipe.h>

@class SBAlertItem, NSString;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe> {

	SBAlertItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(id)_wifiBTSSPAlert;
-(id)_wifiDontAskAlert;
-(id)_wifiErrorAlert;
-(id)_wifiIsEnterpriseAlert;
-(id)_wifiPasswordAlert;
-(id)_wifiTrustAlert;
-(id)_accessibilityVoiceOverTouchAlert;
-(id)_accessibilityZoomBuddyAlert;
-(id)_mapsThermalAlert;
-(id)_chatCarrierSMSAlert;
-(id)_chatMessageAlert;
-(id)_chatCMSBAlert;
-(id)_chatMMSDelayedDownloadAlert;
-(id)_chatMMSInformationMissingAlert;
-(id)_assistantEducationAlert;
-(id)_currentAssistantLanguage;
-(void)educationAlertWasDeactivated:(id)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)_anyIcon;
-(id)_anySUDescriptor;
-(id)_mapsApp;
@end

