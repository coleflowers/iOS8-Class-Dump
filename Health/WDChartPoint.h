/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, WDChartPointAnnotation;


@protocol WDChartPoint <NSObject>
@property (nonatomic,retain) NSDate * xValue; 
@property (nonatomic,retain) id yValue; 
@property (nonatomic,retain) WDChartPointAnnotation * annotation; 
@required
-(id)averageYValue;
-(WDChartPointAnnotation *)annotation;
-(void)setAnnotation:(id)arg1;
-(id)minYValue;
-(id)maxYValue;
-(id)allYValues;
-(NSDate *)xValue;
-(id)yValue;
-(id)yValueForKey:(id)arg1;
-(double)yValueFloatRepresentation;
-(void)setXValue:(id)arg1;
-(void)setYValue:(id)arg1;

@end

