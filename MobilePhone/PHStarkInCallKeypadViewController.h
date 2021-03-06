/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericViewController.h>

@class UIButton, DialerController, UIView;

@interface PHStarkInCallKeypadViewController : PHStarkGenericViewController {

	UIButton* _backButton;
	UIButton* _endButton;
	DialerController* _dialerController;
	UIView* _fakeNavigationBar;
	long long _currentHighlightedControlIndex;

}

@property (retain) UIButton * backButton;                                 //@synthesize backButton=_backButton - In the implementation block
@property (retain) UIButton * endButton;                                  //@synthesize endButton=_endButton - In the implementation block
@property (retain) DialerController * dialerController;                   //@synthesize dialerController=_dialerController - In the implementation block
@property (retain) UIView * fakeNavigationBar;                            //@synthesize fakeNavigationBar=_fakeNavigationBar - In the implementation block
@property (assign) long long currentHighlightedControlIndex;              //@synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex - In the implementation block
-(void)backButtonTapped:(id)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)endButtonTapped:(id)arg1 ;
-(void)setEndButton:(UIButton *)arg1 ;
-(UIButton *)endButton;
-(void)setDialerController:(DialerController *)arg1 ;
-(DialerController *)dialerController;
-(long long)currentHighlightedControlIndex;
-(void)setCurrentHighlightedControlIndex:(long long)arg1 ;
-(UIView *)fakeNavigationBar;
-(void)setFakeNavigationBar:(UIView *)arg1 ;
-(void)dealloc;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)loadView;
-(UIButton *)backButton;
-(void)hardwareControlEventNotification:(id)arg1 ;
@end

