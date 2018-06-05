/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UIView.h>

@class NSNumber;

@interface WDChartBackgroundView : UIView {

	BOOL _hideAverageLine;
	BOOL _hideMinMaxLabels;
	BOOL _showNoDataLabel;
	NSNumber* _maxValue;
	NSNumber* _maxDataValue;
	NSNumber* _minValue;
	NSNumber* _averageValue;
	UIEdgeInsets _chartInsets;

}

@property (nonatomic,readonly) NSNumber * maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxDataValue;              //@synthesize maxDataValue=_maxDataValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) NSNumber * averageValue;              //@synthesize averageValue=_averageValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chartInsets;               //@synthesize chartInsets=_chartInsets - In the implementation block
@property (assign,nonatomic) BOOL hideAverageLine;                   //@synthesize hideAverageLine=_hideAverageLine - In the implementation block
@property (assign,nonatomic) BOOL hideMinMaxLabels;                  //@synthesize hideMinMaxLabels=_hideMinMaxLabels - In the implementation block
@property (assign,nonatomic) BOOL showNoDataLabel;                   //@synthesize showNoDataLabel=_showNoDataLabel - In the implementation block
-(UIEdgeInsets)chartInsets;
-(void)setChartInsets:(UIEdgeInsets)arg1 ;
-(void)setMinValue:(id)arg1 maxValue:(id)arg2 averageValue:(id)arg3 maxDataValue:(id)arg4 ;
-(void)setShowNoDataLabel:(BOOL)arg1 ;
-(NSNumber *)averageValue;
-(void)setHideAverageLine:(BOOL)arg1 ;
-(void)setHideMinMaxLabels:(BOOL)arg1 ;
-(BOOL)hideMinMaxLabels;
-(BOOL)hideAverageLine;
-(NSNumber *)maxDataValue;
-(BOOL)showNoDataLabel;
-(NSNumber *)maxValue;
-(id)init;
-(NSNumber *)minValue;
@end
