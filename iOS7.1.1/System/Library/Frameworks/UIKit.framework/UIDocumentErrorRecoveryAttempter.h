/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject {

	UIDocument* _document;
	id _wrappedRecoveryAttempter;
	/*^block*/ id _continuerOrNil;
	long long _silentRecoveryOptionIndex;
	/*^block*/ id _appModalRecoveryAttempter;
	/*^block*/ id _recoveryCancelerOrNil;
	struct {
		unsigned attemptedRecovery : 1;
	}  _errorRecoveryAttempterFlags;

}
-(void)dealloc;
-(bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(bool)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2 ;
-(void)cancelRecovery;
-(id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2 ;
-(id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(/*^block*/ id)arg3 recoveryCanceler:(/*^block*/ id)arg4 ;
@end

