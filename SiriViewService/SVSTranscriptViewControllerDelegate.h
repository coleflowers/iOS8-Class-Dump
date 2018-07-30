/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSTranscriptViewControllerDelegate <NSObject>
@required
-(long long)initialDisplayTypeForTranscriptViewController:(id)arg1;
-(CGRect*)statusBarFrameForTranscriptViewController:(id)arg1;
-(BOOL)transcriptViewControllerWillShowSuggestions:(id)arg1;
-(void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;
-(BOOL)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;
-(void)transcriptViewControllerWillBeginEditing:(id)arg1;
-(void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;
-(void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4;
-(void)cancelRequestForTranscriptViewController:(id)arg1;
-(void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;
-(void)transcriptViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
-(void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)transcriptViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2;
-(void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)cancelSpeakingForTranscriptViewController:(id)arg1;
-(void)transcriptViewControllerDidShowSuggestions:(id)arg1;
-(void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;
-(void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;
-(void)transcriptViewController:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 forInterval:(double)arg3;
-(void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;

@end
