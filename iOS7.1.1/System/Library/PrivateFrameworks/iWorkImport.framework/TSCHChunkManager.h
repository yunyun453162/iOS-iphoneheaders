/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSCHChartInfo;

@interface TSCHChunkManager : NSObject {

	TSCHChartInfo* mChartInfo;
	unsigned long long* mSeriesMap;
	unsigned long long* mValuesMap;
	unsigned long long mChunkMapCount;

}
+(id)p_makeAllChartDeliveryStylesLocalized:(bool)arg1 ;
+(id)p_allLocalizedChartDeliveryStyles;
+(id)p_allNonLocalizedChartDeliveryStyles;
+(id)p_allChartDeliveryStylesLocalized:(bool)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)arg1 ;
-(unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)arg1 ;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(bool)hasBackgroundLayerForPieChart;
-(unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(bool)lastChunkForSeriesIndex:(unsigned long long)arg1 currentChunk:(unsigned long long)arg2 chunkStyle:(unsigned long long)arg3 ;
-(void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned long long)arg2 finalTexture:(bool)arg3 seriesStart:(long long*)arg4 seriesCount:(long long*)arg5 ;
-(void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned long long)arg2 chunkIndex:(unsigned long long)arg3 finalTexture:(bool)arg4 valueStart:(long long*)arg5 valueCount:(long long*)arg6 ;
-(bool)p_hasBackgroundFill;
-(unsigned long long)p_chunkCountForChartDeliveryStyle:(unsigned long long)arg1 ;
-(bool)p_titleOn;
-(bool)p_legendOn;
-(bool)p_isPie;
-(bool)p_isMultiData;
-(void)p_updateCacheForSeries;
-(void)p_updateCacheForSets;
-(void)p_updateCacheForElementsInSeries;
-(void)p_updateCacheForElementsInSets;
-(bool)p_canAddChunkForSeries:(id)arg1 valueIndex:(long long)arg2 ;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2 ;
-(void)clearCaches;
-(void)dealloc;
-(void)updateCache:(unsigned long long)arg1 ;
@end
