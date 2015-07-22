/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLWebViewPrintPageHelper.h>

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper {

	NSMutableArray* _nodes;
	UIWebPaginationInfo* _paginationInfo;

}
-(id)_htmlPageXPath;
-(id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL*)arg2 ;
-(id)_currentNodes;
-(void)dealloc;
-(long long)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
@end
