/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Weather/Weather-Structs.h>
@class CPBitmapStore, NSMutableDictionary, NSObject;

@interface WAWeatherUILabelCache : NSObject {

	CPBitmapStore* _store;
	NSMutableDictionary* _timeLabels;
	NSMutableDictionary* _temperatureLabels;
	NSMutableDictionary* _lightTemperatureLabels;
	NSMutableDictionary* _boldTemperatureLabels;
	NSMutableDictionary* _precipitationLabels;
	NSMutableDictionary* _cityCardNameLabels;
	NSMutableDictionary* _cityCardNameBaselines;
	NSMutableDictionary* _cityCardTempLabels;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) CPBitmapStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timeLabels;                          //@synthesize timeLabels=_timeLabels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * temperatureLabels;                   //@synthesize temperatureLabels=_temperatureLabels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lightTemperatureLabels;              //@synthesize lightTemperatureLabels=_lightTemperatureLabels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * boldTemperatureLabels;               //@synthesize boldTemperatureLabels=_boldTemperatureLabels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * precipitationLabels;                 //@synthesize precipitationLabels=_precipitationLabels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cityCardNameLabels;                  //@synthesize cityCardNameLabels=_cityCardNameLabels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cityCardNameBaselines;               //@synthesize cityCardNameBaselines=_cityCardNameBaselines - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cityCardTempLabels;                  //@synthesize cityCardTempLabels=_cityCardTempLabels - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
+(void)precacheLabels;
+(id)attributesForType:(unsigned long long)arg1 ;
+(id)imageForString:(id)arg1 attributes:(id)arg2 size:(CGSize)arg3 baselineOffset:(double*)arg4 outsets:(UIEdgeInsets*)arg5 ;
+(id)imageForString:(id)arg1 attributes:(id)arg2 ;
+(id)excessiveLineHeightCharacterSet;
+(UIEdgeInsets)outsetsForFont:(id)arg1 ;
+(id)imageForString:(id)arg1 attributes:(id)arg2 size:(CGSize)arg3 baselineOffset:(double*)arg4 ;
+(id)imageForLabelWithText:(id)arg1 withLightlabel:(BOOL)arg2 withFont:(id)arg3 ;
+(void)precacheTimes;
+(void)precacheWeekdays;
+(void)precacheTemperatures;
+(id)sharedUILabelCache;
+(void)_slowlyPrecacheTimes;
+(void)_slowlyPrecacheTemperatures;
+(id)imageForTime:(id)arg1 bold:(BOOL)arg2 ;
+(id)imageForWeekday:(id)arg1 ;
+(id)imageForTemperature:(id)arg1 withStyle:(unsigned long long)arg2 ;
+(void)precacheSpecialCaseText:(id)arg1 ;
+(id)imageForAttributedString:(id)arg1 ;
+(id)imageForLabelWithText:(id)arg1 withLightlabel:(BOOL)arg2 withFont:(id)arg3 limitToWidth:(double)arg4 ;
+(id)imageForLabelWithText:(id)arg1 withLightlabel:(BOOL)arg2 ;
+(void)precachePrecipitation;
+(id)imageForPrecipitation:(id)arg1 ;
+(id)imageForCityCardName:(id)arg1 ;
+(double)baselineForCityCardName:(id)arg1 ;
+(UIEdgeInsets)outsetsForString:(id)arg1 withLabelType:(unsigned long long)arg2 ;
-(void)setCityCardNameLabels:(NSMutableDictionary *)arg1 ;
-(void)setCityCardNameBaselines:(NSMutableDictionary *)arg1 ;
-(void)setCityCardTempLabels:(NSMutableDictionary *)arg1 ;
-(void)deleteAndCreateCache;
-(void)userTextSizeDidChange;
-(NSMutableDictionary *)timeLabels;
-(NSMutableDictionary *)temperatureLabels;
-(id)cachedImageForTime:(id)arg1 bold:(BOOL)arg2 ;
-(id)cachedImageForWeekday:(id)arg1 ;
-(NSMutableDictionary *)lightTemperatureLabels;
-(NSMutableDictionary *)boldTemperatureLabels;
-(NSMutableDictionary *)precipitationLabels;
-(NSMutableDictionary *)cityCardNameLabels;
-(NSMutableDictionary *)cityCardNameBaselines;
-(void)setTimeLabels:(NSMutableDictionary *)arg1 ;
-(void)setTemperatureLabels:(NSMutableDictionary *)arg1 ;
-(void)setLightTemperatureLabels:(NSMutableDictionary *)arg1 ;
-(void)setBoldTemperatureLabels:(NSMutableDictionary *)arg1 ;
-(void)setPrecipitationLabels:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cityCardTempLabels;
-(CPBitmapStore *)store;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resetLocale;
@end
