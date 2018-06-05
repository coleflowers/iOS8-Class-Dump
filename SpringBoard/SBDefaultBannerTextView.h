/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBDateLabelDelegate.h>

@protocol SBBulletinDateLabel;
@class NSAttributedString, UIImage, UILabel, NSString;

@interface SBDefaultBannerTextView : UIView <SBDateLabelDelegate> {

	NSAttributedString* _primaryTextAttributedString;
	NSAttributedString* _primaryTextAttributedStringComponent;
	UIImage* _primaryTextAccessoryImageComponent;
	NSAttributedString* _secondaryTextAttributedString;
	NSAttributedString* _alternateSecondaryTextAttributedString;
	UILabel*<SBBulletinDateLabel> _relevanceDateLabel;
	double _secondaryTextAlpha;
	double _alternateSecondaryTextAlpha;

}

@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,retain) UIImage * primaryTextAccessoryImage; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * alternateSecondaryText; 
@property (nonatomic,readonly) UILabel * relevanceDateLabel;                   //@synthesize relevanceDateLabel=_relevanceDateLabel - In the implementation block
+(id)_defaultRelevanceDateFont;
+(id)_secondaryItalicTextFont;
+(id)_primaryTextFont;
+(id)_secondaryTextFont;
-(void)dateLabelDidChange:(id)arg1 ;
-(UILabel *)relevanceDateLabel;
-(void)setSecondaryTextAlpha:(double)arg1 ;
-(void)setPrimaryTextAccessoryImage:(UIImage *)arg1 ;
-(void)setSecondaryText:(id)arg1 italicized:(BOOL)arg2 ;
-(void)setAlternateSecondaryText:(NSString *)arg1 ;
-(void)setAlternateSecondaryTextAlpha:(double)arg1 ;
-(BOOL)textWillWrapForWidth:(double)arg1 ;
-(void)_invalidatePrimaryTextAttributedString;
-(void)_setSecondaryText:(id)arg1 italicized:(BOOL)arg2 forAttributedStringPtr:(id*)arg3 ;
-(void)setAlternateSecondaryText:(id)arg1 italicized:(BOOL)arg2 ;
-(id)_newAttributedStringForSecondaryText:(id)arg1 italicized:(BOOL)arg2 ;
-(CGRect)_primaryTextRectForBounds:(CGRect)arg1 ;
-(double)_primaryTextBaselineForBounds:(CGRect)arg1 ;
-(CGSize)_primaryTextSizeForBounds:(CGRect)arg1 ;
-(double)_secondaryTextOriginYForBounds:(CGRect)arg1 ;
-(CGRect)_secondaryTextRectForBounds:(CGRect)arg1 attributedString:(id)arg2 ;
-(id)_primaryTextAttributedString;
-(BOOL)_hasSecondaryText;
-(CGRect)_maximumSecondaryTextRectForBounds:(CGRect)arg1 ;
-(UIImage *)primaryTextAccessoryImage;
-(NSString *)alternateSecondaryText;
-(BOOL)_isItalicizedAttributedString:(id)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRelevanceDate:(id)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
@end

