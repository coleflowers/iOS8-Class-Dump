/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/NSCopying.h>

@class NSString, GEOStorageRouteRequestStorage;

@interface DirectionsPlan : PBCodable <NSCopying> {

	double _arrivalTime;
	unsigned long long _currentRouteIndex;
	unsigned long long _currentRouteStep;
	double _departureTime;
	NSString* _destinationString;
	int _displayMethod;
	NSString* _originString;
	GEOStorageRouteRequestStorage* _routeRequestStorage;
	SCD_Struct_Ma37 _has;

}

@property (nonatomic,readonly) BOOL hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginString; 
@property (nonatomic,retain) NSString * originString;                                          //@synthesize originString=_originString - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationString; 
@property (nonatomic,retain) NSString * destinationString;                                     //@synthesize destinationString=_destinationString - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) double departureTime;                                             //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalTime; 
@property (assign,nonatomic) double arrivalTime;                                               //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRouteIndex; 
@property (assign,nonatomic) unsigned long long currentRouteIndex;                             //@synthesize currentRouteIndex=_currentRouteIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRouteStep; 
@property (assign,nonatomic) unsigned long long currentRouteStep;                              //@synthesize currentRouteStep=_currentRouteStep - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayMethod; 
@property (assign,nonatomic) int displayMethod;                                                //@synthesize displayMethod=_displayMethod - In the implementation block
-(void)setDisplayMethod:(int)arg1 ;
-(void)setOriginString:(NSString *)arg1 ;
-(void)setDestinationString:(NSString *)arg1 ;
-(void)setCurrentRouteIndex:(unsigned long long)arg1 ;
-(void)setCurrentRouteStep:(unsigned long long)arg1 ;
-(NSString *)originString;
-(NSString *)destinationString;
-(BOOL)hasDisplayMethod;
-(int)displayMethod;
-(unsigned long long)currentRouteIndex;
-(unsigned long long)currentRouteStep;
-(BOOL)hasOriginString;
-(BOOL)hasDestinationString;
-(void)setArrivalTime:(double)arg1 ;
-(void)setHasArrivalTime:(BOOL)arg1 ;
-(BOOL)hasArrivalTime;
-(void)setHasCurrentRouteIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentRouteIndex;
-(void)setHasCurrentRouteStep:(BOOL)arg1 ;
-(BOOL)hasCurrentRouteStep;
-(void)setHasDisplayMethod:(BOOL)arg1 ;
-(double)arrivalTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDepartureTime:(double)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(double)departureTime;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(BOOL)hasRouteRequestStorage;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

