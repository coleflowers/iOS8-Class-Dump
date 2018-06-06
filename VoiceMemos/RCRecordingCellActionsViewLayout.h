/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:34:19 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCViewLayout.h>
#import <VoiceMemos/RCConcreteViewLayout.h>

@class _RCPlaybackToolbar, RCRecordingCell, UIButton, RCAudioScrubber, UIActivityIndicatorView, UIToolbar, NSString;

@interface RCRecordingCellActionsViewLayout : RCViewLayout <RCConcreteViewLayout> {

	_RCPlaybackToolbar* _actionsToolbar;
	BOOL _isShowingPreparingToPlayIndicator;
	BOOL _isShowingPreparingToShareIndicator;
	BOOL _isShowingSaveInProgressIndicator;
	RCRecordingCell* _recordingCell;
	UIButton* _playPauseButton;
	RCAudioScrubber* _audioScrubber;
	UIActivityIndicatorView* _audioUnavailableSpinner;

}

@property (nonatomic,__weak,readonly) RCRecordingCell * recordingCell;                         //@synthesize recordingCell=_recordingCell - In the implementation block
@property (assign,nonatomic) BOOL isShowingPreparingToPlayIndicator;                           //@synthesize isShowingPreparingToPlayIndicator=_isShowingPreparingToPlayIndicator - In the implementation block
@property (assign,nonatomic) BOOL isShowingPreparingToShareIndicator;                          //@synthesize isShowingPreparingToShareIndicator=_isShowingPreparingToShareIndicator - In the implementation block
@property (assign,nonatomic) BOOL isShowingSaveInProgressIndicator;                            //@synthesize isShowingSaveInProgressIndicator=_isShowingSaveInProgressIndicator - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                     //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) RCAudioScrubber * audioScrubber;                                //@synthesize audioScrubber=_audioScrubber - In the implementation block
@property (nonatomic,readonly) UIToolbar * actionsToolbar;                                     //@synthesize actionsToolbar=_actionsToolbar - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * audioUnavailableSpinner;              //@synthesize audioUnavailableSpinner=_audioUnavailableSpinner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadGuideConstraints;
-(id)loadViews;
-(void)prepareViewsForReuse;
-(void)updateForCurrentPreviewState:(long long)arg1 ;
-(RCAudioScrubber *)audioScrubber;
-(void)setIsShowingPreparingToPlayIndicator:(BOOL)arg1 ;
-(void)setIsShowingPreparingToShareIndicator:(BOOL)arg1 ;
-(void)setIsShowingSaveInProgressIndicator:(BOOL)arg1 ;
-(id)initWithRecordingCell:(id)arg1 ;
-(BOOL)isShowingPreparingToPlayIndicator;
-(BOOL)isShowingPreparingToShareIndicator;
-(BOOL)isShowingSaveInProgressIndicator;
-(id)_createPlayPauseButton;
-(id)_createAudioUnavailableSpinner;
-(id)_createAudioScrubber;
-(id)_createActionsToolbar;
-(id)_assetImageForButtonPreviewState:(long long)arg1 ;
-(UIToolbar *)actionsToolbar;
-(RCRecordingCell *)recordingCell;
-(UIActivityIndicatorView *)audioUnavailableSpinner;
-(UIButton *)playPauseButton;
@end

