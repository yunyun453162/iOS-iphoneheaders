/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface CALayerArray : NSArray {

	CALayerArrayIvars* _ivars;

}
-(void)getObjects:(id*)arg1 ;
-(id)initWithLayers:(id*)arg1 count:(unsigned long)arg2 retain:(char)arg3 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_CA21*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
