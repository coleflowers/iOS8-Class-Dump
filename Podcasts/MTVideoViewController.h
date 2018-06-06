/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Podcasts/IMSubtitlesViewControllerDelegate.h>
#import <Podcasts/IMMediaPlayerDelegate.h>
#import <Podcasts/IMCustomSliderDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol IMMediaItem, MTVideoViewControllerDelegate;
@class IMMediaPlayer, MPAVItem, MPAlternateTracks, NSTimer, UITapGestureRecognizer, MPAudioDeviceController, IMVideoView, _UIBackdropView, UIView, MTTouchInsetsButton, UILabel, MTNowPlayingSlider, MTNowPlayingVolumeView, MTNowPlayingSkipButton, UIButton, UIActivityIndicatorView, NSString;

@interface MTVideoViewController : UIViewController <UIGestureRecognizerDelegate, IMSubtitlesViewControllerDelegate, IMMediaPlayerDelegate, IMCustomSliderDelegate, UIAlertViewDelegate> {

	IMMediaPlayer* _player;
	id<IMMediaItem> _asset;
	MPAVItem* _mpavItem;
	MPAlternateTracks* _alternateTracks;
	NSTimer* _scrubberTimer;
	NSTimer* _dismissTimer;
	UITapGestureRecognizer* _doubletapGesture;
	UITapGestureRecognizer* _tapGesture;
	BOOL _ignoreNextTimeUpdate;
	int _stateBeforeScrub;
	BOOL _viewAppeared;
	BOOL _playingBeforeShowingSubtitlePicker;
	BOOL _opening;
	BOOL _showsSubscribe;
	BOOL _seeking;
	BOOL _statusBarWasHidden;
	id<MTVideoViewControllerDelegate> _delegate;
	double _statusBarHeight;
	MPAudioDeviceController* _audioDeviceController;
	IMVideoView* _videoView;
	_UIBackdropView* _topBar;
	UIView* _topBarDarkener;
	_UIBackdropView* _bottomBar;
	UIView* _bottomBarDarkener;
	MTTouchInsetsButton* _done;
	UILabel* _timeElapsed;
	MTNowPlayingSlider* _duration;
	UILabel* _timeRemaining;
	MTTouchInsetsButton* _subscribe;
	MTTouchInsetsButton* _scale;
	MTNowPlayingVolumeView* _volume;
	MTNowPlayingSkipButton* _skipBack;
	UIButton* _previousTrack;
	UIButton* _playPause;
	UIButton* _nextTrack;
	MTNowPlayingSkipButton* _skipForward;
	MTTouchInsetsButton* _subtitles;
	UIButton* _speed;
	UILabel* _scrubSpeed;
	UILabel* _scrubInstructions;
	UIView* _loadingView;
	UILabel* _loading;
	UIActivityIndicatorView* _loadingSpinner;

}

@property (assign,nonatomic) BOOL opening;                                                   //@synthesize opening=_opening - In the implementation block
@property (assign,nonatomic,__weak) id<MTVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int playbackSpeed; 
@property (assign,nonatomic) BOOL showsSubscribe;                                            //@synthesize showsSubscribe=_showsSubscribe - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                         //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,retain) MPAudioDeviceController * audioDeviceController;                //@synthesize audioDeviceController=_audioDeviceController - In the implementation block
@property (assign,nonatomic) BOOL seeking;                                                   //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) BOOL statusBarWasHidden;                                        //@synthesize statusBarWasHidden=_statusBarWasHidden - In the implementation block
@property (nonatomic,retain) IMVideoView * videoView;                                        //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * topBar;                                       //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,retain) UIView * topBarDarkener;                                        //@synthesize topBarDarkener=_topBarDarkener - In the implementation block
@property (nonatomic,retain) _UIBackdropView * bottomBar;                                    //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) UIView * bottomBarDarkener;                                     //@synthesize bottomBarDarkener=_bottomBarDarkener - In the implementation block
@property (nonatomic,retain) MTTouchInsetsButton * done;                                     //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) UILabel * timeElapsed;                                          //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,retain) MTNowPlayingSlider * duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) UILabel * timeRemaining;                                        //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (nonatomic,retain) MTTouchInsetsButton * subscribe;                                //@synthesize subscribe=_subscribe - In the implementation block
@property (nonatomic,retain) MTTouchInsetsButton * scale;                                    //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) MTNowPlayingVolumeView * volume;                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) MTNowPlayingSkipButton * skipBack;                              //@synthesize skipBack=_skipBack - In the implementation block
@property (nonatomic,retain) UIButton * previousTrack;                                       //@synthesize previousTrack=_previousTrack - In the implementation block
@property (nonatomic,retain) UIButton * playPause;                                           //@synthesize playPause=_playPause - In the implementation block
@property (nonatomic,retain) UIButton * nextTrack;                                           //@synthesize nextTrack=_nextTrack - In the implementation block
@property (nonatomic,retain) MTNowPlayingSkipButton * skipForward;                           //@synthesize skipForward=_skipForward - In the implementation block
@property (nonatomic,retain) MTTouchInsetsButton * subtitles;                                //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,retain) UIButton * speed;                                               //@synthesize speed=_speed - In the implementation block
@property (nonatomic,retain) UILabel * scrubSpeed;                                           //@synthesize scrubSpeed=_scrubSpeed - In the implementation block
@property (nonatomic,retain) UILabel * scrubInstructions;                                    //@synthesize scrubInstructions=_scrubInstructions - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                           //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UILabel * loading;                                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;                       //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadSubtitles;
-(void)setAudioDeviceController:(MPAudioDeviceController *)arg1 ;
-(MPAudioDeviceController *)audioDeviceController;
-(void)invalidateDismissTimer;
-(void)hideControls:(BOOL)arg1 ;
-(void)scheduleDismissTimer;
-(void)adjustVolumeSpeedSubtitles;
-(void)setTopBarDarkener:(UIView *)arg1 ;
-(void)setBottomBarDarkener:(UIView *)arg1 ;
-(void)onBack:(id)arg1 ;
-(void)setTimeElapsed:(UILabel *)arg1 ;
-(void)onScrubber:(id)arg1 ;
-(void)onScrubberUp:(id)arg1 ;
-(void)setSubscribe:(MTTouchInsetsButton *)arg1 ;
-(void)onSubscribe:(id)arg1 ;
-(void)onScale:(id)arg1 ;
-(void)setPlayPause:(UIButton *)arg1 ;
-(void)onPlay:(id)arg1 ;
-(void)setNextTrack:(UIButton *)arg1 ;
-(void)onSeekForward:(id)arg1 ;
-(void)onEndSeek:(id)arg1 ;
-(void)onNextEpisode:(id)arg1 ;
-(void)setPreviousTrack:(UIButton *)arg1 ;
-(void)onSeekBackward:(id)arg1 ;
-(void)onPreviousEpisode:(id)arg1 ;
-(void)setSkipForward:(MTNowPlayingSkipButton *)arg1 ;
-(void)onSkipForward:(id)arg1 ;
-(void)setSkipBack:(MTNowPlayingSkipButton *)arg1 ;
-(void)onSkipBack:(id)arg1 ;
-(void)setSubtitles:(MTTouchInsetsButton *)arg1 ;
-(void)onSubtitles:(id)arg1 ;
-(void)onPlaybackRate:(id)arg1 ;
-(void)updateEnable;
-(void)updatePlayButton;
-(void)setScrubSpeed:(UILabel *)arg1 ;
-(void)setScrubInstructions:(UILabel *)arg1 ;
-(void)updateControlStatus;
-(void)layoutTime;
-(void)startSeekForward;
-(void)startSeekBackward;
-(void)updateTimeLables:(double)arg1 ;
-(void)changeScale;
-(void)subtitlesViewController:(id)arg1 didSelectSubtitle:(id)arg2 ;
-(void)mediaPlayerStateChanged:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 currentItemChanged:(id)arg2 ;
-(void)mediaPlayer:(id)arg1 currentItemInfoChanged:(id)arg2 ;
-(void)mediaPlayerPeriodicUpdate:(id)arg1 elapsed:(double)arg2 duration:(double)arg3 isFinished:(BOOL)arg4 ;
-(void)playerLoadStateChanged:(id)arg1 ;
-(void)fineScrubSpeedChanged:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 asset:(id)arg2 ;
-(void)setShowsSubscribe:(BOOL)arg1 ;
-(void)setOpening:(BOOL)arg1 ;
-(BOOL)showsSubscribe;
-(BOOL)statusBarWasHidden;
-(void)setStatusBarWasHidden:(BOOL)arg1 ;
-(UIView *)topBarDarkener;
-(UIView *)bottomBarDarkener;
-(UILabel *)timeElapsed;
-(MTTouchInsetsButton *)subscribe;
-(UIButton *)previousTrack;
-(UIButton *)playPause;
-(UIButton *)nextTrack;
-(MTNowPlayingSkipButton *)skipForward;
-(MTTouchInsetsButton *)subtitles;
-(UILabel *)scrubSpeed;
-(UILabel *)scrubInstructions;
-(UIActivityIndicatorView *)loadingSpinner;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)handleDoubleTap:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setVideoView:(IMVideoView *)arg1 ;
-(void)_alternateTracksAvailable:(id)arg1 ;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)seeking;
-(IMVideoView *)videoView;
-(int)playbackSpeed;
-(void)setPlaybackSpeed:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTVideoViewControllerDelegate>)arg1 ;
-(id<MTVideoViewControllerDelegate>)delegate;
-(void)setSpeed:(UIButton *)arg1 ;
-(MTNowPlayingSlider *)duration;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)statusBarHeight;
-(void)setDuration:(MTNowPlayingSlider *)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(MTTouchInsetsButton *)scale;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(UIButton *)speed;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setScale:(MTTouchInsetsButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(MTTouchInsetsButton *)done;
-(void)showControls;
-(void)setTopBar:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)topBar;
-(void)setBottomBar:(_UIBackdropView *)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)endTracking:(id)arg1 ;
-(void)setDone:(MTTouchInsetsButton *)arg1 ;
-(_UIBackdropView *)bottomBar;
-(UILabel *)timeRemaining;
-(void)setTimeRemaining:(UILabel *)arg1 ;
-(BOOL)opening;
-(MTNowPlayingSkipButton *)skipBack;
-(void)setLoading:(UILabel *)arg1 ;
-(void)setLoadingView:(UIView *)arg1 ;
-(UIView *)loadingView;
-(void)beginTracking:(id)arg1 ;
-(void)updateTime;
-(MTNowPlayingVolumeView *)volume;
-(void)setVolume:(MTNowPlayingVolumeView *)arg1 ;
-(double)currentTime;
-(UILabel *)loading;
@end

