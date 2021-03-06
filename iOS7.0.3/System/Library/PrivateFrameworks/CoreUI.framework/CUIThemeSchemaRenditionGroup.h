/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {

	CUIRenditionKey* _baseKey;
	NSArray* _renditions;
	int _partFeatures;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
+(id)renditionGroupsForRenditions:(id)arg1 partFeatures:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithRenditions:(id)arg1 partFeatures:(int)arg2 ;
-(id)renditions;
-(void)setRenditions:(id)arg1 ;
-(id)themeSchemaLayers;
-(int)partFeatures;
-(id)_renditionsSortedIntoLayers;
-(id)_layerNameForDrawingLayer:(int)arg1 ;
-(id)_layerNameForState:(int)arg1 ;
-(id)baseKey;
-(id)mutablePSDImageRef;
@end

