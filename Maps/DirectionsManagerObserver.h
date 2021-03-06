/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DirectionsManagerObserver <NSObject>
@optional
-(void)directionsManagerWillClear:(id)arg1;
-(void)directionsManagerWillReset:(id)arg1;
-(void)directionsManagerDidReset:(id)arg1;
-(void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2;
-(void)directionsManagerDidUpdateUserLocation:(id)arg1;
-(void)directionsManagerDidStartLoad:(id)arg1;
-(void)directionsManagerUpdatedTrafficIncidents:(id)arg1;
-(void)directionsManagerUpdatedMatchedLocation:(id)arg1 matchedLocation:(id)arg2;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2;
-(void)directionsManagerDidSwitchToNewRoute:(id)arg1 route:(id)arg2;
-(void)directionsManagerDidCancelLoad:(id)arg1;
-(void)directionsManagerDidUpdateToStepIndex:(id)arg1 stepIndex:(id)arg2;
-(void)directionsManager:(id)arg1 needsPromptToSimulateForOptions:(long long)arg2;
-(void)directionsManagerWillPrepareNavigationSession:(id)arg1;
-(void)directionsManager:(id)arg1 willStartNavigationSessionOfType:(int)arg2 options:(long long)arg3;
-(void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithNavigationOfType:(int)arg2 options:(long long)arg3;
-(void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithoutNavigationWithOptions:(long long)arg2;
-(void)directionsManager:(id)arg1 didStartNavigationSessionOfType:(int)arg2 options:(long long)arg3;
-(void)directionsManager:(id)arg1 didReplaceRoute:(id)arg2 withRoute:(id)arg3;

@end

