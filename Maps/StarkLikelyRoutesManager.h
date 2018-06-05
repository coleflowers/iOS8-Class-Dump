/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MKLocationManagerObserver.h>
#import <Maps/StarkLikelyRouteUpdaterObserver.h>
#import <Maps/StarkSuggestionsProviderObserver.h>

@class StarkSuggestionsProvider, NSMutableArray, NSArray, MNTracePlayer, MNTraceRecorder, StarkRouteGeniusTestLogger, NSDate, NSString;

@interface StarkLikelyRoutesManager : NSObject <MKLocationManagerObserver, StarkLikelyRouteUpdaterObserver, StarkSuggestionsProviderObserver> {

	StarkSuggestionsProvider* _suggestionsProvider;
	NSMutableArray* _likelyRouteUpdaters;
	NSArray* _rankedLikelyRouteUpdaters;
	BOOL _isCurrentSuggestionLocked;
	int _suggestionTypesToUpdate;
	/*^block*/id _likelyRoutesHandler;
	MNTracePlayer* _tracePlayer;
	MNTraceRecorder* _traceRecorder;
	BOOL _recordResponse;
	BOOL _isWaitingForNetworkConnection;
	StarkRouteGeniusTestLogger* _testLogger;
	int _thermalNotificationToken;
	BOOL _isHighThermalPressureLevel;
	NSDate* _lastLocationUpdateTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateThermalPressureLevel:(BOOL)arg1 ;
-(void)_clearLikelyRoutes;
-(BOOL)_rankLikelyRoutes;
-(void)_reportBestSuggestion;
-(void)_generateLikelyRoutesForLocation:(id)arg1 departureDate:(id)arg2 suggestionType:(int)arg3 ;
-(void)likelyRouteUpdaterRerouted:(id)arg1 ;
-(void)likelyRouteUpdater:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)likelyRouteUpdaterUpdatedETA:(id)arg1 ;
-(void)likelyRouteUpdaterArrived:(id)arg1 ;
-(void)suggestionsProvider:(id)arg1 didCreateSuggestion:(id)arg2 ;
-(void)suggestionsProviderDidFinish:(id)arg1 ;
-(void)createLikelyRoutesWithSuggestionsProvider:(id)arg1 tracePlayer:(id)arg2 traceRecorder:(id)arg3 likelyRoutesHandler:(/*^block*/id)arg4 ;
-(void)lockCurrentSuggestion;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
@end
