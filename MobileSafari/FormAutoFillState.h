/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormAutoCompleteState.h>

@protocol _WKFormInputSession;
@class FormAutoFillFrameHandle, NSDictionary, NSString, FormAutoFillController;

@interface FormAutoFillState : WBUFormAutoCompleteState {

	FormAutoFillFrameHandle* _frame;
	NSDictionary* _formMetadata;
	NSDictionary* _textFieldMetadata;
	NSString* _textFieldValue;
	FormAutoFillController* _autoFillController;
	id<_WKFormInputSession> _inputSession;

}
-(id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5 ;
-(void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 ;
-(void)_updateTextFieldValue;
-(void)dealloc;
-(id)frame;
-(void)invalidate;
-(id)webView;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 andFocusField:(id)arg2 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2 ;
-(id)textFieldValue;
@end

