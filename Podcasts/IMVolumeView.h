/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <MediaPlayer/MPVolumeView.h>

@class MPAudioDeviceController;

@interface IMVolumeView : MPVolumeView {

	MPAudioDeviceController* _audioDeviceController;

}

@property (nonatomic,readonly) BOOL airplayActive; 
@property (nonatomic,retain) MPAudioDeviceController * audioDeviceController;              //@synthesize audioDeviceController=_audioDeviceController - In the implementation block
-(void)setAudioDeviceController:(MPAudioDeviceController *)arg1 ;
-(MPAudioDeviceController *)audioDeviceController;
-(BOOL)airplayActive;
-(id)routeButtonImageSelected;
-(id)routeButtonImageNormal;
-(id)_routeButtonImage;
-(BOOL)routeButtonShowsTouchWhenHighlighted;
-(CGRect)volumeSliderRectForBounds:(CGRect)arg1 ;
-(CGRect)routeButtonRectForBounds:(CGRect)arg1 ;
-(id)minimumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(id)maximumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(id)routeButtonImageForState:(unsigned long long)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)volumeThumbImageForState:(unsigned long long)arg1 ;
-(CGRect)volumeThumbRectForBounds:(CGRect)arg1 volumeSliderRect:(CGRect)arg2 value:(float)arg3 ;
-(void)dismissActiveOverlaysAnimated:(BOOL)arg1 ;
-(BOOL)isShowingActiveOverlays;
-(void)dealloc;
@end
