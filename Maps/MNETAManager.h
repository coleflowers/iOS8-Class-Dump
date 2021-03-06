/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/GEOResourceManifestTileGroupObserver.h>
#import <Maps/GEOETAUpdaterDelegate.h>

@protocol MNETAManagerDelegate;
@class GEOETAUpdater, NSMapTable, MNRouteSet, NSString;

@interface MNETAManager : NSObject <GEOResourceManifestTileGroupObserver, GEOETAUpdaterDelegate> {

	GEOETAUpdater* _etaUpdater;
	NSMapTable* _routesStepsLookup;
	MNRouteSet* _currentRouteSet;
	NSMapTable* _etaRoutesTable;
	id<MNETAManagerDelegate> _delegate;
	long long _etaBehavior;

}

@property (assign,nonatomic,__weak) id<MNETAManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long etaBehavior;                                 //@synthesize etaBehavior=_etaBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateCurrentRoute:(id)arg1 ;
-(void)updateUserLocation:(id)arg1 routeMatch:(id)arg2 ;
-(void)useRouteSet:(id)arg1 ;
-(void)setEtaBehavior:(long long)arg1 ;
-(id)initWithTracePlayer:(id)arg1 ;
-(id)etaRouteForRoute:(id)arg1 ;
-(void)_updateRequestInterval;
-(BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(void)_createCurrentRouteStepsLookup;
-(void)_updateRouteStepsLookupWithContingentRoutes;
-(long long)etaBehavior;
-(void)dealloc;
-(void)setDelegate:(id<MNETAManagerDelegate>)arg1 ;
-(id)init;
-(id<MNETAManagerDelegate>)delegate;
-(void)reset;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(BOOL)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4 ;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

