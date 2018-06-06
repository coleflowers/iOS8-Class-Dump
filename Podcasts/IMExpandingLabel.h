/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@protocol IMExpandingLabelDelegate;
@class CAGradientLayer, UITextView, NSString, NSDictionary, UIButton;

@interface IMExpandingLabel : UIView {

	CAGradientLayer* _gradientLayer;
	id _gradientClearColor;
	id _gradientSemiClearColor;
	id _gradientSolidColor;
	BOOL _expanded;
	BOOL _hasGradient;
	BOOL _fitsWithinLineLimit;
	UITextView* _textView;
	NSString* _text;
	NSDictionary* _textAttributes;
	unsigned long long _numberOfLines;
	long long _textMode;
	UIButton* _moreButton;
	double _gradientHeight;
	id<IMExpandingLabelDelegate> _delegate;
	unsigned long long _languageDirection;

}

@property (nonatomic,retain) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;                               //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,nonatomic) unsigned long long numberOfLines;                          //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long textMode;                                        //@synthesize textMode=_textMode - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                           //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL hasGradient;                                          //@synthesize hasGradient=_hasGradient - In the implementation block
@property (assign,nonatomic) double gradientHeight;                                     //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IMExpandingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL fitsWithinLineLimit;                                  //@synthesize fitsWithinLineLimit=_fitsWithinLineLimit - In the implementation block
@property (assign,nonatomic) unsigned long long languageDirection;                      //@synthesize languageDirection=_languageDirection - In the implementation block
-(void)setMoreButtonFont:(id)arg1 ;
-(unsigned long long)maximumNumberOfLinesThatFitHeight:(double)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)_font;
-(void)setMoreButton:(UIButton *)arg1 ;
-(void)setHasGradient:(BOOL)arg1 ;
-(void)setFitsWithinLineLimit:(BOOL)arg1 ;
-(BOOL)fitsWithinLineLimit;
-(unsigned long long)languageDirection;
-(void)moreButtonTapped:(id)arg1 ;
-(long long)textMode;
-(void)setLanguageDirection:(unsigned long long)arg1 ;
-(void)setTextMode:(long long)arg1 ;
-(UIButton *)moreButton;
-(double)heightForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IMExpandingLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IMExpandingLabelDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isScrollEnabled;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(BOOL)isExpanded;
-(unsigned long long)numberOfLines;
-(void)setExpanded:(BOOL)arg1 ;
-(UITextView *)textView;
-(BOOL)hasGradient;
-(void)setGradientHeight:(double)arg1 ;
-(double)gradientHeight;
@end

