/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDPrototypeChange <NSObject>
@property (readonly) bool prototypeIsBeingReplaced; 
@property (readonly) bool prototypeIsBeingModified; 
@property (readonly) bool prototypeIsBeingDeleted; 
@property (readonly) id prototype; 
@property (readonly) id replacement; 
@property (readonly) <TSSPropertySource> * propertiesBeforeChange; 
@property (readonly) <TSSPropertySource> * propertiesAfterChange; 
@required
-(bool)prototypeIsBeingReplaced;
-(bool)prototypeIsBeingModified;
-(id)propertiesBeforeChange;
-(id)propertiesAfterChange;
-(bool)prototypeIsBeingDeleted;
-(id)prototype;
-(bool)propertyIsChanging:(int)arg1;
-(bool)propertiesAreChanging:(id)arg1;
-(id)replacement;
@end

