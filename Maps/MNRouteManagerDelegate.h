/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNRouteManagerDelegate <NSObject>
@required
-(void)routeManagerDidChangeState:(id)arg1 newRouteState:(int)arg2;
-(void)routeManager:(id)arg1 didChangeRoutePreloadSession:(id)arg2;
-(void)routeManager:(id)arg1 recordRouteRequest:(id)arg2;
-(void)routeManagerDidCancelRoute:(id)arg1 errorCode:(long long)arg2;
-(void)routeManagerWillRequestRoute:(id)arg1 traceRecorderFailed:(BOOL)arg2;
-(void)routeManagerDidFailToRecalculateRoute:(id)arg1 previousRoute:(id)arg2 errorCode:(long long)arg3;
-(void)routeManagerWillRecalculateRoute:(id)arg1;
-(void)routeManager:(id)arg1 didSwitchToNewRoute:(id)arg2 alreadyOnRoute:(BOOL)arg3 forcedSwitch:(BOOL)arg4;
-(void)routeManager:(id)arg1 recordRouteResponse:(id)arg2;
-(void)routeManager:(id)arg1 didReceiveRouteSet:(id)arg2;
-(void)routeManager:(id)arg1 didRecalculateNewRoute:(id)arg2;
-(void)routeManagerDidFailToReceiveRoute:(id)arg1 error:(id)arg2;
-(void)routeManager:(id)arg1 failedWithError:(id)arg2;
-(void)routeManagerUpdatedETA:(id)arg1;
-(void)routeManagerUpdatedTrafficIncidents:(id)arg1;
-(void)routeManager:(id)arg1 recommendsNewRoute:(id)arg2 etaRoute:(id)arg3 oldEstimatedTime:(unsigned)arg4 newEstimatedTime:(unsigned)arg5;

@end
