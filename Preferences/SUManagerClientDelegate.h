/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUManagerClientDelegate <NSObject>
@optional
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
-(void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidStart:(id)arg2;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
-(void)client:(id)arg1 installDidStart:(id)arg2;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 installDidFinish:(id)arg2;

@end

