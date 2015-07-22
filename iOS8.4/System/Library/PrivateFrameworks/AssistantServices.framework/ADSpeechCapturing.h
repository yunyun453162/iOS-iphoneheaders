/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ADSpeechCapturing <NSObject>
@required
-(void)cancelSpeechCaptureSuppressingAlert:(BOOL)arg1;
-(void)setIsDriving:(BOOL)arg1;
-(void)setSpeechEvent:(long long)arg1 useBorealisBuffer:(BOOL)arg2 deviceIdentifier:(id)arg3;
-(void)setFingerprintingEnabled:(BOOL)arg1;
-(void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(BOOL)arg2;
-(void)setSpeechWasRecognizedForElapsedTime:(double)arg1;
-(void)forceSuccessAudioAlertOnStop;
-(void)setDelegate:(id)arg1;
-(void)setUseAutomaticEndpointing:(BOOL)arg1;
-(void)setAudioFileType:(long long)arg1;
-(void)releaseAudioSession;

@end
