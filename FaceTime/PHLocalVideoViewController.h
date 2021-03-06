/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIViewController.h>

@class UIControl, UIView;

@interface PHLocalVideoViewController : UIViewController {

	BOOL _supportsAutoRotation;
	BOOL _showsLocalPreviewStatusBarGradient;
	BOOL _waitingForLocalVideoFirstFrame;
	UIControl* _videoGroupView;
	UIView* _localVideoView;
	UIView* _localVideoStatusBarGradientView;
	long long _lastKnownOrientation;

}

@property (nonatomic,retain) UIControl * videoGroupView;                            //@synthesize videoGroupView=_videoGroupView - In the implementation block
@property (nonatomic,retain) UIView * localVideoView;                               //@synthesize localVideoView=_localVideoView - In the implementation block
@property (nonatomic,retain) UIView * localVideoStatusBarGradientView;              //@synthesize localVideoStatusBarGradientView=_localVideoStatusBarGradientView - In the implementation block
@property (assign,nonatomic) BOOL supportsAutoRotation;                             //@synthesize supportsAutoRotation=_supportsAutoRotation - In the implementation block
@property (assign,nonatomic) BOOL showsLocalPreviewStatusBarGradient;               //@synthesize showsLocalPreviewStatusBarGradient=_showsLocalPreviewStatusBarGradient - In the implementation block
@property (assign,nonatomic) BOOL waitingForLocalVideoFirstFrame;                   //@synthesize waitingForLocalVideoFirstFrame=_waitingForLocalVideoFirstFrame - In the implementation block
@property (assign,nonatomic) long long lastKnownOrientation;                        //@synthesize lastKnownOrientation=_lastKnownOrientation - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)fadeOutAnimated:(BOOL)arg1 ;
-(BOOL)shouldDisableEdgeClip;
-(void)updateViewControllerForOrientation:(long long)arg1 ;
-(void)_avFirstPreviewFrameArrived:(id)arg1 ;
-(BOOL)_isValidFaceTimeOrientation:(long long)arg1 ;
-(BOOL)supportsAutoRotation;
-(void)_dissociateVideoLayers;
-(void)_ensureVideoLayersExist;
-(void)setWaitingForLocalVideoFirstFrame:(BOOL)arg1 ;
-(void)associateLocalVideoLayers;
-(void)_updateLocalVideoOrientationAnimated:(BOOL)arg1 ;
-(void)_setupVideoLayers;
-(void)_updateLocalPreviewStatusBarGradient;
-(void)setVideoGroupView:(UIControl *)arg1 ;
-(void)setLocalVideoView:(UIView *)arg1 ;
-(void)_ensureLocalVideoWillBecomeVisible;
-(UIView *)localVideoView;
-(unsigned)_imAVCameraOrientationForDeviceOrientation:(long long)arg1 ;
-(void)_adjustForOrientationAnimated:(BOOL)arg1 ;
-(void)_applyAutoRotationCorrectionForOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_fadeInLocalVideo;
-(void)_autoFadeInLocalVideo;
-(BOOL)waitingForLocalVideoFirstFrame;
-(BOOL)showsLocalPreviewStatusBarGradient;
-(void)fadeInAnimated:(BOOL)arg1 ;
-(UIControl *)videoGroupView;
-(UIView *)localVideoStatusBarGradientView;
-(void)setLocalVideoStatusBarGradientView:(UIView *)arg1 ;
-(void)setShowsLocalPreviewStatusBarGradient:(BOOL)arg1 ;
-(long long)lastKnownOrientation;
-(void)setLastKnownOrientation:(long long)arg1 ;
-(void)_applicationResumed:(id)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSupportsAutoRotation:(BOOL)arg1 ;
-(void)startPreview;
-(void)stopPreview;
@end

