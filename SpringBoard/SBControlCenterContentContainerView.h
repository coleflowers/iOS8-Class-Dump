/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBControlCenterObserver.h>

@class UIView, _UIBackdropView, SBControlCenterContentView, NSString;

@interface SBControlCenterContentContainerView : UIView <SBControlCenterObserver> {

	UIView* _accessibilityBackgroundView;
	UIView* _lighteningView;
	_UIBackdropView* _backdropView;
	SBControlCenterContentView* _contentView;
	double _contentHeight;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;                        //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) SBControlCenterContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign) double contentHeight;                                            //@synthesize contentHeight=_contentHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)_accessibilityBackgroundContrastDidChange:(id)arg1 ;
-(void)_updateBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(SBControlCenterContentView *)contentView;
-(void)setContentView:(SBControlCenterContentView *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
@end

