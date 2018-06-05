/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSDictionary, NSString, NSArray, UIView, UIImageView, UIImage, UILabel;

@interface SearchCompletionGlyphViewLayout : NSObject {

	NSDictionary* _titleLabelTextAttributes;
	NSDictionary* _subtitleLabelTextAttributes;
	NSDictionary* _boldTitleLabelTextAttributes;
	NSDictionary* _boldSubtitleLabelTextAttributes;
	NSString* _titleText;
	NSArray* _titleBoldRanges;
	NSString* _titleLocalityText;
	NSString* _subtitleText;
	NSArray* _subtitleBoldRanges;
	NSString* _subtitleLocalityText;
	UIView* _containerView;
	UIImageView* _glyphImageView;
	UIImage* _glyph;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned long long _state;
	UIView* _alternateGlyphAreaView;
	CGSize _alternateGlyphAreaViewSize;

}

@property (nonatomic,copy) NSString * titleText;                                                //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSArray * titleBoldRanges;                                           //@synthesize titleBoldRanges=_titleBoldRanges - In the implementation block
@property (nonatomic,copy) NSString * titleLocalityText;                                        //@synthesize titleLocalityText=_titleLocalityText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                             //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSArray * subtitleBoldRanges;                                        //@synthesize subtitleBoldRanges=_subtitleBoldRanges - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalityText;                                     //@synthesize subtitleLocalityText=_subtitleLocalityText - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImage * glyph;                                                   //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * glyphImageView;                                    //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIView * alternateGlyphAreaView;                                   //@synthesize alternateGlyphAreaView=_alternateGlyphAreaView - In the implementation block
@property (assign,nonatomic) CGSize alternateGlyphAreaViewSize;                                 //@synthesize alternateGlyphAreaViewSize=_alternateGlyphAreaViewSize - In the implementation block
@property (nonatomic,readonly) NSDictionary * titleLabelTextAttributes;                         //@synthesize titleLabelTextAttributes=_titleLabelTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * subtitleLabelTextAttributes;                      //@synthesize subtitleLabelTextAttributes=_subtitleLabelTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * boldTitleLabelTextAttributes;                     //@synthesize boldTitleLabelTextAttributes=_boldTitleLabelTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * boldSubtitleLabelTextAttributes;                  //@synthesize boldSubtitleLabelTextAttributes=_boldSubtitleLabelTextAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double minimumRequiredHeight; 
@property (nonatomic,readonly) double leftInset; 
@property (nonatomic,readonly) double titleBaselineFromTopEdgeWhenSubtitlePresent; 
@property (nonatomic,readonly) double titleBaselineFromTopEdgeWhenNoSubtitle; 
@property (nonatomic,readonly) double subtitleBaselineFromTitleBaseline; 
@property (nonatomic,readonly) double titleBaselineToBottomEdgeWhenNoSubtitle; 
@property (nonatomic,readonly) double subtitleBaselineToBottomEdge; 
+(id)unsafeBoldCharacterSet;
+(void)initialize;
-(void)setStateFromTableViewCell:(id)arg1 ;
-(void)setGlyph:(UIImage *)arg1 ;
-(NSDictionary *)titleLabelTextAttributes;
-(void)setAlternateGlyphAreaView:(UIView *)arg1 ;
-(UIView *)alternateGlyphAreaView;
-(void)setAlternateGlyphAreaViewSize:(CGSize)arg1 ;
-(void)_noteTextAttributesAreNoLongerValid;
-(NSDictionary *)boldTitleLabelTextAttributes;
-(NSDictionary *)subtitleLabelTextAttributes;
-(NSDictionary *)boldSubtitleLabelTextAttributes;
-(UIImageView *)glyphImageView;
-(NSString *)titleLocalityText;
-(NSString *)subtitleLocalityText;
-(double)titleBaselineFromTopEdgeWhenSubtitlePresent;
-(id)newAttributedSubtitleText;
-(double)subtitleBaselineFromTitleBaseline;
-(BOOL)_usesSmallText;
-(double)subtitleBaselineToBottomEdge;
-(double)titleBaselineFromTopEdgeWhenNoSubtitle;
-(double)titleBaselineToBottomEdgeWhenNoSubtitle;
-(double)minimumRequiredHeight;
-(NSArray *)titleBoldRanges;
-(void)setTitleBoldRanges:(NSArray *)arg1 ;
-(void)setTitleLocalityText:(NSString *)arg1 ;
-(NSArray *)subtitleBoldRanges;
-(void)setSubtitleBoldRanges:(NSArray *)arg1 ;
-(void)setSubtitleLocalityText:(NSString *)arg1 ;
-(CGSize)alternateGlyphAreaViewSize;
-(UIImage *)glyph;
-(void)dealloc;
-(id)init;
-(UIView *)containerView;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)layout;
-(UILabel *)subtitleLabel;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(double)leftInset;
-(NSString *)titleText;
@end
