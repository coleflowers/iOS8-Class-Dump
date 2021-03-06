/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIView.h>

@class WADynamicWeatherBackground, WAWeatherCityView;

@interface WAPlaceholderCell : UIView {

	WADynamicWeatherBackground* _backgroundView;
	WAWeatherCityView* _cityView;

}

@property (nonatomic,retain) WADynamicWeatherBackground * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) WAWeatherCityView * cityView;                             //@synthesize cityView=_cityView - In the implementation block
-(WAWeatherCityView *)cityView;
-(void)setParallaxOffset:(double)arg1 ;
-(void)setCityView:(WAWeatherCityView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundView:(WADynamicWeatherBackground *)arg1 ;
-(WADynamicWeatherBackground *)backgroundView;
@end

