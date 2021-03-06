/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsChromeViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/GEOResourceManifestTileGroupObserver.h>
#import <Maps/EventCaptureViewDelegate.h>
#import <Maps/MapsNavigationControllerRotationDelegate.h>
#import <Maps/AdvisorySheetViewDelegate.h>
#import <Maps/MainChromeViews.h>
#import <Maps/AudioSettingsViewControllerDelegate.h>

@protocol MainChromeTopBarContent, MainChromeSheet, MainChromeTopBarContentProvider;
@class ControlBarView, AdvisorySheet, EventCaptureView, MainChromeCommonControls, SearchPinsManager, BlurView, EasyCallbackAlertView, UIButton, AudioSettingsViewController, UINavigationController, UIView, SettingsController, PlacePresentationSelectionManager, AdaptivePresenter, UILabel, UIViewController, MainChromeDetailsBarView, BarShadowView, UIToolbar, NSError, UIFont, PlacePresentationSelectionManagerContext, MainChromeViewItem, NSString, MKMapView;

@interface MainChromeViewController : MapsChromeViewController <UINavigationControllerDelegate, GEOResourceManifestTileGroupObserver, EventCaptureViewDelegate, MapsNavigationControllerRotationDelegate, AdvisorySheetViewDelegate, MainChromeViews, AudioSettingsViewControllerDelegate> {

	id<MainChromeTopBarContent> _topBarContent;
	CGSize _lastKnownBoundsSize;
	long long _lastKnownTopBarContentVariant;
	CGRect _statusBarFrame;
	long long _statusBarStyle;
	SCD_Struct_Di7 _bars;
	SCD_Struct_Di7 _previousBars;
	BOOL _hasEnqueuedBarStateChange;
	BOOL _hasPerformedBarStateChange;
	double _barStateChangeDuration;
	BOOL _appearing;
	BOOL _rotating;
	BOOL _advisoryVisible;
	BOOL _displayed;
	BOOL _showingSettingsTopBarStyle;
	BOOL _animatingTopBars;
	unsigned long long _viewCallbacksSuppressionCount;
	BOOL _hasCalledViewAppearMethods;
	/*^block*/id _lastUpdateTopBarContentCompletionBlock;
	AdvisorySheet* _advisorySheet;
	EventCaptureView* _eventCaptureView;
	BOOL _animatingPresentAdvisory;
	BOOL _animatingDismissAdvisory;
	BOOL _hasDoneInitalLayoutForControlBar;
	MainChromeCommonControls* _commonControls;
	SearchPinsManager* _searchPinsManager;
	BlurView* _topBlurView;
	EasyCallbackAlertView* _locationServicesAlertView;
	UIButton* _audioControl;
	AudioSettingsViewController* _audioSettingsViewController;
	UINavigationController* _audioSettingsNavController;
	long long _viewMode;
	BOOL _isObservingNonselectingTaps;
	BOOL _hasScheduledTapToHideToggle;
	BOOL _shouldSuppressTapToHideToggle;
	BOOL _suppressLayoutForStatusBarUpdate;
	long long _topBarLightness;
	UIView* _currentTopBarPaletteView;
	BOOL _currentTopBarPaletteDrawsOwnBackground;
	SettingsController* _settingsController;
	PlacePresentationSelectionManager* _placePresentationSelectionManager;
	AdaptivePresenter* _audioSettingsPresenter;
	UILabel* _tourLabel;
	UIViewController* _previouslyShownViewController;
	long long _flyoverTourStartMode;
	MainChromeDetailsBarView* _detailsBar;
	SCD_Struct_Ma36 _detailsBarState;
	UIViewController*<MainChromeSheet> _displayedSheetViewController;
	id<MainChromeTopBarContentProvider> _displayedSheetTopBarContentProvider;
	id<MainChromeTopBarContent> _displayedSheetTopBarContent;
	BlurView* _sheetBackdropBlurView;
	BarShadowView* _sheetShadowView;
	UIView* _sheetShieldView;
	BOOL _sheetPresentationAnimationIsInFlight;
	SCD_Struct_Ma37 _mapInteractionStateBeforeDisplayingSheet;
	/*^block*/id _displayedSheetDismissalBlock;
	ControlBarView* _controlBar;
	UIToolbar* _topBar;
	/*^block*/id _didFinishAnimatingSettingsView;
	UIView* _mapViewReplacement;
	UIView* _customTopBarView;
	NSError* _displayedLocationError;
	id<MainChromeTopBarContentProvider> _topBarContentProvider;

}

@property (nonatomic,readonly) double availableDetailsBarTitleLabelWidth; 
@property (nonatomic,readonly) UIFont * detailsBarTitleLabelFont; 
@property (getter=isShowingLocationServicesAlert,nonatomic,readonly) BOOL showingLocationServicesAlert; 
@property (nonatomic,retain) id<MainChromeTopBarContentProvider> topBarContentProvider;                              //@synthesize topBarContentProvider=_topBarContentProvider - In the implementation block
@property (nonatomic,readonly) UINavigationController * phoneNavigationController; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) BOOL topBarHidden; 
@property (nonatomic,readonly) BOOL animatingTopBars;                                                                //@synthesize animatingTopBars=_animatingTopBars - In the implementation block
@property (readonly) PlacePresentationSelectionManager * placePresentationSelectionManager; 
@property (readonly) PlacePresentationSelectionManagerContext * currentPlacePresentationContext; 
@property (readonly) long long topBarLightness;                                                                      //@synthesize topBarLightness=_topBarLightness - In the implementation block
@property (readonly) MainChromeCommonControls * commonControls;                                                      //@synthesize commonControls=_commonControls - In the implementation block
@property (nonatomic,retain) UIToolbar * topBar;                                                                     //@synthesize topBar=_topBar - In the implementation block
@property (assign,nonatomic) long long viewMode;                                                                     //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,getter=isSuppressed,nonatomic) BOOL suppressed; 
@property (nonatomic,readonly) SettingsController * settingsController; 
@property (nonatomic,copy) id didFinishAnimatingSettingsView;                                                        //@synthesize didFinishAnimatingSettingsView=_didFinishAnimatingSettingsView - In the implementation block
@property (nonatomic,retain) ControlBarView * controlBar;                                                            //@synthesize controlBar=_controlBar - In the implementation block
@property (nonatomic,retain) UIView * mapViewReplacement;                                                            //@synthesize mapViewReplacement=_mapViewReplacement - In the implementation block
@property (setter=_setCustomTopBarView:,nonatomic,retain) UIView * _customTopBarView;                                //@synthesize customTopBarView=_customTopBarView - In the implementation block
@property (nonatomic,copy) id lastUpdateTopBarContentCompletionBlock;                                                //@synthesize lastUpdateTopBarContentCompletionBlock=_lastUpdateTopBarContentCompletionBlock - In the implementation block
@property (nonatomic,retain) NSError * displayedLocationError;                                                       //@synthesize displayedLocationError=_displayedLocationError - In the implementation block
@property (nonatomic,readonly) MainChromeViewItem * topItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKMapView * mapView; 
@property (nonatomic,readonly) UIView * containingView; 
+(long long)_blurViewStyleForBarBackdropKind:(long long)arg1 ;
+(Class)chromeViewItemClass;
-(void)_layoutSheetViewsIfNeeded;
-(void)_sheetsDisplayPreferredContentSizeDidChangeForChildContainer:(id)arg1 ;
-(void)dismissSheetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_frameForSheetViewController:(id)arg1 atDisplayPosition:(BOOL)arg2 ;
-(CGRect)_frameForSheetViewAtDisplayPosition:(BOOL)arg1 ;
-(void)presentSheetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 dismissal:(/*^block*/id)arg4 ;
-(CGRect)_frameForSheetShieldViewAtDisplayPosition:(BOOL)arg1 ;
-(void)presentSheetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isDisplayingSheetViewController:(id)arg1 ;
-(void)_updateDisplayBarAnimated:(BOOL)arg1 ;
-(CGRect)_detailsBarFrameAtRest:(BOOL)arg1 ;
-(void)_layoutDetailsBar;
-(void)presentDetailsBarWithContent:(id)arg1 forMode:(id)arg2 animated:(BOOL)arg3 ;
-(void)dismissDetailsBarForMode:(id)arg1 animated:(BOOL)arg2 ;
-(id)detailsBarContentForMode:(id)arg1 ;
-(double)availableDetailsBarTitleLabelWidth;
-(UIFont *)detailsBarTitleLabelFont;
-(void)performInitialConfigurationOnDirectionsAnnotationsManager:(id)arg1 ;
-(void)performInitialConfigurationOnSearchPinsManager:(id)arg1 ;
-(void)moveToMapDisplayStyle:(unsigned long long)arg1 forChangeToLightLevel:(long long)arg2 animation:(id)arg3 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)eventCaptureViewDidReceiveIncidentalTap:(id)arg1 ;
-(SettingsController *)settingsController;
-(void)fillReportAProblemContext:(id)arg1 ;
-(PlacePresentationSelectionManager *)placePresentationSelectionManager;
-(MainChromeCommonControls *)commonControls;
-(BOOL)supportsSuppression;
-(void)setTopBarContentProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBlurColor:(id)arg1 forMode:(id)arg2 ;
-(void)hideTopBarShadow:(BOOL)arg1 forMode:(id)arg2 ;
-(void)setBackdropKind:(long long)arg1 forMode:(id)arg2 ;
-(void)setBottomLineHidden:(BOOL)arg1 forMode:(id)arg2 ;
-(void)insertSubviewBelowTopBar:(id)arg1 ;
-(ControlBarView *)controlBar;
-(void)dismissAdvisorySheetWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isCurrentMode:(id)arg1 ;
-(void)setOverriddenViewMode:(long long)arg1 forMode:(id)arg2 ;
-(void)setStatusBarHidden:(BOOL)arg1 topBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateTopBarContentAnimated:(BOOL)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)setExtendedBlurFrame:(CGRect)arg1 forMode:(id)arg2 ;
-(BOOL)canDisplayTraffic;
-(/*^block*/id)presentUnhandledInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pushMode:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(long long)arg1 ;
-(void)setSuppressed:(BOOL)arg1 ;
-(void)updateTrafficDisplay;
-(void)_stopFlyoverTourAnimation;
-(PlacePresentationSelectionManagerContext *)currentPlacePresentationContext;
-(BOOL)isTapToHideEnabledForMode:(id)arg1 ;
-(void)setTapToHideEnabled:(BOOL)arg1 forMode:(id)arg2 ;
-(BOOL)isShowingLocationServicesAlert;
-(BOOL)shouldUseMapSelectionForUserAction;
-(void)presentAdvisorySheetAnimated:(BOOL)arg1 expectsIncidentalInteraction:(BOOL)arg2 identifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 buttonTitle:(id)arg6 accessoryView:(id)arg7 userInfo:(id)arg8 delegate:(id)arg9 ;
-(void)advisorySheetButtonWasTapped:(id)arg1 ;
-(id)initChromeAndContainer:(id*)arg1 ;
-(id)_topBarAreaView;
-(id)_currentlyTrackedTopBarView;
-(BOOL)getPreferredUserInterfaceIdiom:(out long long*)arg1 ;
-(BOOL)animatingTopBars;
-(void)_setDetailsBarContent:(id)arg1 forMode:(id)arg2 ;
-(id)_detailsBarContentForMode:(id)arg1 ;
-(long long)topBarLightness;
-(void)_userDefaultsDidChange;
-(void)_updateCurrentEnvironmentName;
-(void)_animateBarsToCurrentStateWithDuration:(double)arg1 ;
-(long long)_currentTopBarBackdropStyle;
-(void)setControlBar:(ControlBarView *)arg1 ;
-(void)_layoutTopBlurView;
-(void)_layoutControlBar;
-(id)activeTopBarContent;
-(long long)_currentTopBarContentVariant;
-(void)_layoutTopBar;
-(void)_layoutMapView;
-(double)_statusBarMaxY;
-(UIView *)_customTopBarView;
-(void)updateStatusBarWithoutLayout;
-(BOOL)_shouldSlideTopBar;
-(CGRect)_topBlurViewFrame;
-(BOOL)_blurViewExtendsToPaletteView;
-(CGRect)_topBarPaletteFrameForView:(id)arg1 insetByMargin:(BOOL)arg2 ;
-(void)_updateBottomLineHidden;
-(id)_topBarIfAvailable;
-(CGRect)_topBarFrameInsetByMargin:(BOOL)arg1 ;
-(void)topBarSizeWillChange:(CGSize)arg1 ;
-(void)topBarSizeDidChange:(CGSize)arg1 ;
-(CGRect)_advisorySheetFrameForPresentationForSheet:(id)arg1 ;
-(void)_updateAudioRoutingButtonVisability;
-(void)setStatusBarHidden:(BOOL)arg1 topBarHidden:(BOOL)arg2 controlBarHidden:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)quiesceMapView;
-(id)_topMainChromeMode;
-(void)_updateAdvisorySheetLayout;
-(void)unquiesceMapView;
-(void)_updateBlurView;
-(long long)_displayedViewMode;
-(void)_updateViewMode;
-(id)_currentMainChromeMode;
-(void)_updateTopBarContentLightnessAnimated:(BOOL)arg1 ;
-(void)_updateTapToHideIfNeeded;
-(void)_setTopBarContentForDisplay:(id)arg1 ;
-(void)_moveToCurrentTopBarContentAnimated:(BOOL)arg1 ;
-(BOOL)_updateCurrentTopBarContentVariantAndReturnWhetherChanged;
-(id<MainChromeTopBarContentProvider>)topBarContentProvider;
-(void)_setDisplayedSheetTopBarContentForDisplay:(id)arg1 ;
-(id)lastUpdateTopBarContentCompletionBlock;
-(id)_displayableTopBarContent;
-(void)setLastUpdateTopBarContentCompletionBlock:(id)arg1 ;
-(id)presentNavSafetyAlertForInterruption:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDisplayedLocationError:(NSError *)arg1 ;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)arg1 ;
-(UIView *)mapViewReplacement;
-(void)_layoutTourLabel;
-(void)_notifySizeClassChange;
-(void)_notifySizeClassDidChange;
-(BOOL)topBarHidden;
-(void)_handleDisappearingCalloutAtCoordinate:(SCD_Struct_RA0)arg1 ;
-(void)ignoreCurrentTapForTapToHide;
-(id)_advisorySheet;
-(void)_presentAdvisorySheetAnimated:(BOOL)arg1 ;
-(id)_eventCaptureView;
-(id)_audioSettingsViewController;
-(id)_audioControl;
-(void)_dismissAudioSettings:(id)arg1 ;
-(id)_audioSettingsNavController;
-(void)_handleTapOnAudioControl:(id)arg1 ;
-(void)_setAudioSettingsViewControllerBluetoothEnabled:(BOOL)arg1 ;
-(void)_scheduleToggleBarsForTapToHide;
-(void)_toggleBarsForTapToHide;
-(BOOL)shouldAllowAutorotationForNavigationController:(id)arg1 ;
-(void)audioSettingsViewControllerSettingsDidAppear:(id)arg1 ;
-(void)audioSettingsViewControllerSettingsDidDisappear:(id)arg1 ;
-(void)audioSettingsViewController:(id)arg1 hasRoutesToPick:(BOOL)arg2 ;
-(void)audioSettingsViewControllerPickedRouteForAudioSetting:(id)arg1 ;
-(void)audioSettingsViewController:(id)arg1 updatedHFPPreferenceForAudioSetting:(BOOL)arg2 ;
-(void)setDisallowedViewModes:(id)arg1 preferredViewMode:(long long)arg2 forMode:(id)arg3 ;
-(long long)displayedViewMode;
-(void)setTopBlurViewHidden:(BOOL)arg1 ;
-(BOOL)topBlurViewHidden;
-(void)setControlBarHidden:(BOOL)arg1 ;
-(BOOL)controlBarHidden;
-(BOOL)controlBarOffScreen;
-(void)willPresentSettings;
-(void)willDismissSettings;
-(void)setTopBarContent:(id)arg1 ;
-(void)setTopBarContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTopBarContentProvider:(id<MainChromeTopBarContentProvider>)arg1 ;
-(UINavigationController *)phoneNavigationController;
-(long long)currentBackdropKind;
-(void)setTopBarMiniAltHeight:(double)arg1 forMode:(id)arg2 ;
-(void)_setBlockingInteractionsForPageCurl:(BOOL)arg1 ;
-(void)addReplacementViewToViewHierarchy:(id)arg1 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(CGSize)attributionAnchorOffset;
-(void)presentSettingsFromSettingsButton;
-(id)didFinishAnimatingSettingsView;
-(void)setDidFinishAnimatingSettingsView:(id)arg1 ;
-(void)setMapViewReplacement:(UIView *)arg1 ;
-(void)_setCustomTopBarView:(id)arg1 ;
-(NSError *)displayedLocationError;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(void)mapViewWillStartFlyoverTour:(id)arg1 ;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2 ;
-(void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)dealloc;
-(BOOL)statusBarHidden;
-(id)_preferredStatusBarHideAnimationParameters;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(MainChromeViewItem *)topItem;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)rotatingHeaderView;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(long long)viewMode;
-(void)setTopBar:(UIToolbar *)arg1 ;
-(UIToolbar *)topBar;
-(void)setViewMode:(long long)arg1 ;
-(UIEdgeInsets)labelEdgeInsets;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

