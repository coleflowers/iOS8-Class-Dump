/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/NSCopying.h>
#import <Maps/HistoryItem.h>
#import <Maps/SyncingHistoryItem.h>

@class SearchResult, MSPSearchRequestStorage, NSData, NSString;

@interface DirectionsHistoryItem : NSObject <NSCopying, HistoryItem, SyncingHistoryItem> {

	SearchResult* _startSearchResult;
	SearchResult* _endSearchResult;
	MSPSearchRequestStorage* _storage;
	NSData* _directionsResponseID;
	NSString* _reportAProblemAttachment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) SearchResult * startSearchResult; 
@property (nonatomic,readonly) SearchResult * endSearchResult; 
@property (nonatomic,retain) NSString * syncIdentifier; 
@property (nonatomic,retain) NSData * directionsResponseID;                    //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) MSPSearchRequestStorage * storage; 
@property (nonatomic,readonly) NSData * data; 
-(BOOL)updateFromSyncData:(id)arg1 ;
-(BOOL)isValid;
-(NSData *)syncData;
-(SearchResult *)endSearchResult;
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(void)updateWithStorage:(id)arg1 ;
-(SearchResult *)startSearchResult;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(id)initWithStartSearchResult:(id)arg1 endSearchResult:(id)arg2 directionsMode:(unsigned long long)arg3 timestamp:(double)arg4 ;
-(int)_geoTransportTypeForMKDirectionsTransportType:(unsigned long long)arg1 ;
-(void)updateFromStartSearchResult:(id)arg1 endSearchResult:(id)arg2 ;
-(void)_geocodeSearchResultIfNeeded:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(MSPSearchRequestStorage *)storage;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
@end

