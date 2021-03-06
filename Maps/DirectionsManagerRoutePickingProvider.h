/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DirectionsManagerObserver.h>
#import <Maps/RoutePickingProvider.h>

@class RoutePickingModeController, DirectionsManagerLoadingResult, NSError, NSString;

@interface DirectionsManagerRoutePickingProvider : NSObject <DirectionsManagerObserver, RoutePickingProvider> {

	DirectionsManagerLoadingResult* _displayableRoutesResult;
	DirectionsManagerLoadingResult* _lastRequestedResult;
	BOOL _isWaitingForLoadingToStart;
	NSError* _currentError;
	RoutePickingModeController* _routePickingMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) RoutePickingModeController * routePickingMode;              //@synthesize routePickingMode=_routePickingMode - In the implementation block
-(void)directionsManagerDidReset:(id)arg1 ;
-(void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(id)initWithOriginWaypoint:(id)arg1 destinationWaypoint:(id)arg2 ;
-(id)initFromDirectionsManager;
-(void)_updateResultFromDirectionsManager;
-(void)_clearResultAndNoteChanged;
-(RoutePickingModeController *)routePickingMode;
-(void)_clearResultAndNoteChangedWithError:(id)arg1 ;
-(unsigned long long)lastRequestedTransportType;
-(id)displayableRoutes;
-(id)lastRequestedDisplayableRoutes;
-(id)currentError;
-(void)beginLoadingRoutesFromWaypoint:(id)arg1 toWaypoint:(id)arg2 mode:(unsigned long long)arg3 traits:(id)arg4 routeHandle:(id)arg5 tracePlayer:(id)arg6 withFeedback:(id)arg7 ;
-(void)setRoutePickingMode:(RoutePickingModeController *)arg1 ;
-(void)dealloc;
-(void)_commonInit;
-(BOOL)isLoading;
@end

