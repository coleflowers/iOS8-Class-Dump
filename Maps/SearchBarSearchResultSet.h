/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SearchBarSearchResultSet : NSObject {

	NSArray* _results;
	unsigned long long _count;

}

@property (nonatomic,readonly) NSArray * results;                     //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)initWithResults:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(NSArray *)results;
@end

