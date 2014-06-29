/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSDGLVoronoiTriangleData : NSObject {

	unsigned long long* _triangleIndexToCellIndexMappingTable;
	unsigned long long* _triangleIndexToCellTriangleIndexMappingTable;
	unsigned long long _triangleIndexToCellMappingTableCount;
	unsigned long long _triangleCount;
	NSArray* _cells;
	CGRect _bounds;

}

@property (nonatomic,readonly) unsigned long long triangleCount;              //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) NSArray * cells;                               //@synthesize cells=_cells - In the implementation block
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (nonatomic,readonly) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
-(void)p_setupDataWithPointCount:(unsigned long long)arg1 clippedToRect:(CGRect)arg2 percentOfCellsToSplit:(double)arg3 ;
-(unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)arg1 ;
-(id)initWithPoints:(unsigned long long)arg1 clippedToRect:(CGRect)arg2 percentOfCellsToSplit:(double)arg3 ;
-(id)cellFromTriangleIndex:(unsigned long long)arg1 ;
-(unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id).cxx_construct;
-(unsigned long long)cellCount;
-(unsigned long long)triangleCount;
-(id)cells;
@end
