/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartDataSetDataSource.h>
#import <Health/NSCopying.h>

@protocol WDChartDataGroupDataSource;
@class NSNumber, NSArray, NSString;

@interface WDChartDataGroup : NSObject <WDChartDataSetDataSource, NSCopying> {

	NSNumber* _minYValue;
	NSNumber* _maxYValue;
	id<WDChartDataGroupDataSource> _dataSource;
	NSArray* _dataSets;

}

@property (assign,nonatomic,__weak) id<WDChartDataGroupDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * dataSets;                                            //@synthesize dataSets=_dataSets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)averageYValue;
-(void)_updateMinMaxValues;
-(id)_findMinYValue;
-(id)_findMaxYValue;
-(id)_getAnnotationForPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(id)dataSet:(id)arg1 annotationForPointAtIndex:(unsigned long long)arg2 ;
-(void)setDataSource:(id<WDChartDataGroupDataSource>)arg1 ;
-(void)reloadData;
-(id)init;
-(NSString *)description;
-(id<WDChartDataGroupDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)dataSetAtIndex:(unsigned long long)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)minXValue;
-(id)maxXValue;
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1 ;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2 ;
-(id)dataPointsForSet:(id)arg1 ;
-(unsigned long long)_getNumberOfDataSets;
-(id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1 ;
-(void)_reloadDataSet:(id)arg1 ;
-(unsigned long long)_getNumberOfDataPointsInSetAtIndex:(unsigned long long)arg1 ;
-(id)_getPointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(id)_getPointsForSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDataSets;
-(void)reloadDataInSetAtIndex:(unsigned long long)arg1 ;
-(void)reloadDataPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(void)addDataPointWithXValue:(double)arg1 yValue:(double)arg2 setIndex:(unsigned long long)arg3 ;
-(void)removeDataPointFromSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(NSArray *)dataSets;
-(void)setDataSets:(NSArray *)arg1 ;
@end
