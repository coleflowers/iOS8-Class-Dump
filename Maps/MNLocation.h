/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <CoreLocation/CLLocation.h>

@class GEORouteMatch, VKMapMatch, CLLocation, NSString;

@interface MNLocation : CLLocation {

	int _state;
	GEORouteMatch* _routeMatch;
	VKMapMatch* _roadMatch;
	CLLocation* _rawLocation;
	NSString* _roadName;
	long long _shieldType;
	NSString* _shieldText;
	BOOL _locationUnreliable;

}

@property (nonatomic,readonly) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * roadName; 
@property (nonatomic,readonly) BOOL hadRouteToCompare; 
@property (nonatomic,retain) GEORouteMatch * routeMatch;              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) VKMapMatch * roadMatch;                //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,readonly) CLLocation * rawLocation;              //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) double routeAccuracy; 
@property (nonatomic,readonly) long long shieldType;                  //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                 //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) BOOL locationUnreliable;                 //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (nonatomic,readonly) BOOL isProjected; 
+(id)locationWithRawLocation:(id)arg1 routeMatch:(id)arg2 roadName:(id)arg3 shieldType:(long long)arg4 shieldText:(id)arg5 useMatchLocation:(BOOL)arg6 ;
+(id)locationWithRawLocation:(id)arg1 ;
+(id)locationWithRawLocation:(id)arg1 coordinate:(SCD_Struct_RA0)arg2 course:(double)arg3 ;
+(id)locationWithRawLocation:(id)arg1 roadMatch:(id)arg2 roadName:(id)arg3 useMatchLocation:(BOOL)arg4 ;
-(BOOL)isProjected;
-(NSString *)shieldText;
-(id)initWithRawLocation:(id)arg1 coordinate:(SCD_Struct_RA0)arg2 course:(double)arg3 ;
-(id)initWithRawLocation:(id)arg1 routeMatch:(id)arg2 roadName:(id)arg3 shieldType:(long long)arg4 shieldText:(id)arg5 useMatchLocation:(BOOL)arg6 ;
-(id)initWithRawLocation:(id)arg1 roadMatch:(id)arg2 roadName:(id)arg3 useMatchLocation:(BOOL)arg4 ;
-(double)routeAccuracy;
-(BOOL)hadRouteToCompare;
-(VKMapMatch *)roadMatch;
-(BOOL)hasValidCourse;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)locationUnreliable;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(CLLocation *)rawLocation;
-(long long)shieldType;
-(BOOL)isStale;
-(GEORouteMatch *)routeMatch;
-(NSString *)roadName;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
@end

