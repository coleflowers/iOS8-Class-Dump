/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>
#import <Podcasts/AEHighlightedTextLabelTextViewDelegate.h>

@class AEHighlightedTextLabelTextView, AEAnnotation, UIFont, IMTheme, AEHighlightRenderingController, NSString;

@interface AEHighlightedTextLabel : UIView <AEHighlightedTextLabelTextViewDelegate> {

	AEHighlightedTextLabelTextView* _textView;
	AEAnnotation* _annotation;
	long long _numberOfLines;
	double _fullLineWidth;
	UIFont* _font;
	IMTheme* _theme;
	BOOL _generateHighlightAsynchronously;
	BOOL _useOldUnderlineMetrics;
	AEHighlightRenderingController* _renderingController;

}

@property (nonatomic,retain) AEAnnotation * annotation;                                         //@synthesize annotation=_annotation - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                           //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) double fullLineWidth;                                              //@synthesize fullLineWidth=_fullLineWidth - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                     //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) IMTheme * theme;                                                   //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) BOOL useOldUnderlineMetrics;                                       //@synthesize useOldUnderlineMetrics=_useOldUnderlineMetrics - In the implementation block
@property (nonatomic,retain) AEHighlightRenderingController * renderingController;              //@synthesize renderingController=_renderingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForAnnotation:(id)arg1 font:(id)arg2 width:(double)arg3 numberOfLines:(unsigned long long)arg4 ;
+(unsigned long long)possibleLineLengthForAnnotation:(id)arg1 size:(CGSize)arg2 ;
+(void)collapseNewlinesForMutableAttributedString:(id)arg1 ;
-(void)drawLabelInRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 generateHighlightAsynchronously:(BOOL)arg2 ;
-(AEHighlightRenderingController *)renderingController;
-(BOOL)useOldUnderlineMetrics;
-(void)clearHighlights;
-(double)fullLineWidth;
-(void)setFullLineWidth:(double)arg1 ;
-(void)setUseOldUnderlineMetrics:(BOOL)arg1 ;
-(void)setRenderingController:(AEHighlightRenderingController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)textColor;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(AEAnnotation *)annotation;
-(void)setAnnotation:(AEAnnotation *)arg1 ;
-(IMTheme *)theme;
-(void)setTheme:(IMTheme *)arg1 ;
@end

