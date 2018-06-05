/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartSeries.h>

@class NSArray, UIColor;

@interface WDMinMaxSeries : WDChartSeries {

	NSArray* _dataPoints;
	long long _maxPointStyle;
	long long _minPointStyle;
	UIColor* _pointColor;
	UIColor* _fillColor;
	double _pointRadius;
	double _pointLineWidth;

}

@property (assign,nonatomic) long long maxPointStyle;              //@synthesize maxPointStyle=_maxPointStyle - In the implementation block
@property (assign,nonatomic) long long minPointStyle;              //@synthesize minPointStyle=_minPointStyle - In the implementation block
@property (nonatomic,retain) UIColor * pointColor;                 //@synthesize pointColor=_pointColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                  //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double pointRadius;                   //@synthesize pointRadius=_pointRadius - In the implementation block
@property (assign,nonatomic) double pointLineWidth;                //@synthesize pointLineWidth=_pointLineWidth - In the implementation block
-(void)prepareForRenderingWithSize:(CGSize)arg1 minXValue:(id)arg2 maxXValue:(id)arg3 minYValue:(id)arg4 maxYValue:(id)arg5 insets:(UIEdgeInsets)arg6 dataSet:(id)arg7 ;
-(void)renderChartInContext:(CGContextRef)arg1 ;
-(void)renderFillInContext:(CGContextRef)arg1 ;
-(void)setPointLineWidth:(double)arg1 ;
-(void)setMinPointStyle:(long long)arg1 ;
-(void)setMaxPointStyle:(long long)arg1 ;
-(id)_getPointsFromDataSet;
-(void)_addPointClipToContext:(CGContextRef)arg1 ;
-(void)_renderPointMarkersInContext:(CGContextRef)arg1 ;
-(void)_renderChartPoint:(id)arg1 atPosition:(CGPoint)arg2 context:(CGContextRef)arg3 shouldApplyToCurrentState:(BOOL)arg4 ;
-(double)pointLineWidth;
-(void)_enumerateChartPointsWithMinMaxHandler:(/*^block*/id)arg1 centerPointHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldUseCenterPointForMin:(CGPoint)arg1 max:(CGPoint)arg2 ;
-(long long)maxPointStyle;
-(long long)minPointStyle;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
-(double)pointRadius;
-(void)setPointRadius:(double)arg1 ;
@end

