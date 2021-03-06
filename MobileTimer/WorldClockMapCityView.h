/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/Clock.h>

@class WorldClockCity, UILabel, UIImageView, NSDateFormatter;

@interface WorldClockMapCityView : UIView <Clock> {

	WorldClockCity* _city;
	UILabel* _timeLabel;
	UILabel* _nameLabel;
	UILabel* _temperatureLabel;
	UIImageView* _conditionImageView;
	NSDateFormatter* _timeFormatter;
	int _weatherIconPlacement;
	BOOL _doneFirstLayout;

}

@property (nonatomic,retain,readonly) WorldClockCity * city;              //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSDateFormatter * timeFormatter;               //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (assign,nonatomic) int weatherIconPlacement;                    //@synthesize weatherIconPlacement=_weatherIconPlacement - In the implementation block
@property (nonatomic,readonly) int runMode; 
+(id)secondaryLabelFont;
-(void)handleLocaleChange;
-(void)weatherDataUpdated;
-(void)setTimeLabelWidth:(double)arg1 ;
-(void)setTemperatureLabelWidth:(double)arg1 ;
-(id)initWithCity:(id)arg1 ;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setWeatherIconPlacement:(int)arg1 ;
-(int)weatherIconPlacement;
-(CGPoint)hotspotOffsetForPlacement:(int)arg1 ;
-(CGSize)sizeForIntersectionWithCityView:(id)arg1 atOrigin:(CGPoint)arg2 selfOrigin:(CGPoint)arg3 ;
-(CGPoint)hotspotOffset;
-(id)temperatureString;
-(void)setConditionCodeFromCity:(id)arg1 ;
-(id)labelViews;
-(CGRect)conditionImageFrameForPlacement:(int)arg1 ;
-(WorldClockCity *)city;
-(void)setCity:(WorldClockCity *)arg1 ;
-(NSDateFormatter *)timeFormatter;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutIfNeeded;
-(void)start;
-(void)stop;
-(int)runMode;
-(void)updateTime;
@end

