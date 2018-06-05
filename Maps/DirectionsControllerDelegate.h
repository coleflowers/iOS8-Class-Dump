/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MainChromeViewController;


@protocol DirectionsControllerDelegate <NSObject>
@property (nonatomic,readonly) MainChromeViewController * chromeViewController; 
@required
-(MainChromeViewController *)chromeViewController;
-(void)directionsControllerDidChangeRoute:(id)arg1;
-(void)directionsControllerDidReset:(id)arg1;
-(void)directionsController:(id)arg1 didChangeSelectedRouteIndex:(unsigned long long)arg2;
-(void)directionsController:(id)arg1 displayDirectionsWithoutNavigationToSelectedRouteWithOptions:(long long)arg2;
-(void)directionsControllerNavigationModeChoseOverview:(id)arg1;
-(void)directionsControllerNavigationModeChoseEndNavigation:(id)arg1;
-(void)directionsController:(id)arg1 steppingModeChoseOverview:(id)arg2;
-(void)directionsController:(id)arg1 steppingModeChoseEnd:(id)arg2;
-(void)directionsController:(id)arg1 steppingModeChoseGuideMe:(id)arg2 withTransportType:(int)arg3;
-(void)directionsController:(id)arg1 presentDirectionsSheetWithPositioning:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)directionsController:(id)arg1 presentDirectionsStepsListWithPositioning:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)directionsControllerDidStartLoad:(id)arg1;
-(void)directionsControllerDidStartNavigationSession:(id)arg1;
-(void)directionsControllerDidLoad:(id)arg1;
-(void)directionsControllerDidCancelLoad:(id)arg1;
-(void)directionsControllerDidProceedWithExternalOverview:(id)arg1;
-(void)directionsControllerDidFailToLoad:(id)arg1 withError:(id)arg2 canInterruptUser:(BOOL)arg3;
-(void)directionsController:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)directionsController:(id)arg1 didSetEndPin:(id)arg2;
-(void)directionsControllerUpdatedETA:(id)arg1;
-(void)directionsControllerHasArrived:(id)arg1;
-(void)directionsControllerHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(BOOL)arg2;

@end

