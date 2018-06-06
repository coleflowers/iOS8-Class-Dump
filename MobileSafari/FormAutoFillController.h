/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/FormMetadataObserver.h>

@protocol FormAutoFiller;
@class TabDocumentWK2, _WKRemoteObjectInterface, NSMutableDictionary, FormAutoFillState, NSTimer, NSString;

@interface FormAutoFillController : NSObject <FormMetadataObserver> {

	TabDocumentWK2* _tabDocument;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	id<FormAutoFiller> _autoFiller;
	NSMutableDictionary* _metadataReplyIdentifierToCompletion;
	FormAutoFillState* _state;
	NSTimer* _prefillTimer;

}

@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTabDocument:(id)arg1 ;
-(void)prefillFormsSoonIfNeeded;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)willSubmitForm:(id)arg1 inFrame:(id)arg2 usernameIsAutoFilled:(BOOL)arg3 passwordIsAutoFilled:(BOOL)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ;
-(void)didCollectFormMetadata:(id)arg1 textFieldMetadata:(id)arg2 replyIdentifier:(id)arg3 ;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2 ;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 usernameIsAutoFilled:(BOOL)arg3 passwordIsAutoFilled:(BOOL)arg4 ;
-(void)autoFillForm:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)_prefillTimerFired:(id)arg1 ;
-(void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)_autoFillLoginFormSynchronously:(id)arg1 inFrame:(id)arg2 ;
-(void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 andFocusField:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)autoFill;
@end
