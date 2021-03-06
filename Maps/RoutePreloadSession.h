/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/GEOResourceManifestTileGroupObserver.h>
#import <Maps/GEORoutePreloadSession.h>

@protocol RoutePreloadCamera, GEORoutePreloadSessionDelegate;
@class GEOComposedRoute, GEOTileKeyList, NSMutableArray, NSMapTable, NSTimer, NSString;

@interface RoutePreloadSession : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {

	GEOComposedRoute* _route;
	id<RoutePreloadCamera> _camera;
	GEOTileKeyList* _tilesLoadingOrLoaded;
	GEOTileKeyList* _tilesReceived;
	GEOTileKeyList* _tilesMissed;
	BOOL _loggingEnabled;
	BOOL _minimalDebuggingEnabled;
	BOOL _fullDebuggingEnabled;
	NSMutableArray* _steps;
	unsigned _stepGeneration;
	double _currentRoutePosition;
	BOOL _tooFarFromRoute;
	long long _currentLoadingSteps;
	NSMapTable* _stepErrors;
	NSMapTable* _stepLifetimeErrors;
	BOOL _enabled;
	BOOL _paused;
	BOOL _anyErrors;
	BOOL _finished;
	double _beginTime;
	double _mostRecentErrorTime;
	unsigned long long _networkQuality;
	int _downloadState;
	BOOL _hadEnoughTilesToDisableNetworking;
	NSTimer* _geodCrashTimer;
	/*^block*/id _batteryHandler;
	id<GEORoutePreloadSessionDelegate> delegate;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                     //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) unsigned long long networkQuality;              //@synthesize networkQuality=_networkQuality - In the implementation block
@property (nonatomic,retain) id<RoutePreloadCamera> camera;                  //@synthesize camera=_camera - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<GEORoutePreloadSessionDelegate> delegate; 
-(void)_retryFailures;
-(void)tilesChanged;
-(void)_resetErrCounts;
-(void)_performNextRequests;
-(void)_cancelStep:(id)arg1 ;
-(id)_descriptionForStep:(id)arg1 ;
-(void)_geodCrashed:(id)arg1 ;
-(void)_incrementErrorForStep:(id)arg1 ;
-(void)_evaluateNetworkPerformance:(id)arg1 ;
-(BOOL)_loadStep:(id)arg1 requireWiFi:(BOOL)arg2 ;
-(void)_cancelAllSteps;
-(void)_accumulateSteps;
-(void)_cancelRequestsInPast;
-(void)preloaderLog:(id)arg1 ;
-(void)setNetworkQuality:(unsigned long long)arg1 ;
-(id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)setDelegate:(id<GEORoutePreloadSessionDelegate>)arg1 ;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)stopLoading;
-(void)pause;
-(unsigned long long)networkQuality;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)unpause;
-(id<RoutePreloadCamera>)camera;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setCamera:(id<RoutePreloadCamera>)arg1 ;
-(GEOComposedRoute *)route;
-(BOOL)fullDebuggingEnabled;
-(void)getPreloadSetCoordinates:(SCD_Struct_RA0*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3 ;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)beginLoading;
-(BOOL)loggingEnabled;
@end

