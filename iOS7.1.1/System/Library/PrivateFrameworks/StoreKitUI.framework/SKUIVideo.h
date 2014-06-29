/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, SKUIArtworkList;

@interface SKUIVideo : NSObject {

	NSURL* _url;
	NSString* _title;
	NSString* _runtime;
	SKUIArtworkList* _artworks;

}

@property (nonatomic,readonly) NSURL * URL;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * runtime;                      //@synthesize runtime=_runtime - In the implementation block
@property (nonatomic,readonly) SKUIArtworkList * artworks;              //@synthesize artworks=_artworks - In the implementation block
-(id)title;
-(id)URL;
-(void).cxx_destruct;
-(id)artworks;
-(id)initWithVideoDictionary:(id)arg1 ;
-(id)runtime;
@end
