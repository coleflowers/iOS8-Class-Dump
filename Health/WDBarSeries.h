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

@interface WDBarSeries : WDChartSeries {

	NSArray* _dataPoints;
	int _lineCapStyle;
	UIColor* _fillColor;
	double _barWidth;
	double _bottomPadding;

}

@property (nonatomic,retain) UIColor * fillColor;               //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double barWidth;                   //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) int lineCapStyle;                  //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) double bottomPadding;              //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(void)prepareForRenderingWithSize:(CGSize)arg1 minXValue:(id)arg2 maxXValue:(id)arg3 minYValue:(id)arg4 maxYValue:(id)arg5 insets:(UIEdgeInsets)arg6 dataSet:(id)arg7 ;
-(void)renderFillInContext:(CGContextRef)arg1 ;
-(id)_getPointsFromDataSet;
-(void)_enumerateChartPointsWithHandler:(/*^block*/id)arg1 ;
-(CGPoint)_basePointForPoint:(CGPoint)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(double)bottomPadding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)lineCapStyle;
-(void)setLineCapStyle:(int)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)barWidth;
-(void)setBarWidth:(double)arg1 ;
@end
