/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconZoomAnimator.h>
#import <SpringBoard/SBIconListLayoutDelegate.h>

@class UIView, SBCenterZoomSettings, NSString;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {

	UIView* _zoomView;
	double _iconZoomedZ;
	double _centerRow;
	double _centerCol;
	CGPoint _cameraPosition;

}

@property (nonatomic,retain) SBCenterZoomSettings * settings; 
@property (nonatomic,retain,readonly) UIView * zoomView;                   //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,readonly) CGPoint cameraPosition;                     //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareAnimation;
-(void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2 ;
-(void)iconListViewLayoutInvalidated:(id)arg1 ;
-(void)_cleanupAnimation;
-(id)initWithFolderController:(id)arg1 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_calculateCentersAndCameraPosition;
-(void)_positionView:(id)arg1 forIcon:(id)arg2 ;
-(double)_iconZoomDelay;
-(id)_animationFactoryForIcon:(id)arg1 ;
-(id)_animationFactoryForDock;
-(void)dealloc;
-(CGPoint)cameraPosition;
-(UIView *)zoomView;
@end

