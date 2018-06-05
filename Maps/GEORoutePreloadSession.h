/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOComposedRoute;


@protocol GEORoutePreloadSession <NSObject>
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (__weak) id<GEORoutePreloadSessionDelegate> delegate; 
@property (assign,nonatomic) unsigned long long networkQuality; 
@required
-(void)preloaderLog:(id)arg1;
-(void)setNetworkQuality:(unsigned long long)arg1;
-(void)setDelegate:(id)arg1;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)stopLoading;
-(unsigned long long)networkQuality;
-(void)updateWithRouteMatch:(id)arg1;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(GEOComposedRoute *)route;
-(BOOL)fullDebuggingEnabled;
-(void)getPreloadSetCoordinates:(SCD_Struct_RA0*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
-(int)preloadStateForTile:(const GEOTileKey*)arg1;
-(void)beginLoading;
-(BOOL)loggingEnabled;

@end

