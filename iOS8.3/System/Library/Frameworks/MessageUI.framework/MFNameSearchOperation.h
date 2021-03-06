/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:59:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/_MFAddressBookSearchOperation.h>
#import <MessageUI/ABPredicateDelegate.h>

@class NSString;

@interface MFNameSearchOperation : _MFAddressBookSearchOperation <ABPredicateDelegate> {

	CFArrayRef _uids;
	CFArrayRef _addresses;
	CFArrayRef _identifiers;
	CFArrayRef _properties;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 ;
-(char)predicateShouldContinue:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(CFArrayRef)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const _CFArray*)arg2 identifiers:(const _CFArray*)arg3 properties:(const _CFArray*)arg4 ;
-(void)dealloc;
@end

