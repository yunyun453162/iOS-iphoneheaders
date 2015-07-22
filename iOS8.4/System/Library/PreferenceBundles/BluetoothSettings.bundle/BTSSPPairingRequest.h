/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BluetoothDevice, PSSpecifier, UIAlertView;

@interface BTSSPPairingRequest : NSObject {

	BluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertView* _alert;
	id _delegate;
	int _pairingStyle;

}
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)show;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
-(id)sanitizeNameForAlert:(id)arg1 ;
@end
