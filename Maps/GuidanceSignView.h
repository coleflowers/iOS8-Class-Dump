/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class MNSignStyle;

@interface GuidanceSignView : UIView {

	BOOL _wantsManeuverPeekingAdjustment;
	BOOL _delayLayout;
	MNSignStyle* _style;
	int _variant;
	BOOL _displayedOnLockscreen;
	BOOL _inactive;
	BOOL _wantsManueverPeekingAdjustment;
	BOOL _shouldHideDivider;

}

@property (assign,nonatomic) BOOL wantsManueverPeekingAdjustment;              //@synthesize wantsManueverPeekingAdjustment=_wantsManueverPeekingAdjustment - In the implementation block
@property (assign,nonatomic) BOOL shouldHideDivider;                           //@synthesize shouldHideDivider=_shouldHideDivider - In the implementation block
@property (assign,nonatomic) BOOL delayLayout;                                 //@synthesize delayLayout=_delayLayout - In the implementation block
@property (assign,nonatomic) BOOL displayedOnLockscreen;                       //@synthesize displayedOnLockscreen=_displayedOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                    //@synthesize inactive=_inactive - In the implementation block
@property (nonatomic,retain) MNSignStyle * style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int variant;                                      //@synthesize variant=_variant - In the implementation block
-(void)willAnimateStyleValuesFromTheme;
-(void)didAnimateStyleValuesFromTheme;
-(void)updateStyleValuesFromTheme;
-(void)setDelayLayout:(BOOL)arg1 ;
-(void)textLinesShouldAnimateFromHeight:(double)arg1 ;
-(void)setInstructionsText:(id)arg1 shorterAlternatives:(id)arg2 ;
-(BOOL)displayedOnLockscreen;
-(BOOL)shouldHideDivider;
-(void)updateManueverOriginXForScrollPosition:(double)arg1 ;
-(void)transformSublayersByPercentComplete:(double)arg1 ;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(BOOL)inactive;
-(double)deltaForScrollChange:(id)arg1 ;
-(void)updateSignAlpha:(double)arg1 ;
-(BOOL)wantsManueverPeekingAdjustment;
-(void)updateAlpha:(id)arg1 ;
-(void)updateManueverPeekingPosition:(id)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(void)setWantsManueverPeekingAdjustment:(BOOL)arg1 ;
-(void)setShouldHideDivider:(BOOL)arg1 ;
-(void)setDisplayedOnLockscreen:(BOOL)arg1 ;
-(void)setNeedsLayout;
-(MNSignStyle *)style;
-(void)setStyle:(MNSignStyle *)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(BOOL)delayLayout;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

