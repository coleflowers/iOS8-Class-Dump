/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MainChromeViewController;


@protocol MainChromeTopBarContent <NSObject,MainChromeViewControllerBackdropLightness>
@property (assign,nonatomic) MainChromeViewController * chromeViewController; 
@optional
-(MainChromeViewController *)chromeViewController;
-(id)toolbarItemsForToolbar:(id)arg1;
-(void)setChromeViewController:(id)arg1;
-(id)customTopBarView;
-(BOOL)needsUpdateWhenBoundsSizeChanges;
-(BOOL)paletteViewDrawsOwnBackdrop;
-(double)customTopBarViewHeight;
-(double)toolbarContentHeight;
-(BOOL)customTopBarViewIsInsetByMargin;
-(BOOL)requiresSuppressingRepositioningAnimations;
-(void)setLeftMargin:(double)arg1 rightMargin:(double)arg2;
-(void)topBarSizeWillChange:(CGSize)arg1;
-(void)topBarSizeDidChange:(CGSize)arg1;
-(double)paletteViewHeight;
-(BOOL)paletteViewFrameIsInsetByMargin;
-(id)paletteView;
-(void)willUpdateWithAnimation:(id)arg1;
-(id)navigationItem;
-(id)toolbarItems;
-(void)setVariant:(long long)arg1;

@end

