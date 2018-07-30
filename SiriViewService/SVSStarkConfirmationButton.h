/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:59 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class NSString;

@interface SVSStarkConfirmationButton : UIButton {

	BOOL _handlerDisabled;
	long long _confirmationButtonType;
	NSString* _buttonTitle;
	/*^block*/id _handlerBlock;

}

@property (assign,nonatomic) long long confirmationButtonType;                            //@synthesize confirmationButtonType=_confirmationButtonType - In the implementation block
@property (getter=_buttonTitle,nonatomic,retain) NSString * buttonTitle;                  //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (getter=_handlerBlock,nonatomic,copy) id handlerBlock;                          //@synthesize handlerBlock=_handlerBlock - In the implementation block
@property (assign,getter=_isHandlerDisabled,nonatomic) BOOL handlerDisabled;              //@synthesize handlerDisabled=_handlerDisabled - In the implementation block
+(id)starkButtonWithType:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_buttonTitle;
-(/*^block*/id)_handlerBlock;
-(void)setHandlerBlock:(id)arg1 ;
-(long long)confirmationButtonType;
-(void)setHandlerDisabled:(BOOL)arg1 ;
-(void)setConfirmationButtonType:(long long)arg1 ;
-(void)invokeConfirmationHandler:(id)arg1 ;
-(BOOL)_isHandlerDisabled;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setButtonTitle:(NSString *)arg1 ;
@end
