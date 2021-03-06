/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBSlideToUnlockFailureRecognizerSettings : _UISettings {

	BOOL _enabled;
	BOOL _viewDebugArea;
	unsigned long long _maxAllowableVerticalOffset;
	double _topAngle;
	double _bottomAngle;

}

@property (assign,nonatomic) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL viewDebugArea;                                         //@synthesize viewDebugArea=_viewDebugArea - In the implementation block
@property (assign,nonatomic) unsigned long long maxAllowableVerticalOffset;              //@synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset - In the implementation block
@property (assign,nonatomic) double topAngle;                                            //@synthesize topAngle=_topAngle - In the implementation block
@property (assign,nonatomic) double bottomAngle;                                         //@synthesize bottomAngle=_bottomAngle - In the implementation block
+(id)settingsControllerModule;
-(void)setViewDebugArea:(BOOL)arg1 ;
-(void)setMaxAllowableVerticalOffset:(unsigned long long)arg1 ;
-(void)setTopAngle:(double)arg1 ;
-(void)setBottomAngle:(double)arg1 ;
-(BOOL)viewDebugArea;
-(unsigned long long)maxAllowableVerticalOffset;
-(double)topAngle;
-(double)bottomAngle;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setDefaultValues;
@end

