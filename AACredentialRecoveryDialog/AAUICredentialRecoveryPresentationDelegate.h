/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:08:37 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AACredentialRecoveryDialog.app/AACredentialRecoveryDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1;
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;

@end

