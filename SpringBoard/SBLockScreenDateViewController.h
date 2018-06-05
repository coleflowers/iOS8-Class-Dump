/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSTimer, _UILegibilitySettings;

@interface SBLockScreenDateViewController : UIViewController {

	NSTimer* _updateTimer;
	BOOL _disablesUpdates;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,getter=isDateHidden,nonatomic) BOOL dateHidden; 
@property (assign,nonatomic) BOOL disablesUpdates;                                    //@synthesize disablesUpdates=_disablesUpdates - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(void)_addObservers;
-(id)dateViewIfExists;
-(void)_updateFormat;
-(void)_backlightChanged;
-(void)setDisablesUpdates:(BOOL)arg1 ;
-(BOOL)disablesUpdates;
-(void)dealloc;
-(void)setView:(id)arg1 ;
-(void)_updateView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isDateHidden;
-(void)setDateHidden:(BOOL)arg1 ;
-(void)setContentAlpha:(double)arg1 withDateVisible:(BOOL)arg2 ;
-(void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2 ;
-(id)dateView;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
@end
