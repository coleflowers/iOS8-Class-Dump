/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTTopChartsViewController.h>

@class CALayer, TKCompositeView, TKOverlayView, UILabel, MTTopChartEpisodeViewController, NSTimer, UIPopoverController, MTGridTransitionController, UINavigationController;

@interface MTTopDualChartsViewController : MTTopChartsViewController {

	CALayer* _divider;
	TKCompositeView* _rightView;
	TKCompositeView* _leftView;
	TKOverlayView* _overlay;
	UILabel* _leftChartLabel;
	UILabel* _rightChartLabel;
	MTTopChartEpisodeViewController* _episodeVC;
	long long _orientation;
	BOOL _rightChartLoaded;
	BOOL _leftChartLoaded;
	BOOL _leftChartLoading;
	BOOL _rightChartLoading;
	NSTimer* _leftSpinnerTimer;
	NSTimer* _rightSpinnerTimer;
	UIPopoverController* _popover;
	MTGridTransitionController* _transitionController;
	UINavigationController* _sheet;

}

@property (assign) BOOL leftChartLoading;                                          //@synthesize leftChartLoading=_leftChartLoading - In the implementation block
@property (retain) NSTimer * leftSpinnerTimer;                                     //@synthesize leftSpinnerTimer=_leftSpinnerTimer - In the implementation block
@property (assign) BOOL rightChartLoading;                                         //@synthesize rightChartLoading=_rightChartLoading - In the implementation block
@property (retain) NSTimer * rightSpinnerTimer;                                    //@synthesize rightSpinnerTimer=_rightSpinnerTimer - In the implementation block
@property (retain) UIPopoverController * popover;                                  //@synthesize popover=_popover - In the implementation block
@property (retain) MTGridTransitionController * transitionController;              //@synthesize transitionController=_transitionController - In the implementation block
@property (retain) UINavigationController * sheet;                                 //@synthesize sheet=_sheet - In the implementation block
-(void)explicitContentChanged:(id)arg1 ;
-(MTGridTransitionController *)transitionController;
-(void)setTransitionController:(MTGridTransitionController *)arg1 ;
-(void)createBaseView;
-(void)renderChart:(id)arg1 intoContainer:(unsigned long long)arg2 forceReload:(BOOL)arg3 ;
-(void)hideCategorySheet;
-(void)showCategoryController:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(CGRect)rectForButton:(id)arg1 ;
-(BOOL)rightChartLoading;
-(BOOL)leftChartLoading;
-(void)addLeftLoadingSpinner;
-(void)addRightLoadingSpinner;
-(void)deselectedLeftItems;
-(void)deselectedRightItems;
-(void)showOverlayWithArtwork:(id)arg1 withLockup:(id)arg2 ;
-(void)loadViewData;
-(void)onRotate:(long long)arg1 duration:(double)arg2 ;
-(void)refreshIfNeeded;
-(void)showCategoriesSheet;
-(void)showEpisodeForLockup:(id)arg1 withDetails:(id)arg2 ;
-(void)setLeftChartLoading:(BOOL)arg1 ;
-(NSTimer *)leftSpinnerTimer;
-(void)setLeftSpinnerTimer:(NSTimer *)arg1 ;
-(void)setRightChartLoading:(BOOL)arg1 ;
-(NSTimer *)rightSpinnerTimer;
-(void)setRightSpinnerTimer:(NSTimer *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(void)createSpinner;
-(void)setSheet:(UINavigationController *)arg1 ;
-(UINavigationController *)sheet;
@end

