/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <UIKit/UITextFieldDelegate.h>

@class TPButton, UIView, UITextView, UIActivityIndicatorView, UITextField, NSString;

@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate> {

	TPButton* _dismissButton;
	TPButton* _replyButton;
	UIView* _notifyView;
	UIView* _replyView;
	UITextView* _charsRemainingView;
	UIActivityIndicatorView* _progressIndicator;
	UITextField* _responseField;
	UITextView* _textView;
	UITextView* _responseMessageView;
	BOOL _allowsResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(id)_notifyView;
-(void)alertStringAvailable:(id)arg1 ;
-(void)setAllowsResponse:(BOOL)arg1 ;
-(void)displayString:(id)arg1 ;
-(BOOL)allowsResponse;
-(void)_centerTextView:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_cancelClicked;
-(void)_okayClicked;
-(void)_replyClicked;
-(void)_setupResponseBar;
-(id)_replyView;
-(id)_charsRemainingView;
-(void)_updateCharsRemaining;
-(id)_responseMessageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(id)_textView;
-(void)_textChanged:(id)arg1 ;
@end

