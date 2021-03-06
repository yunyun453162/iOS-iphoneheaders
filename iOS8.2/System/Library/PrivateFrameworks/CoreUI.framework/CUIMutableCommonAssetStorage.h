/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUICommonAssetStorage.h>

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage
-(void)setVersionString:(const char*)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setColorSpaceID:(unsigned)arg1 ;
-(void)setAsset:(id)arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3 ;
-(void)removeAssetForKey:(const void*)arg1 withLength:(unsigned long)arg2 ;
-(void)_setZeroCodeInfo:(SCD_Struct_CU15)arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3 inTree:(const void*)arg4 ;
-(char)writeToDiskAndCompact:(char)arg1 ;
-(void)setKeyFormatData:(id)arg1 ;
-(void)setKeySemantics:(int)arg1 ;
-(void)setStorageVersion:(unsigned)arg1 ;
-(void)setSchemaVersion:(unsigned)arg1 ;
-(void)setRenditionCount:(unsigned)arg1 ;
-(void)setAssociatedChecksum:(unsigned)arg1 ;
-(void)setAsset:(id)arg1 forKey:(id)arg2 ;
-(void)setColor:(rgbquad)arg1 forName:(const char*)arg2 excludeFromFilter:(char)arg3 ;
-(void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3 ;
-(void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2 ;
-(void)removeAssetForKey:(id)arg1 ;
-(void)setRenditionKey:(const renditionkeytoken*)arg1 hotSpot:(CGPoint)arg2 forName:(const char*)arg3 ;
-(void)setZeroCodeGlyphInformation:(SCD_Struct_CU15)arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3 ;
-(void)setZeroCodeBezelInformation:(SCD_Struct_CU15)arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3 ;
-(char)writeToDisk;
-(void)_setConstantName:(id)arg1 displayName:(id)arg2 forID:(unsigned)arg3 inDebugTree:(void*)arg4 ;
-(void)setConstantName:(id)arg1 displayName:(id)arg2 forElementID:(int)arg3 ;
-(void)setConstantName:(id)arg1 displayName:(id)arg2 forPartID:(int)arg3 ;
-(void)setUuid:(id)arg1 ;
@end

