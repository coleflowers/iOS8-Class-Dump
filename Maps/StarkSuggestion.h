/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/NSCopying.h>

@class NSString, MKMapItem, NSURL, NSDate, RTRoute;

@interface StarkSuggestion : NSObject <NSCopying> {

	int _suggestionType;
	int _routineType;
	NSString* _name;
	MKMapItem* _mapItem;
	NSURL* _url;
	NSDate* _date;
	RTRoute* _usualRoute;

}

@property (nonatomic,readonly) int suggestionType;               //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign,nonatomic) int routineType;                    //@synthesize routineType=_routineType - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) RTRoute * usualRoute;               //@synthesize usualRoute=_usualRoute - In the implementation block
-(id)initWithSuggestionType:(int)arg1 mapItem:(id)arg2 url:(id)arg3 date:(id)arg4 ;
-(RTRoute *)usualRoute;
-(int)suggestionType;
-(int)routineType;
-(void)setRoutineType:(int)arg1 ;
-(void)setUsualRoute:(RTRoute *)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

