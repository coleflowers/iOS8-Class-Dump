/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKMapViewDelegate.h>
#import <Maps/SteppingSignsCarouselDelegate.h>
#import <Maps/MainChromeModeController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Maps/MNNavigationSessionUIDelegate.h>
#import <Maps/MNNavigationOverviewBarDelegate.h>

@protocol SteppingModeDelegate, MainChromeViews;
@class MNRoute, UIView, NSArray, DelayedActionsQueue, NSMutableSet, MKAnnotationView, VKLabelMarker, NSTimer, MNNavigationOverviewBar, SteppingTopBarContentProvider, MapsChromeViewController, SteppingSignsCarousel, NSString, ChromeViewController;

@interface SteppingModeController : NSObject <MKMapViewDelegate, SteppingSignsCarouselDelegate, MainChromeModeController, UIPopoverControllerDelegate, MNNavigationSessionUIDelegate, MNNavigationOverviewBarDelegate> {

	MNRoute* _route;
	UIView* _containerView;
	NSArray* _signViews;
	NSArray* _signs;
	BOOL _useMetric;
	BOOL _useYardsForShorterDistances;
	unsigned long long _lastMatchedStepIndex;
	id<SteppingModeDelegate> _delegate;
	id<MainChromeViews> _views;
	unsigned long long _signIndex;
	BOOL _appearing;
	BOOL _isDeceleratingAfterDragEnd;
	BOOL _cameraChangeWasProgrammatic;
	BOOL _enteredOverview;
	DelayedActionsQueue* _cameraMotionsQueue;
	NSMutableSet* _ongoingGestures;
	MKAnnotationView* _annotationViewToReSelectAfterExpandedPopoverDismissal;
	VKLabelMarker* _labelMarkerToReSelectAfterExpandedPopoverDismissal;
	unsigned long long _lastTrackedStep;
	NSTimer* _gestureCoalesceTimer;
	NSTimer* _cameraChangeCoalesceTimer;
	long long _3DButtonTextVisibilityCount;
	BOOL _flyoverChangedDuringCurrentGestures;
	MNNavigationOverviewBar* _topBar;
	SteppingTopBarContentProvider* _normalSteppingTopBar;
	MapsChromeViewController* _chromeViewController;
	SteppingSignsCarousel* _signsCarousel;

}

@property (assign,nonatomic,__weak) id<SteppingModeDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * routeDisplayName; 
@property (nonatomic,retain) id<MainChromeViews> views;                                //@synthesize views=_views - In the implementation block
@property (assign,nonatomic) unsigned long long signIndex;                             //@synthesize signIndex=_signIndex - In the implementation block
@property (nonatomic,readonly) MNRoute * route;                                        //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) SteppingSignsCarousel * signsCarousel;                    //@synthesize signsCarousel=_signsCarousel - In the implementation block
@property (nonatomic,retain) NSArray * signs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
-(void)willChangeToMapDisplayStyle:(unsigned long long)arg1 forChangeToLightLevel:(long long)arg2 animation:(id)arg3 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(ChromeViewController *)chromeViewController;
-(void)directionsSession:(id)arg1 failedWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 willStartForRoute:(id)arg2 ;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSessionWillEnd:(id)arg1 ;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(long long)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidance:(BOOL)arg2 ;
-(void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 didChangeState:(int)arg2 ;
-(void)navigationSession:(id)arg1 startingStepIndex:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 updatePointOfInterest:(SCD_Struct_RA0)arg2 focusStyle:(int)arg3 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6 ;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di9*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned long long)arg11 isSynthetic:(BOOL)arg12 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di9*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)navigationSessionHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(BOOL)arg2 ;
-(void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2 ;
-(void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2 ;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 andLegIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 willStartNavigatorForRoute:(id)arg2 ;
-(void)navigationSessionWillPauseNavigator:(id)arg1 ;
-(void)navigationSessionWillResumeNavigatorFromPause:(id)arg1 ;
-(void)navigationSessionWillStopNavigator:(id)arg1 ;
-(void)directionsSessionWillRequestRoute:(id)arg1 traceRecorderFailed:(BOOL)arg2 ;
-(void)directionsSession:(id)arg1 didReceiveRouteSet:(id)arg2 ;
-(void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2 ;
-(void)directionsSessionWillRecalculateRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didRecalculateNewRoute:(id)arg2 ;
-(void)directionsSessionDidCancelRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didSwitchToNewRoute:(id)arg2 forcedSwitch:(BOOL)arg3 ;
-(void)directionsSession:(id)arg1 didChangeRoutePreloadSession:(id)arg2 ;
-(void)directionsSessionUpdatedETA:(id)arg1 ;
-(void)directionsSessionUpdatedTrafficIncidents:(id)arg1 ;
-(void)directionsSessionRecommendsNewRoute:(id)arg1 oldEstimatedTime:(unsigned)arg2 newEstimatedTime:(unsigned)arg3 finished:(/*^block*/id)arg4 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)navigationOverviewBarOverviewTapped:(id)arg1 ;
-(void)navigationOverviewBarEndTapped:(id)arg1 ;
-(id)currentExpandedTravelTimeForNavigationOverviewBar:(id)arg1 forTimeInterval:(double)arg2 ;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(void)modeWillAppear:(BOOL)arg1 ;
-(void)modeDidAppear:(BOOL)arg1 ;
-(void)modeWillDisappear:(BOOL)arg1 ;
-(void)modeDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldSlideTopBar;
-(double)hiddenTopMargin;
-(void)animateSizeClassChange;
-(void)sizeClassDidChangeToPair:(SCD_Struct_MN25)arg1 ;
-(BOOL)canDisplayTraffic;
-(void)_updateControlBarItemsAnimated:(BOOL)arg1 ;
-(id)_maps3DButton;
-(void)_update3DButtonTextVisibility;
-(void)_gestureCoalesceTimerFired:(id)arg1 ;
-(void)_update3DButtonTextVisibilityForGesture:(long long)arg1 gestureEnded:(BOOL)arg2 ;
-(NSString *)routeDisplayName;
-(unsigned long long)signIndex;
-(id)stepAtSignIndex:(unsigned long long)arg1 ;
-(NSArray *)signs;
-(void)setSignIndex:(unsigned long long)arg1 ;
-(SCD_Struct_MN25)_maps_sizeClassPair;
-(id)topBarContentProvider;
-(void)_didChangeCurrentLocale;
-(void)_updateTopBarTitleText;
-(void)clearStepTracking;
-(void)setSignsCarousel:(SteppingSignsCarousel *)arg1 ;
-(void)setSignIndex:(unsigned long long)arg1 animated:(BOOL)arg2 scrollsSignCarousel:(BOOL)arg3 movesMapCamera:(BOOL)arg4 ;
-(void)layoutSigns;
-(id)controlBarItems;
-(id)_mainChromeViewController;
-(SteppingSignsCarousel *)signsCarousel;
-(void)updateSignViewsForNewStepAnimated:(BOOL)arg1 scrollSignCarousel:(BOOL)arg2 ;
-(void)updateBlurView;
-(CGRect)signsCarouselFrame;
-(void)moveCameraToSignIndexAnimated:(BOOL)arg1 ;
-(void)_updateSignStyles;
-(void)updateCarouselHeight;
-(void)_updateSignsForSizeClassPair:(SCD_Struct_MN25)arg1 ;
-(double)_signWidthForSizeClassPair:(SCD_Struct_MN25)arg1 ;
-(int)_currentVariant;
-(id)signViewForSign:(id)arg1 ;
-(void)didTapSignWithGestureRecognizer:(id)arg1 ;
-(id)guidanceAccessoryItemForSign:(id)arg1 ;
-(void)setSigns:(NSArray *)arg1 ;
-(void)setSign:(id)arg1 ;
-(void)coalescedMoveCameraToStepIndexAnimated:(BOOL)arg1 ;
-(void)_updateTopBarDetailText;
-(void)moveCameraToStep:(id)arg1 adjacentStep:(id)arg2 isLastStep:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)moveCameraToStepWithTimer:(id)arg1 ;
-(void)moveCameraToLocation:(SCD_Struct_RA0)arg1 adjacentLocation:(SCD_Struct_RA0)arg2 isLastStep:(BOOL)arg3 animated:(BOOL)arg4 ;
-(unsigned long long)_signIndexForStepIndex:(unsigned long long)arg1 ;
-(void)setSignIndexFromRegion:(id)arg1 center:(SCD_Struct_RA0)arg2 ;
-(unsigned long long)signIndexNearestToCoordinate:(SCD_Struct_RA0)arg1 ;
-(void)updateBlurViewWithFrame:(CGRect)arg1 ;
-(void)_updateSignTrackingWithStepIndex:(unsigned long long)arg1 ;
-(void)signsCarousel:(id)arg1 didChangeSelectedSignIndexWithCause:(long long)arg2 ;
-(void)signsCarousel:(id)arg1 didChangeFrame:(CGRect)arg2 ;
-(void)signsCarousel:(id)arg1 didScroll:(long long)arg2 withNewFrame:(CGRect)arg3 ;
-(void)signsCarousel:(id)arg1 didUpdateSignWidthWithNewFrame:(CGRect)arg2 ;
-(int)transportForLegStartingAtSignIndex:(unsigned long long)arg1 ;
-(int)transportForLegArrivingAtSignIndex:(unsigned long long)arg1 ;
-(double)distanceOfStepAtSignIndex:(unsigned long long)arg1 fromCoordinate:(SCD_Struct_RA0)arg2 ;
-(double)distanceOfLegStartingAtSignIndex:(unsigned long long)arg1 ;
-(void)setSignIndexNearestToCoordinate:(SCD_Struct_RA0)arg1 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(id)_calloutPopoverController;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(BOOL)arg3 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(BOOL)arg4 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<SteppingModeDelegate>)arg1 ;
-(id<SteppingModeDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(id)initWithRoute:(id)arg1 ;
-(void)setViews:(id<MainChromeViews>)arg1 ;
-(id<MainChromeViews>)views;
-(void)setRoute:(MNRoute *)arg1 ;
-(MNRoute *)route;
-(void)setStep:(id)arg1 ;
@end

