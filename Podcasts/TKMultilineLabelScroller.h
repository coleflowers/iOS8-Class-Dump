/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Podcasts/TKDummyLayerDelegate.h>

@class TKDummyLayer, NSAttributedString, NSArray, TKTheme, UIFont, UIColor, NSString, UIButton;

@interface TKMultilineLabelScroller : UIScrollView <TKDummyLayerDelegate> {

	CGContextRef _textContext;
	TKDummyLayer* _textLayer;
	NSAttributedString* _attributedString;
	CTFramesetterRef _framesetter;
	CTFrameRef _frame;
	CTLineRef _truncationToken;
	NSAttributedString* _truncationString;
	NSArray* _lines;
	CGPoint* _origins;
	BOOL _needsStringUpdate;
	BOOL _hasMoreText;
	CGSize _oldContentSize;
	CGSize _fullTextSize;
	unsigned char _alignment;
	BOOL _expanded;
	TKTheme* _theme;
	UIFont* _font;
	UIColor* _textColor;
	NSString* _text;
	UIButton* _moreButton;
	double _lineHeightMultiplier;
	UIEdgeInsets _textInsets;

}

@property (nonatomic,retain) TKTheme * theme;                                                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                     //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInsets;                                           //@synthesize textInsets=_textInsets - In the implementation block
@property (assign,nonatomic) unsigned char alignment;                                           //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * text;                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                             //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic) CGSize fullTextSize;                                               //@synthesize fullTextSize=_fullTextSize - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                   //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<TKMultilineLabelScrollerDelegate> delegate; 
@property (assign,nonatomic) double lineHeightMultiplier;                                       //@synthesize lineHeightMultiplier=_lineHeightMultiplier - In the implementation block
@property (assign) CGSize oldContentSize;                                                       //@synthesize oldContentSize=_oldContentSize - In the implementation block
@property (retain) TKDummyLayer * textLayer;                                                    //@synthesize textLayer=_textLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMoreButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withTheme:(id)arg2 ;
-(void)setLineHeightMultiplier:(double)arg1 ;
-(CGSize)fullTextSize;
-(void)tk_drawInContext:(CGContextRef)arg1 ;
-(void)expandText:(id)arg1 ;
-(void)updateAttributedString;
-(void)setFullTextSize:(CGSize)arg1 ;
-(id)attributedStringByTrimmingCharactersInCharacterSet:(id)arg1 withString:(id)arg2 ;
-(double)lineHeightMultiplier;
-(CGSize)oldContentSize;
-(void)setOldContentSize:(CGSize)arg1 ;
-(TKDummyLayer *)textLayer;
-(void)setTextLayer:(TKDummyLayer *)arg1 ;
-(UIButton *)moreButton;
-(void)setAlignment:(unsigned char)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(BOOL)isExpanded;
-(unsigned char)alignment;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(TKTheme *)theme;
-(UIEdgeInsets)textInsets;
-(void)setTheme:(TKTheme *)arg1 ;
@end

