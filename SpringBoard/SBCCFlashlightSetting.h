/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@protocol OS_dispatch_queue;
@class AVFlashlight, NSObject;

@interface SBCCFlashlightSetting : SBCCSettingModule {

	AVFlashlight* _flashlight;
	NSObject*<OS_dispatch_queue> _flashlightQueue;
	BOOL _stayWarm;
	BOOL _flashlightOn;

}

@property (assign,getter=isFlashlightOn,nonatomic) BOOL flashlightOn;              //@synthesize flashlightOn=_flashlightOn - In the implementation block
+(BOOL)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(void)warmup;
-(void)cooldown;
-(void)_deviceBlockStateDidChangeNotification:(id)arg1 ;
-(void)_featureLockStateDidChangeNotification:(id)arg1 ;
-(void)_updateFlashlightPowerState;
-(BOOL)_enableTorch:(BOOL)arg1 ;
-(BOOL)isFlashlightOn;
-(id)_settingImageNameForState:(int)arg1 ;
-(id)_shortcutImageNameForState:(int)arg1 ;
-(id)_imageNameForState:(int)arg1 section:(int)arg2 ;
-(id)statusUpdate;
-(id)unavailableText;
-(id)glyphImageForState:(int)arg1 section:(int)arg2 ;
-(void)_tearDown;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)displayName;
-(void)setFlashlightOn:(BOOL)arg1 ;
@end

