/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigationModeController.h>
#import <Maps/SteppingSignsCarouselDelegate.h>
#import <Maps/MKMapViewDelegate.h>

@class MNLocation, SteppingSignsCarousel, MNRoute, NSArray, MNGuidanceSignView, NSString, MNPedestrianTagView, TopBarTitleView, UIView;

@interface MNTrackingNavigationModeController : MNNavigationModeController <SteppingSignsCarouselDelegate, MKMapViewDelegate> {

	MNLocation* _matchedLocation;
	SteppingSignsCarousel* _signsCarousel;
	MNRoute* _route;
	NSArray* _steps;
	BOOL _isNavigatorOnRoute;
	BOOL _haveArrived;
	SCD_Struct_MN45* _stepInfos;
	NSArray* _signs;
	unsigned long long _stepIndex;
	unsigned long long _guidanceStepIndex;
	long long _guidanceMode;
	unsigned long long _stepIndexAfterPreRouteStep;
	unsigned long long _preRouteSignIndex;
	MNGuidanceSignView* _preRouteSign;
	NSString* _proceedToRouteDisplayString;
	unsigned long long _maneuverStepIndex;
	double _distanceUntilManeuver;
	unsigned long long _signIndexWithModifiedDistance;
	BOOL _isStepTrackingEnabled;
	BOOL _isManualStepTrackingEnabled;
	int _desiredViewStyle;
	int _nextDesiredViewStyle;
	double _startTimeNextDesiredCameraViewStyle;
	double _lastCameraViewStyleChangeTime;
	BOOL _appearing;
	BOOL _useMetric;
	BOOL _useYardsForShorterDistances;
	double _cameraZoomScale;
	double _userZoom;
	BOOL _is3D;
	BOOL _enteredOverview;
	UIEdgeInsets _minimumEdgeInsets;
	MNPedestrianTagView* _sideTagView;
	BOOL _isCarouselReadyForDisplay;
	BOOL _hasCarouselAnimatedIn;
	BOOL _sizeClassIsChanging;
	BOOL _isAnimatingStatusBar;
	BOOL _disableMasking;
	double _stagedHeightForTagAnimation;
	TopBarTitleView* _topBarTitleView;
	UIView* _compactLine;

}

@property (nonatomic,retain) SteppingSignsCarousel * signsCarousel;               //@synthesize signsCarousel=_signsCarousel - In the implementation block
@property (nonatomic,retain) NSString * proceedToRouteDisplayString;              //@synthesize proceedToRouteDisplayString=_proceedToRouteDisplayString - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingStatusBar;                           //@synthesize isAnimatingStatusBar=_isAnimatingStatusBar - In the implementation block
@property (assign,nonatomic) double stagedHeightForTagAnimation;                  //@synthesize stagedHeightForTagAnimation=_stagedHeightForTagAnimation - In the implementation block
@property (nonatomic,retain) TopBarTitleView * topBarTitleView;                   //@synthesize topBarTitleView=_topBarTitleView - In the implementation block
@property (nonatomic,retain) UIView * compactLine;                                //@synthesize compactLine=_compactLine - In the implementation block
@property (assign,nonatomic) BOOL disableMasking;                                 //@synthesize disableMasking=_disableMasking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willChangeToMapDisplayStyle:(unsigned long long)arg1 forChangeToLightLevel:(long long)arg2 animation:(id)arg3 ;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(long long)arg2 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6 ;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di9*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned long long)arg11 isSynthetic:(BOOL)arg12 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(BOOL)_is3D;
-(id)_controlBarItems;
-(void)_didSetNavigationBarsHidden:(BOOL)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)_refreshCameraPosition;
-(void)_startNavigationCameraMotionAnimated:(BOOL)arg1 ;
-(void)_prepareViewForLockScreen:(id)arg1 ;
-(void)prepareToRunNavigationAnimated:(BOOL)arg1 startCamera:(BOOL)arg2 ;
-(void)_setRoute:(id)arg1 ;
-(void)_stopNavigationCameraMotion;
-(void)resetNavigationMode;
-(void)_audioNotificationForNewTransportType:(int)arg1 navigationSession:(id)arg2 ;
-(void)_updateWithMatchedLocation:(id)arg1 ;
-(UIEdgeInsets)_minimumEdgeInsets;
-(void)_threeDButtonTapped:(id)arg1 ;
-(void)navigationOverviewBarOverviewTapped:(id)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(void)modeWillAppear:(BOOL)arg1 ;
-(void)modeDidAppear:(BOOL)arg1 ;
-(BOOL)shouldSlideTopBar;
-(void)animateBarsToCurrentStateWithAnimation:(id)arg1 ;
-(void)animateSizeClassChange;
-(void)sizeClassDidChangeToPair:(SCD_Struct_MN25)arg1 ;
-(id)initWithNavigationSession:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(void)_updateControlBarItemsAnimated:(BOOL)arg1 ;
-(void)setTopBarTitleView:(TopBarTitleView *)arg1 ;
-(SCD_Struct_MN25)_maps_sizeClassPair;
-(TopBarTitleView *)topBarTitleView;
-(void)_removeTopBarLayerMask;
-(id)layerMaskAnimationWithFrom:(double)arg1 to:(double)arg2 ;
-(void)_didChangeCurrentLocale;
-(void)setSignsCarousel:(SteppingSignsCarousel *)arg1 ;
-(SteppingSignsCarousel *)signsCarousel;
-(double)_signWidthForSizeClassPair:(SCD_Struct_MN25)arg1 ;
-(unsigned long long)_signIndexForStepIndex:(unsigned long long)arg1 ;
-(void)signsCarousel:(id)arg1 didChangeSelectedSignIndexWithCause:(long long)arg2 ;
-(void)signsCarousel:(id)arg1 didChangeFrame:(CGRect)arg2 ;
-(void)signsCarousel:(id)arg1 didScroll:(long long)arg2 withNewFrame:(CGRect)arg3 ;
-(void)signsCarousel:(id)arg1 didUpdateSignWidthWithNewFrame:(CGRect)arg2 ;
-(void)_setupWithRoute:(id)arg1 ;
-(void)_addTopBarLayerMask;
-(void)_cleanupRouteSigns;
-(unsigned long long)_nextStepIndexWithSign:(unsigned long long)arg1 ;
-(BOOL)_isCameraControllerActive;
-(void)_forceStepTrackingToCurrentStepAnimated:(BOOL)arg1 resetGuidanceStep:(BOOL)arg2 ;
-(void)_slideSignCarouselOnScreenFromRight;
-(void)_hideSignsCarouselAnimated:(BOOL)arg1 ;
-(void)_updatePreRouteStepTracking;
-(void)_updateStepTrackingWithNavigatorStep;
-(void)_updateCameraViewStyle;
-(void)_updateCameraFocus;
-(BOOL)disableMasking;
-(void)setDisableMasking:(BOOL)arg1 ;
-(void)_hideTagView;
-(CGRect)_signsCarouselFrame;
-(void)_updateSignsForSizeClass:(SCD_Struct_MN25)arg1 ;
-(void)setStagedHeightForTagAnimation:(double)arg1 ;
-(double)stagedHeightForTagAnimation;
-(void)_updateTagViewFrame:(CGRect)arg1 ;
-(void)_showTagView;
-(void)setIsAnimatingStatusBar:(BOOL)arg1 ;
-(void)_updateTagViewHiddenStatus:(BOOL)arg1 ;
-(void)_layoutSignsOrderingNeedsUpdate:(BOOL)arg1 ;
-(void)_updateSignsCarouselFrame;
-(void)_setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_doesStepIndexHaveSign:(unsigned long long)arg1 ;
-(void)_restoreStepDistanceForModifiedSign;
-(unsigned long long)_stepIndexForSignIndex:(unsigned long long)arg1 ;
-(void)_setupPreRouteGuidanceAtStepIndex:(unsigned long long)arg1 redisplayCarousel:(BOOL)arg2 ;
-(void)_setStepIndex:(unsigned long long)arg1 animated:(BOOL)arg2 scrollsSignCarousel:(BOOL)arg3 ;
-(void)_updateDistanceForNavigatorStep;
-(unsigned long long)_arrowIndexForGuidanceStep;
-(void)_moveCameraToCurrentStepAnimated:(BOOL)arg1 ;
-(void)_updateSignViewsForNewStepAnimated:(BOOL)arg1 scrollSignCarousel:(BOOL)arg2 ;
-(void)_refreshCameraForMatchedLocation;
-(void)_moveMapRegionToCurrentStepAnimated:(BOOL)arg1 ;
-(void)_setGuidanceStepIndex:(unsigned long long)arg1 ;
-(void)_updateTagWithRemainingTime:(double)arg1 andDistance:(double)arg2 ;
-(void)setETATotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 ;
-(void)setProceedToRouteDisplayString:(NSString *)arg1 ;
-(BOOL)_canHideTopBarShadow;
-(void)_setupTagViewForAnimation;
-(NSString *)proceedToRouteDisplayString;
-(BOOL)isAnimatingStatusBar;
-(UIView *)compactLine;
-(void)setCompactLine:(UIView *)arg1 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)dealloc;
@end
