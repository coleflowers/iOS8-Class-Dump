/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/NSCopying.h>

@protocol WDChartDataSetDataSource;
@class NSArray;

@interface WDChartDataSet : NSObject <NSCopying> {

	NSArray* _data;
	id<WDChartDataSetDataSource> _dataSource;
	long long _tag;

}

@property (assign,nonatomic,__weak) id<WDChartDataSetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long tag;                                               //@synthesize tag=_tag - In the implementation block
-(id)averageYValue;
-(id)allDataPoints;
-(id)totalYValue;
-(id)_getChartPointAndAnnotationAtIndex:(unsigned long long)arg1 ;
-(id)_getAnnotationForPointAtIndex:(unsigned long long)arg1 ;
-(id)annotationForPointAtIndex:(unsigned long long)arg1 ;
-(void)addDataPointWithXValue:(id)arg1 yValue:(id)arg2 annotation:(id)arg3 ;
-(id)_getChartPointsAndAnnotations;
-(void)setDataSource:(id<WDChartDataSetDataSource>)arg1 ;
-(void)reloadData;
-(id)description;
-(id<WDChartDataSetDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)minXValue;
-(id)maxXValue;
-(void)normalizeDataWithMinYValue:(id)arg1 maxYValue:(id)arg2 minXValue:(id)arg3 maxXValue:(id)arg4 ;
-(unsigned long long)_getNumberOfDataPoints;
-(id)_getPointAtIndex:(unsigned long long)arg1 ;
-(id)_getPoints;
-(unsigned long long)numDataPoints;
-(id)yValueForPointAtIndex:(unsigned long long)arg1 ;
-(id)yValueForPointAtIndex:(unsigned long long)arg1 key:(id)arg2 ;
-(id)xValueForPointAtIndex:(unsigned long long)arg1 ;
-(void)normalizeData;
-(void)reloadDataPointAtIndex:(unsigned long long)arg1 ;
-(void)removeDataPointAtIndex:(unsigned long long)arg1 ;
-(id)pointAtIndex:(unsigned long long)arg1 ;
@end

