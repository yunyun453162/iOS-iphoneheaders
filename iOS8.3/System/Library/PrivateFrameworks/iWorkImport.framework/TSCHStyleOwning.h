/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(id)chartInfo;
-(int)defaultPropertyForGeneric:(int)arg1;
-(int)specificPropertyForGeneric:(int)arg1;
-(char)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(char)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(char)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)operationPropertyNameFromGenericProperty:(int)arg1;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(char)arg2;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1;
-(id)defaultProperties;

@end
