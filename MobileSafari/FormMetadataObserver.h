/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FormMetadataObserver <NSObject>
@required
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2;
-(void)didCollectFormMetadata:(id)arg1 textFieldMetadata:(id)arg2 replyIdentifier:(id)arg3;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 usernameIsAutoFilled:(BOOL)arg3 passwordIsAutoFilled:(BOOL)arg4;

@end

