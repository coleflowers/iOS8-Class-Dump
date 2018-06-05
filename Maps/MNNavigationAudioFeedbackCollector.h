/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/AudioOutputSettingsManagerObserver.h>
#import <Maps/MNVoiceControllerObserver.h>

@class NSString;

@interface MNNavigationAudioFeedbackCollector : NSObject <AudioOutputSettingsManagerObserver, MNVoiceControllerObserver> {

	SCD_Struct_MN30* _audioFeedback;
	BOOL _viewingAudioSettings;
	BOOL _sessionDidStart;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewingAudioSettings:(BOOL)arg1 ;
-(void)updateCurrentAudioRouteChanged;
-(void)updateHFPPreferenceChanged:(BOOL)arg1 ;
-(void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2 ;
-(void)voiceController:(id)arg1 didActivateAudioSession:(BOOL)arg2 ;
-(void)_updateAvailableRoutesProperties;
-(void)_updateRoutesPropertiesAtEndOfSession;
-(void)audioOutputSettingsManager:(id)arg1 updatedSettings:(id)arg2 ;
-(SCD_Struct_MN30*)audioFeedback;
-(void)dealloc;
-(void)endSession;
-(void)startSession;
@end
