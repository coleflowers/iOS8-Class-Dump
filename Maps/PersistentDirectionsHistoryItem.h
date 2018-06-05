/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/NSCopying.h>
#import <Maps/HistoryItem.h>

@class NSData, SearchResult, NSString;

@interface PersistentDirectionsHistoryItem : PBCodable <NSCopying, HistoryItem> {

	double _position;
	double _timestamp;
	NSData* _directionsResponseID;
	SearchResult* _endSearchResult;
	NSString* _reportAProblemAttachment;
	SearchResult* _startSearchResult;
	NSString* _syncIdentifier;
	int _transportType;
	SCD_Struct_Di7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasStartSearchResult; 
@property (nonatomic,retain) SearchResult * startSearchResult;                 //@synthesize startSearchResult=_startSearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasEndSearchResult; 
@property (nonatomic,retain) SearchResult * endSearchResult;                   //@synthesize endSearchResult=_endSearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                    //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) BOOL hasReportAProblemAttachment; 
@property (nonatomic,retain) NSString * reportAProblemAttachment;              //@synthesize reportAProblemAttachment=_reportAProblemAttachment - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                        //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                  //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
-(int)type;
-(SearchResult *)endSearchResult;
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(SearchResult *)startSearchResult;
-(BOOL)hasSyncIdentifier;
-(void)setStartSearchResult:(SearchResult *)arg1 ;
-(void)setEndSearchResult:(SearchResult *)arg1 ;
-(void)setReportAProblemAttachment:(NSString *)arg1 ;
-(BOOL)hasStartSearchResult;
-(BOOL)hasEndSearchResult;
-(BOOL)hasReportAProblemAttachment;
-(NSString *)reportAProblemAttachment;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasPosition;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
@end

