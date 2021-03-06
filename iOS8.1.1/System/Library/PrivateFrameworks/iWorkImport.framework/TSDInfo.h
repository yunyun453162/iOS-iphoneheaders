/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class TSDInfoGeometry;


@protocol TSDInfo <NSObject,TSKModel,TSPCopying,TSDInfoUsingObjectPlaceholderGeometry>
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@optional
-(id)uuidPathPrefixComponentsProvider;

@required
-(BOOL)isThemeContent;
-(Class)repClass;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
-(void)setParentInfo:(id)arg1;
-(void)setOwningAttachment:(id)arg1;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(id)arg1;
-(Class)layoutClass;

@end

