/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIButton.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface ListViewSwitchButton : UIButton {

	BOOL _state;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	SEL _tapSelector;
	id _tapSelectorTarget;

}
-(void)_viewTapped:(id)arg1 ;
-(void)setActiveState:(BOOL)arg1 ;
-(void)_viewLongPressed:(id)arg1 ;
-(void)updateActiveState;
-(void)_fadeToDiminishedAlphaWithFadeDuration:(double)arg1 ;
-(void)_fadeViewToAlpha:(double)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fadeToFullAlphaWithFadeDuration:(double)arg1 ;
-(id)foregroundImageWithTintColor:(id)arg1 ;
-(UIEdgeInsets)imageEdgeInsetsForSourceImage;
-(id)initWithActiveState:(BOOL)arg1 sendAction:(SEL)arg2 target:(id)arg3 ;
-(id)_selectedBackgroundImage;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
