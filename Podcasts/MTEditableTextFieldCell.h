/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTSettingsTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UITextFieldDelegate;
@class UITextField, NSString;

@interface MTEditableTextFieldCell : MTSettingsTableViewCell <UITextFieldDelegate> {

	UITextField* _textField;
	/*^block*/id _textChanged;
	id<UITextFieldDelegate> _delegate;

}

@property (nonatomic,retain) UITextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) id textChanged;                                         //@synthesize textChanged=_textChanged - In the implementation block
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textFont;
-(void)setupCell;
-(id)textChanged;
-(void)setTextChanged:(id)arg1 ;
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<UITextFieldDelegate>)delegate;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(void)updateFonts;
@end

