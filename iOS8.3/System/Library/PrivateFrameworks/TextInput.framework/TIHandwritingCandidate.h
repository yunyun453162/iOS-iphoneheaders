/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:49:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

	unsigned long long _uniqueID;
	unsigned long long _completionUniqueID;

}

@property (nonatomic,readonly) unsigned long long uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long completionUniqueID;              //@synthesize completionUniqueID=_completionUniqueID - In the implementation block
+(int)type;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isInlineCompletionCandidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(unsigned long long)completionUniqueID;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4 ;
-(unsigned long long)uniqueID;
@end
