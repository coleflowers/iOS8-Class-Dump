/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:42:46 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <Stocks/ChartUpdaterDelegate.h>
#import <Stocks/ChartIntervalButtonRowDelegate.h>
#import <Stocks/StockGraphViewContainer.h>
#import <Stocks/StockUpdateObserver.h>

@class LoadingLabel, ChartUpdater, ChartIntervalButtonRow, Stock, NSMutableArray, DashedLineView, UILabel, ChartTitleLabel, ChartHUDView, UIView, NSMutableDictionary, StocksViewController, StockChartData, NSError, StockChartDisplayMode, NSArray, NSString;

@interface StockChartView : UIView <ChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer, StockUpdateObserver> {

	LoadingLabel* _loadingLabel;
	ChartUpdater* _chartUpdater;
	ChartIntervalButtonRow* _intervalButtonRow;
	Stock* _stock;
	long long _selectedInterval;
	NSMutableArray* _axisViews;
	NSMutableArray* _xLabelViews;
	NSMutableArray* _yLabelViews;
	DashedLineView* _previousCloseLine;
	UILabel* _previousCloseLabel;
	ChartTitleLabel* _titleView;
	ChartHUDView* _HUDView;
	BOOL _animating;
	BOOL _layoutPending;
	UIView* _chartTopKeyline;
	UIView* _chartBottomKeyline;
	UIView* _xAxisKeyline;
	NSMutableArray* _displayModes;
	NSMutableDictionary* _graphViews;
	StocksViewController* _controller;
	StockChartData* _chartData;
	NSError* _error;
	StockChartDisplayMode* _currentDisplayMode;

}

@property (assign,nonatomic,__weak) StocksViewController * controller;                //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) Stock * stock;                                           //@synthesize stock=_stock - In the implementation block
@property (nonatomic,retain) StockChartData * chartData;                              //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) StockChartDisplayMode * currentDisplayMode;              //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (nonatomic,readonly) NSArray * alternateDisplayModes; 
@property (assign,nonatomic) long long selectedInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allCharts;
+(CGGradientRef)LineBackgroundGradient;
+(BOOL)anyChartLoading;
+(void)initialize;
-(void)createYLabelsForMode:(id)arg1 ;
-(void)addDisplayMode:(id)arg1 ;
-(void)setCurrentDisplayMode:(StockChartDisplayMode *)arg1 ;
-(void)setSelectedInterval:(long long)arg1 ;
-(void)setMaxChartInterval:(long long)arg1 ;
-(id)graphViewForMode:(id)arg1 ;
-(void)enumerateGraphsAndDisplayModesUsingBlock:(/*^block*/id)arg1 ;
-(id)currentGraphView;
-(void)_layoutTopLabelsHidden:(BOOL)arg1 ;
-(void)hideLabelsAxesAndGraphs;
-(void)_setShowingLoadingStatus:(BOOL)arg1 ;
-(void)layoutGraphViews;
-(void)_layoutIntervalButtonRow;
-(BOOL)shouldShowLoadingStatus;
-(void)_layoutVolumeSeparatorLineForGraphRect:(CGRect)arg1 ;
-(void)_layoutYLabels;
-(void)_layoutAxesAndXLabels;
-(void)layoutPreviousClose;
-(BOOL)isCurrentChart;
-(void)renderGraphDataIfNeeded;
-(void)updateHUDView;
-(void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)arg1 ;
-(void)renderGraphDataIfNeededForMode:(id)arg1 ;
-(void)setLabelsAndAxesAlpha:(double)arg1 ;
-(void)setShowingHUD:(BOOL)arg1 ;
-(void)layoutLoadingStatus;
-(long long)selectedInterval;
-(id)initWithStock:(id)arg1 initialDisplayMode:(id)arg2 ;
-(NSArray *)alternateDisplayModes;
-(id)chartUpdater;
-(void)reloadDataIfStale;
-(id)HUDView;
-(id)intervalButtonRow;
-(double)_evennessOfValue:(double)arg1 inRange:(double)arg2 ;
-(void)prepareForTransitionToDisplayMode:(id)arg1 ;
-(void)animateTransitionToDisplayMode:(id)arg1 ;
-(void)didTransitionToDisplayMode:(id)arg1 ;
-(void)setNeedsLayout;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(void)layoutIfNeeded;
-(void)forceLayout;
-(BOOL)isLoading;
-(StocksViewController *)controller;
-(void)setController:(StocksViewController *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(StockChartData *)chartData;
-(void)setChartData:(StockChartData *)arg1 ;
-(NSError *)error;
-(void)resetLocale;
-(void)clearData;
-(void)_prepareXAxisLabelsAndPositions;
-(void)_setHourLabels;
-(void)_setDayLabelsWithInterval:(unsigned)arg1 realTimePositions:(BOOL)arg2 ;
-(void)_setMonthAndYearLabels;
-(CGRect)lineGraphFrame;
-(StockChartDisplayMode *)currentDisplayMode;
-(CGRect)graphViewFrameForMode:(id)arg1 ;
-(double)lineGraphBottomPadding;
-(double)widestYLabelWidthForMode:(id)arg1 ;
-(void)stockGraphViewReadyForDisplay:(id)arg1 ;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
-(BOOL)hadError;
-(void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)chartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_layoutSubviews;
@end

