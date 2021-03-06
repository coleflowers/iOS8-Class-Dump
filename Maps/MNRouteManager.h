/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNETAManagerDelegate.h>

@protocol MNRouteManagerDelegate;
@class GEODirectionsRouteRequest, GEOComposedWaypoint, GEOMapRegion, GEOURLRouteHandle, MNRouteSet, MNTraceRecorder, MNTracePlayer, GEODirectionsRequestFeedback, MapsRoutePreloadSession, MNETAManager, NSData, GEODirectionsFeedbackCollector, GEORouteGenerator, MNRoute, GEORoute, NSString;

@interface MNRouteManager : NSObject <MNETAManagerDelegate> {

	GEODirectionsRouteRequest* _request;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	int _desiredTransportType;
	GEOMapRegion* _mapRegion;
	GEOURLRouteHandle* _routeHandle;
	MNRouteSet* _activeRouteSet;
	int _routeState;
	id<MNRouteManagerDelegate> _delegate;
	MNTraceRecorder* _traceRecorder;
	MNTracePlayer* _tracePlayer;
	GEODirectionsRequestFeedback* _feedback;
	MapsRoutePreloadSession* _mapsRoutePreloadSession;
	MNETAManager* _etaManager;
	NSData* _prevRouteID;
	unsigned _prevStepID;
	GEODirectionsFeedbackCollector* _feedbackCollector;
	double _lastRereouteTime;
	GEORouteGenerator* _routeGenerator;
	MNRoute* _userSelectedRoute;
	GEORoute* _userSelectedGeoRoute;
	NSString* _voiceLanguage;
	BOOL _fromCurrentLocation;
	BOOL _preloadRoutes;
	BOOL _allowAlternateTransportTypes;

}

@property (nonatomic,retain) MNRouteSet * activeRouteSet;                                      //@synthesize activeRouteSet=_activeRouteSet - In the implementation block
@property (assign,nonatomic) int routeState; 
@property (nonatomic,readonly) GEOComposedWaypoint * origin;                                   //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) MNETAManager * etaManager;                                      //@synthesize etaManager=_etaManager - In the implementation block
@property (nonatomic,readonly) NSString * voiceLanguage;                                       //@synthesize voiceLanguage=_voiceLanguage - In the implementation block
@property (nonatomic,readonly) int desiredTransportType;                                       //@synthesize desiredTransportType=_desiredTransportType - In the implementation block
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle;                                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) GEORouteGenerator * routeGenerator;                             //@synthesize routeGenerator=_routeGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<MNRouteManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<GEORoutePreloadSession> routePreloadSession; 
@property (nonatomic,retain) MNTraceRecorder * traceRecorder;                                  //@synthesize traceRecorder=_traceRecorder - In the implementation block
@property (nonatomic,retain) MNTracePlayer * tracePlayer;                                      //@synthesize tracePlayer=_tracePlayer - In the implementation block
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                          //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) GEODirectionsRouteRequest * request;                              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) MNRoute * currentRoute; 
@property (nonatomic,retain) NSData * prevRouteID;                                             //@synthesize prevRouteID=_prevRouteID - In the implementation block
@property (nonatomic,retain) MNRoute * userSelectedRoute;                                      //@synthesize userSelectedRoute=_userSelectedRoute - In the implementation block
@property (nonatomic,retain) GEORoute * userSelectedGeoRoute;                                  //@synthesize userSelectedGeoRoute=_userSelectedGeoRoute - In the implementation block
@property (nonatomic,readonly) id<MNRouteManagerTestingDelegate> testingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultRouteAttributes;
+(id)defaultRouteAttributesForNavigation;
-(void)setTracePlayer:(MNTracePlayer *)arg1 ;
-(MNTracePlayer *)tracePlayer;
-(void)cancelRoute;
-(MNTraceRecorder *)traceRecorder;
-(void)setTraceRecorder:(MNTraceRecorder *)arg1 ;
-(MNRouteSet *)activeRouteSet;
-(void)loadMaxRoutes:(unsigned)arg1 timepoint:(SCD_Struct_Di8*)arg2 errorHandler:(/*^block*/id)arg3 recordTrace:(BOOL)arg4 ;
-(void)selectRouteAtIndex:(unsigned long long)arg1 ;
-(void)stopNavETAUpdateRequests;
-(void)_updateRoutePreloading;
-(id)currentGeoRoute;
-(void)setUserSelectedRoute:(MNRoute *)arg1 ;
-(void)setUserSelectedGeoRoute:(GEORoute *)arg1 ;
-(void)setPrevRouteID:(NSData *)arg1 ;
-(void)_clearETAManager;
-(NSData *)prevRouteID;
-(void)setCurrentRoute:(MNRoute *)arg1 ;
-(int)routeState;
-(double)_straightLineDistanceToDestinationFromWaypoint:(id)arg1 ;
-(BOOL)_destinationShortEnoughForWalkingFromWaypoint:(id)arg1 ;
-(BOOL)_destinationTooLongForWalkingFromWayPoint:(id)arg1 ;
-(void)_handleRequesterResponse:(id)arg1 routeAttributes:(id)arg2 retrievedFromTrace:(BOOL)arg3 ;
-(void)_handleRequesterError:(id)arg1 problemDetails:(SCD_Struct_MN27*)arg2 ;
-(BOOL)_requestDirectionsFromTracePlayer:(id)arg1 finishedHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setRouteState:(int)arg1 ;
-(void)_getNewDirectionsMaxRouteCount:(unsigned)arg1 from:(id)arg2 routeHandle:(id)arg3 isReroute:(BOOL)arg4 type:(int)arg5 includeAlternateTransportTypes:(BOOL)arg6 timepoint:(SCD_Struct_Di8*)arg7 ;
-(GEORoute *)userSelectedGeoRoute;
-(void)_switchToContingentRoute:(id)arg1 atLocation:(id)arg2 routeCoordinate:(SCD_Struct_MN28)arg3 onRoute:(BOOL)arg4 ;
-(BOOL)findContingentRouteFrom:(id)arg1 transportType:(int)arg2 ;
-(void)setActiveRouteSet:(MNRouteSet *)arg1 ;
-(id<MNRouteManagerTestingDelegate>)testingDelegate;
-(void)_sendTrafficRerouteFeedbackForRoute:(id)arg1 etaRoute:(id)arg2 forcedReroute:(BOOL)arg3 ;
-(void)resetToNewRoute:(id)arg1 etaRoute:(id)arg2 forcedSwitch:(BOOL)arg3 ;
-(void)etaManagerUpdatedETATime:(id)arg1 ;
-(void)etaManager:(id)arg1 forceSwitchToNewRoute:(id)arg2 etaRoute:(id)arg3 ;
-(void)etaManager:(id)arg1 recommendsNewRoute:(id)arg2 etaRoute:(id)arg3 oldEstimatedTime:(unsigned)arg4 newEstimatedTime:(unsigned)arg5 ;
-(void)etaManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)etaManager:(id)arg1 receivedETAResponse:(id)arg2 ;
-(void)etaManager:(id)arg1 updatedRouteFromETARoute:(id)arg2 etaBehavior:(long long)arg3 routeRemainingDistance:(double)arg4 routeRemainingTime:(unsigned)arg5 ;
-(void)etaManager:(id)arg1 failedToReceiveETAResponse:(id)arg2 ;
-(void)etaManagerUpdatedTrafficIncidents:(id)arg1 ;
-(id)initWithDirectionsFrom:(id)arg1 to:(id)arg2 mapRegion:(id)arg3 type:(int)arg4 fromCurrentLocation:(BOOL)arg5 preloadRoutes:(BOOL)arg6 allowAlternateTypes:(BOOL)arg7 routeHandle:(id)arg8 withFeedback:(id)arg9 ;
-(void)markCurrentRoute;
-(void)didArriveAtLocation:(id)arg1 ;
-(void)recordCurrentRoute;
-(void)sendRouteFeedbackWithLocationWhereRouteWasCancelled:(id)arg1 audioFeedback:(SCD_Struct_MN30*)arg2 ;
-(BOOL)recalculateRouteFrom:(id)arg1 stepIndex:(unsigned long long)arg2 forceRepeatedRecalc:(BOOL)arg3 transportType:(int)arg4 ;
-(void)cancelRecalculation;
-(void)switchToNewRouteIfNecessaryFrom:(id)arg1 transportType:(int)arg2 ;
-(void)startNavETAUpdateRequests;
-(void)startNavETAOverviewRequests;
-(void)forceReroutingWithRouteResponse:(id)arg1 request:(id)arg2 ;
-(GEORouteGenerator *)routeGenerator;
-(MNETAManager *)etaManager;
-(int)desiredTransportType;
-(NSString *)voiceLanguage;
-(MNRoute *)userSelectedRoute;
-(MNRoute *)currentRoute;
-(void)dealloc;
-(void)setDelegate:(id<MNRouteManagerDelegate>)arg1 ;
-(id<MNRouteManagerDelegate>)delegate;
-(GEODirectionsRouteRequest *)request;
-(GEOComposedWaypoint *)origin;
-(void)reset;
-(GEOComposedWaypoint *)destination;
-(GEOURLRouteHandle *)routeHandle;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(void)setRequest:(GEODirectionsRouteRequest *)arg1 ;
-(void)updateLocation:(id)arg1 ;
@end

