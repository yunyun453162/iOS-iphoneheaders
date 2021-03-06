/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying> {

	CGSize mSize;
	CGAffineTransform mTransform;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform transform; 
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 ;
-(id)initWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 ;
-(id)geometryByTranslatingBy:(CGPoint)arg1 ;
-(id)infoGeometry;
-(id)initWithInfoGeometry:(id)arg1 ;
-(CGAffineTransform)fullTransform;
-(char)differsInMoreThanTranslationFrom:(id)arg1 ;
-(CGAffineTransform)inverseTransform;
-(CGAffineTransform)transformByConcatenatingTransformTo:(CGAffineTransform)arg1 ;
-(id)geometryByTransformingBy:(CGAffineTransform)arg1 ;
-(id)geometryByOutsettingBy:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)size;
-(id)init;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)center;
-(CGAffineTransform)transform;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

