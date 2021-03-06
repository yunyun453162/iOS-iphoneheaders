/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController {

	NSString* _inputMode;

}

@property (nonatomic,copy) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setInputMode:(NSString *)arg1 ;
-(NSString *)inputMode;
-(void)setSoftwareLayout:(id)arg1 ;
-(id)newSpecifiers;
-(id)specifiers;
@end

