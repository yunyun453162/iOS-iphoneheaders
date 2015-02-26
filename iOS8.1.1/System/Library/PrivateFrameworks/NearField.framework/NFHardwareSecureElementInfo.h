/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NFHardwareSecureElementInfo : NSObject {

	BOOL _restrictedMode;
	unsigned long long _OSVersion;
	unsigned long long _firmwareVersion;
	unsigned long long _hardwareVersion;
	unsigned long long _deviceType;
	unsigned long long _sequenceCounter;
	unsigned long long _referenceCounter;
	unsigned long long _osid;
	unsigned long long _otherOSValid;
	unsigned long long _OSMode;
	unsigned long long _signingKeyType;
	unsigned long long _migrationState;
	unsigned long long _migrationPackages;
	unsigned long long _migrationInstances;
	NSString* _platformIdentifier;
	NSString* _serialNumber;

}

@property (nonatomic,readonly) unsigned long long OSVersion;                       //@synthesize OSVersion=_OSVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                 //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long hardwareVersion;                 //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceCounter;                 //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long referenceCounter;                //@synthesize referenceCounter=_referenceCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long osid;                            //@synthesize osid=_osid - In the implementation block
@property (nonatomic,readonly) unsigned long long otherOSValid;                    //@synthesize otherOSValid=_otherOSValid - In the implementation block
@property (nonatomic,readonly) BOOL restrictedMode;                                //@synthesize restrictedMode=_restrictedMode - In the implementation block
@property (nonatomic,readonly) unsigned long long OSMode;                          //@synthesize OSMode=_OSMode - In the implementation block
@property (nonatomic,readonly) unsigned long long signingKeyType;                  //@synthesize signingKeyType=_signingKeyType - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationState;                  //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationPackages;               //@synthesize migrationPackages=_migrationPackages - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationInstances;              //@synthesize migrationInstances=_migrationInstances - In the implementation block
@property (nonatomic,readonly) NSString * platformIdentifier;                      //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                            //@synthesize serialNumber=_serialNumber - In the implementation block
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)serialNumber;
-(unsigned long long)OSVersion;
-(unsigned long long)firmwareVersion;
-(unsigned long long)sequenceCounter;
-(unsigned long long)referenceCounter;
-(unsigned long long)osid;
-(unsigned long long)otherOSValid;
-(BOOL)restrictedMode;
-(unsigned long long)OSMode;
-(unsigned long long)signingKeyType;
-(unsigned long long)migrationState;
-(unsigned long long)migrationPackages;
-(unsigned long long)migrationInstances;
-(NSString *)platformIdentifier;
-(unsigned long long)deviceType;
-(unsigned long long)hardwareVersion;
@end
