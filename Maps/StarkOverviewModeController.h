/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKMapViewDelegate.h>
#import <Maps/MNNavigationSessionUIDelegate.h>
#import <Maps/StarkDrivingNavigationItemDelegate.h>
#import <Maps/StarkChromeModeController.h>

@protocol MapsChromeViews;
@class StarkDrivingNavigationItem, MNNavigationModeController, MapsChromeViewController, NSString, ChromeViewController;

@interface StarkOverviewModeController : NSObject <MKMapViewDelegate, MNNavigationSessionUIDelegate, StarkDrivingNavigationItemDelegate, StarkChromeModeController> {

	id<MapsChromeViews> _views;
	/*^block*/id _completion;
	BOOL _allowPouncingOnResignToNavigation;
	BOOL _showsSearchResults;
	BOOL _wasDisplayedByNavigation;
	BOOL _initialCenteringComplete;
	StarkDrivingNavigationItem* _navigationItem;
	MNNavigationModeController* _drivingMode;
	SCD_Struct_RA1 _routeRemainingRect;
	BOOL _resumeButtonHidden;
	MapsChromeViewController* _chromeViewController;

}

@property (assign,nonatomic) BOOL resumeButtonHidden;                                  //@synthesize resumeButtonHidden=_resumeButtonHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
-(void)willProvideAnnotationView:(id)arg1 forAnnotation:(id)arg2 ;
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
-(id)starkChromeViewController;
-(id)overlayItemsForState:(id)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(void)updateMapForAutohidingContentChangeWithGroupAnimation:(id)arg1 ;
-(BOOL)starkTopBarModifiesInsets;
-(void)modeWasSelected;
-(BOOL)physicalButtonsBegan:(id)arg1 ;
-(UIEdgeInsets)_mapViewInsets;
-(void)_invokeCompletionWithOutcome:(long long)arg1 ;
-(void)drivingNavigationItemZoomIn:(id)arg1 ;
-(void)drivingNavigationItemZoomOut:(id)arg1 ;
-(id)mapViewForDrivingNavigationItem:(id)arg1 ;
-(BOOL)drivingNavigationItemAllowsZooming:(id)arg1 ;
-(void)drivingNavigationItemDidEndRoute:(id)arg1 ;
-(void)drivingNavigationItemDidToggleOverview:(id)arg1 ;
-(void)setResumeButtonHidden:(BOOL)arg1 ;
-(id)initWithNavigationMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)resumeButtonHidden;
-(void)_zoomByFactor:(double)arg1 ;
-(void)_updateRouteRemainingRect;
-(id)_defaultLocation;
-(SCD_Struct_RA1)_boundingMapRectForLocation:(id)arg1 ;
-(void)_routeMayHaveChanged;
-(void)_updateRoute:(id)arg1 ;
-(BOOL)_interactionModelAllowsResumeButton;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)dealloc;
-(id)navigationItem;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

