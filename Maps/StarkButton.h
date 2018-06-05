/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>
#import <Maps/StarkButton.h>

@class UIImage, NSString;

@interface StarkButton : UIButton <StarkButton> {

	double _screenScale;
	BOOL _usesMinimumWidth;
	long long _starkButtonCompositingStyle;
	long long _starkButtonHighlightStyle;
	long long _starkButtonSize;
	UIImage* _unmodifiedRegularStateImage;
	long long _displayedLightLevel;
	long long _starkTextWeight;
	long long _interactionModel;

}

@property (assign,nonatomic) BOOL usesMinimumWidth;                              //@synthesize usesMinimumWidth=_usesMinimumWidth - In the implementation block
@property (assign,nonatomic) long long starkButtonCompositingStyle;              //@synthesize starkButtonCompositingStyle=_starkButtonCompositingStyle - In the implementation block
@property (assign,nonatomic) long long starkButtonHighlightStyle;                //@synthesize starkButtonHighlightStyle=_starkButtonHighlightStyle - In the implementation block
@property (assign,nonatomic) long long starkButtonSize;                          //@synthesize starkButtonSize=_starkButtonSize - In the implementation block
@property (assign,nonatomic) long long starkTextWeight;                          //@synthesize starkTextWeight=_starkTextWeight - In the implementation block
@property (assign,nonatomic) long long interactionModel;                         //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,retain) UIImage * unmodifiedRegularStateImage;              //@synthesize unmodifiedRegularStateImage=_unmodifiedRegularStateImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long displayedLightLevel;                      //@synthesize displayedLightLevel=_displayedLightLevel - In the implementation block
+(void)getTopButtonBarGlyphNormalImage:(out id*)arg1 darkerImage:(out id*)arg2 disabledImage:(out id*)arg3 fromImage:(id)arg4 lightLevel:(long long)arg5 scale:(double)arg6 ;
-(long long)displayedLightLevel;
-(void)setDisplayedLightLevel:(long long)arg1 ;
-(long long)starkButtonSize;
-(long long)starkButtonHighlightStyle;
-(long long)starkTextWeight;
-(id)_currentStyleAttributesForState:(unsigned long long)arg1 ;
-(void)_updateImagesFromUnmodifiedRegularImage;
-(void)setUnmodifiedRegularStateImage:(UIImage *)arg1 ;
-(void)_updateAttributedTitles;
-(UIImage *)unmodifiedRegularStateImage;
-(long long)starkButtonCompositingStyle;
-(BOOL)usesMinimumWidth;
-(id)attributedStringForTitle:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setStarkButtonCompositingStyle:(long long)arg1 ;
-(void)setStarkButtonHighlightStyle:(long long)arg1 ;
-(void)setStarkButtonSize:(long long)arg1 ;
-(void)setStarkTextWeight:(long long)arg1 ;
-(void)setUsesMinimumWidth:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)interactionModel;
-(void)setInteractionModel:(long long)arg1 ;
@end

