/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@class GEOActiveTileSet, VKTimer, VKTilePool, _VKTileSetBackedTileSourceTimerTarget;

@interface VKTileSetBackedTileSource : VKTileSource {

	GEOActiveTileSet* _tileSet;
	GEOTileKey _downloadTemplate;
	unsigned _minimumDownloadZoomLevel;
	unsigned _maximumDownloadZoomLevel;
	VKTimer* _expirationTimer;
	VKTilePool* _expiredTilePool;
	NSRange _zoomLevelRange;
	_VKTileSetBackedTileSourceTimerTarget* _timerTarget;

}

@property (nonatomic,retain) GEOActiveTileSet * tileSet;              //@synthesize tileSet=_tileSet - In the implementation block
-(void)dealloc;
-(long long)tileSize;
-(void)setStyleManager:(id)arg1 ;
-(long long)minimumZoomLevel;
-(long long)maximumZoomLevel;
-(id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned)arg2 locale:(id)arg3 ;
-(void)setTileSet:(GEOActiveTileSet *)arg1 ;
-(void)setClient:(id)arg1 ;
-(void)clearCaches;
-(long long)defaultMinimumZoomLevel;
-(unsigned long long)mapLayerForZoomLevelRange;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2 ;
-(unsigned)minimumDownloadZoomLevel;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(unsigned)maximumDownloadZoomLevel;
-(id)tileLoader;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(void)fetchedTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(GEOActiveTileSet *)tileSet;
-(long long)defaultMaximumZoomLevel;
-(BOOL)expires;
-(double)_nextTileExpirationDate;
-(void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(BOOL)arg2 ;
-(double)_expirationInterval;
-(void)_expireTiles;
@end
