/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned length; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithLength:(unsigned)arg1 ;
+(id)dataWithCapacity:(unsigned)arg1 ;
-(void)mf_convertNetworkLineEndingsToUnixInRange:(NSRange)arg1 ;
-(void)mf_makeImmutable;
-(void)mf_appendCString:(const char*)arg1 ;
-(void)mf_convertNetworkLineEndingsToUnix;
-(void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2 ;
-(void)abAppendString:(id)arg1 ;
-(char)_isCompact;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(Class)classForCoder;
-(void)setData:(id)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(void)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithLength:(unsigned)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned)arg3 ;
-(void)increaseLengthBy:(unsigned)arg1 ;
@end
