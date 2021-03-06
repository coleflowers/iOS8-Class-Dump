/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HourlyScrollerBeltDelegate;
@class NSMutableArray, NSString;

@interface HourlyScrollerBeltView : UIScrollView <UIScrollViewDelegate> {

	id<HourlyScrollerBeltDelegate> _hourlyScrollerDelegate;
	NSMutableArray* _cells;

}

@property (assign,nonatomic) id<HourlyScrollerBeltDelegate> hourlyScrollerDelegate;              //@synthesize hourlyScrollerDelegate=_hourlyScrollerDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                                             //@synthesize cells=_cells - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)height;
-(void)userTextSizeDidChange;
-(void)setHourlyScrollerDelegate:(id<HourlyScrollerBeltDelegate>)arg1 ;
-(void)resetScrollerOffsets;
-(id)forecasts;
-(id)temperatureInUserUnitsForString:(id)arg1 ;
-(id)condensedTimeInRegionFormatForString:(id)arg1 ;
-(void)_temperatureUnitDidChange;
-(id<HourlyScrollerBeltDelegate>)hourlyScrollerDelegate;
-(void)setCells:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetLocale;
-(NSMutableArray *)cells;
@end

