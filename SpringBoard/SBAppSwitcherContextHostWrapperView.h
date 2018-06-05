/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@protocol FBWindowContextAppearance;
@class FBWindowContextHostManager, UIView, SBWallpaperEffectView, NSString;

@interface SBAppSwitcherContextHostWrapperView : UIView <SBAppSwitcherPageContentView> {

	FBWindowContextHostManager* _contextHostManager;
	UIView* _containerView;
	UIView*<FBWindowContextAppearance> _contextHostView;
	UIView* _snapshotView;
	SBWallpaperEffectView* _wallpaperEffectView;
	long long _orientation;

}

@property (assign,nonatomic) long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 application:(id)arg2 ;
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)_viewDidAnimatePresentation:(id)arg1 ;
-(CGAffineTransform)_rotationTransformForOrientation:(long long)arg1 ;
-(void)_viewDidAnimateDismissal:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)orientation;
-(void)didMoveToSuperview;
-(void)setOrientation:(long long)arg1 ;
@end
