/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:54:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessoryUpdaterBundles/AppleDigitalAVAdapterUpdater.bundle/AppleDigitalAVAdapterUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileAssetUpdater/MobileAssetUpdater.h>

@class NSString, NSURL;

@interface AppleSTDP20XXUpdater : MobileAssetUpdater {

	char _allowMissingDevice;
	unsigned char _firmwareVersionMajor;
	unsigned char _firmwareVersionMinor;
	NSString* _flashDriverFilename;
	NSString* _firmwareUpdateFilename;
	NSURL* _flashDriverURL;
	NSURL* _firmwareUpdateURL;
	char _isLoadingFlasher;
	unsigned _flasherLength;
	unsigned _firmwareLength;
	/*^block*/id _progressHandler;
	NSString* _firmewareUpdateFilename;

}

@property (readonly) char allowMissingDevice;                                //@synthesize allowMissingDevice=_allowMissingDevice - In the implementation block
@property (nonatomic,retain) NSString * flashDriverFilename;                 //@synthesize flashDriverFilename=_flashDriverFilename - In the implementation block
@property (nonatomic,retain) NSString * firmwareUpdateFilename;              //@synthesize firmewareUpdateFilename=_firmewareUpdateFilename - In the implementation block
@property (nonatomic,retain) NSURL * flashDriverURL;                         //@synthesize flashDriverURL=_flashDriverURL - In the implementation block
@property (nonatomic,retain) NSURL * firmwareUpdateURL;                      //@synthesize firmwareUpdateURL=_firmwareUpdateURL - In the implementation block
-(id)initWithAssetType:(id)arg1 allowMissing:(char)arg2 ;
-(int)readFirmwareVersion:(unsigned long)arg1 ;
-(void)setFlashDriverFilename:(NSString *)arg1 ;
-(NSString *)flashDriverFilename;
-(void)setFirmwareUpdateFilename:(NSString *)arg1 ;
-(void)setFlashDriverURL:(NSURL *)arg1 ;
-(NSString *)firmwareUpdateFilename;
-(void)setFirmwareUpdateURL:(NSURL *)arg1 ;
-(NSURL *)firmwareUpdateURL;
-(char)shouldApplyFirmware;
-(char)allowMissingDevice;
-(NSURL *)flashDriverURL;
-(id)updateFirmware:(/*^block*/id)arg1 ;
-(id)loadFlasher:(/*^block*/id)arg1 ;
-(void)progressUpdate:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
@end
