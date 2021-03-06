/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StopWatchControlsTarget;
@class MTCircleButton;

@interface MTStopwatchController : NSObject {

	int _mode;
	id<StopWatchControlsTarget> _target;
	MTCircleButton* _leftButton;
	MTCircleButton* _rightButton;
	unsigned long long _buttonSize;

}

@property (nonatomic,readonly) id<StopWatchControlsTarget> target;               //@synthesize target=_target - In the implementation block
@property (nonatomic,retain,readonly) MTCircleButton * leftButton;               //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain,readonly) MTCircleButton * rightButton;              //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic) int mode;                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long buttonSize;                      //@synthesize buttonSize=_buttonSize - In the implementation block
-(void)_leftButtonDown:(id)arg1 ;
-(void)_rightButtonDown:(id)arg1 ;
-(void)setMode:(int)arg1 force:(BOOL)arg2 ;
-(void)setButtonSize:(unsigned long long)arg1 ;
-(unsigned long long)buttonSize;
-(void)dealloc;
-(id<StopWatchControlsTarget>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(MTCircleButton *)leftButton;
-(MTCircleButton *)rightButton;
@end

