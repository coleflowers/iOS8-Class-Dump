/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NACVolumeControllerDelegate <NSObject>
@optional
-(void)volumeControllerDidUpdateMutedState:(id)arg1;
-(void)volumeControllerDidUpdateEUVolumeLimit:(id)arg1;
-(void)volumeControllerDidUpdateVolumeWarningEnabled:(id)arg1;
-(void)volumeControllerDidUpdateHapticIntensity:(id)arg1;
-(void)volumeControllerDidUpdateSystemMutedState:(id)arg1;

@required
-(void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1;
-(void)volumeControllerDidUpdateVolumeValue:(id)arg1;

@end

