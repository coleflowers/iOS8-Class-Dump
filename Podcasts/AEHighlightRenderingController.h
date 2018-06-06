/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class AENoCopyDictionary;

@interface AEHighlightRenderingController : NSObject {

	AENoCopyDictionary* mDataHighlights;
	AENoCopyDictionary* mLineLayers;
	BOOL addingHighlights;
	BOOL _useSinglePassRender;
	BOOL _canUseFilters;
	BOOL invertedContent;
	BOOL _addingHighlights;

}

@property (assign,nonatomic) BOOL useSinglePassRender;                                     //@synthesize useSinglePassRender=_useSinglePassRender - In the implementation block
@property (assign,nonatomic) BOOL canUseFilters;                                           //@synthesize canUseFilters=_canUseFilters - In the implementation block
@property (assign,nonatomic) BOOL invertedContent; 
@property (assign,getter=isAddingHighlights,nonatomic) BOOL addingHighlights;              //@synthesize addingHighlights=_addingHighlights - In the implementation block
@property (nonatomic,retain) AENoCopyDictionary * dataHighlights; 
@property (nonatomic,retain) AENoCopyDictionary * lineLayers; 
+(UIEdgeInsets)highlightInsets:(BOOL)arg1 ;
+(UIEdgeInsets)insetsForHighlight:(id)arg1 ;
+(unsigned long long)p_variantForLine:(id)arg1 outOf:(unsigned long long)arg2 isVertical:(BOOL)arg3 ;
+(lineTransformInfo)p_transformInfoForRect:(CGRect)arg1 direction:(int)arg2 ;
+(id)p_underlineFileForHighlightLine:(id)arg1 invertedContent:(BOOL)arg2 isVertical:(BOOL)arg3 ;
+(CGRect)p_currentLineRectForLine:(id)arg1 ofHighlight:(id)arg2 ;
+(CGRect)p_fullLineRectForLine:(id)arg1 ofHighlight:(id)arg2 ;
+(id)p_highlightMaskFileForHighlightLine:(id)arg1 width:(double)arg2 isVertical:(BOOL)arg3 ;
+(id)p_striationFileForHighlightLine:(id)arg1 width:(double)arg2 isVertical:(BOOL)arg3 ;
+(id)p_maskImageForLine:(id)arg1 ofHighlight:(id)arg2 withTransformInfo:(lineTransformInfo)arg3 ;
+(id)p_striationImageForLine:(id)arg1 ofHighlight:(id)arg2 baseMask:(id)arg3 withTransformInfo:(lineTransformInfo)arg4 ;
+(void)p_drawMaskImageForLine:(id)arg1 ofHighlight:(id)arg2 withTransformInfo:(lineTransformInfo)arg3 intoContext:(CGContextRef)arg4 ;
+(void)p_maskToStriationImageForLine:(id)arg1 ofHighlight:(id)arg2 withTransformInfo:(lineTransformInfo)arg3 intoContext:(CGContextRef)arg4 ;
+(id)imageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(BOOL)arg3 isVertical:(BOOL)arg4 ;
+(id)imageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(BOOL)arg3 isVertical:(BOOL)arg4 useSinglePass:(BOOL)arg5 ;
+(id)p_underlineImageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(BOOL)arg3 ;
+(id)p_fastHighlightImageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(BOOL)arg3 ;
+(id)p_highlightImageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(BOOL)arg3 ;
+(UIEdgeInsets)insetsForHighlight:(id)arg1 lineRect:(CGRect)arg2 numberOfLines:(unsigned long long)arg3 ;
+(id)imageForLine:(id)arg1 ofHighlight:(id)arg2 invertedContent:(BOOL)arg3 ;
-(BOOL)invertedContent;
-(void)setInvertedContent:(BOOL)arg1 ;
-(void)setDataHighlights:(AENoCopyDictionary *)arg1 ;
-(void)setLineLayers:(AENoCopyDictionary *)arg1 ;
-(AENoCopyDictionary *)dataHighlights;
-(AENoCopyDictionary *)lineLayers;
-(void)p_renderLine:(id)arg1 ofHighlight:(id)arg2 intoLayer:(id)arg3 ;
-(void)updatedHighlight:(id)arg1 forceRerender:(BOOL)arg2 ;
-(id)p_orderHighlights:(id)arg1 ;
-(id)highlightWithData:(id)arg1 ;
-(void)addHighlight:(id)arg1 forData:(id)arg2 ;
-(void)removeHighlightForData:(id)arg1 ;
-(void)updatedHighlight:(id)arg1 ;
-(id)highlightLayers;
-(id)annotationUuidForHighlightLayer:(id)arg1 ;
-(BOOL)useSinglePassRender;
-(void)setUseSinglePassRender:(BOOL)arg1 ;
-(BOOL)canUseFilters;
-(void)setCanUseFilters:(BOOL)arg1 ;
-(BOOL)isAddingHighlights;
-(void)setAddingHighlights:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
@end

