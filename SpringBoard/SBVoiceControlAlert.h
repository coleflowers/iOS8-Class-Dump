/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@interface SBVoiceControlAlert : SBAlert {

	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	}  _voiceControlFlags;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;

}
+(id)pendingOrActiveAlert;
+(BOOL)shouldEnterVoiceControl;
+(BOOL)resetVoiceControlIfNecessary:(BOOL)arg1 ;
+(void)unregisterForAlerts;
+(void)bluetoothDeviceRequestedVoiceControl:(id)arg1 ;
+(void)bluetoothDeviceTerminatedVoiceControl:(id)arg1 ;
+(void)setNextRecognitionAudioInputPaths:(id)arg1 ;
+(BOOL)_bluetoothDevicesPickable;
+(void)_configureSession:(id)arg1 forAlert:(id)arg2 ;
+(void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(BOOL)arg2 ;
+(void)registerForAlerts;
-(void)_proximityChanged:(id)arg1 ;
-(void)cancelIfNotActivated;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(double)autoDimTime;
-(BOOL)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)initFromMenuButton;
-(id)initFromWiredHeadsetButton;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)arg1 ;
-(void)_resign;
-(id)initFromBluetoothDevice:(id)arg1 ;
-(void)_workspaceActivate;
-(void)_makeActive;
-(void)_setRoutingAttributesForWiredHeadset:(BOOL)arg1 ;
-(void)activateWhenReady;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2 ;
-(void)setExpectsFaceContact:(BOOL)arg1 ;
-(void)deactivate;
-(void)activate;
-(id)_session;
-(BOOL)handleMenuButtonTap;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1 ;
@end
