/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsChromeModeController, MNGuidanceCurrentRoadDisplayDelegate;
#import <Maps/Maps-Structs.h>
@class ChromeViewController, UIView, MNGuidanceCurrentRoadSign, InterruptibleAnimation, NSString;

@interface MNGuidanceCurrentRoadDisplay : NSObject {

	ChromeViewController* _viewController;
	id<MapsChromeModeController> _container;
	UIView* _superview;
	BOOL _hidingSigns;
	BOOL _showingRoadDescription;
	MNGuidanceCurrentRoadSign* _currentRoadSign;
	InterruptibleAnimation* _hidingAnimation;
	id<MNGuidanceCurrentRoadDisplayDelegate> _delegate;
	NSString* _lastRoadDescription;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MNGuidanceCurrentRoadDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDimmedSign; 
@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                                      //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (nonatomic,retain) InterruptibleAnimation * hidingAnimation;                              //@synthesize hidingAnimation=_hidingAnimation - In the implementation block
@property (nonatomic,retain) NSString * lastRoadDescription;                                        //@synthesize lastRoadDescription=_lastRoadDescription - In the implementation block
-(void)removeFromContainingViewController;
-(id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
-(void)setShowsDimmedSign:(BOOL)arg1 ;
-(void)setShowsDimmedSign:(BOOL)arg1 animation:(id)arg2 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)setCurrentRoadDescription:(id)arg1 ;
-(void)setCurrentRoadDescriptionIsUnreliable:(BOOL)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(InterruptibleAnimation *)hidingAnimation;
-(void)setHidingAnimation:(InterruptibleAnimation *)arg1 ;
-(void)_setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setLastRoadDescription:(NSString *)arg1 ;
-(BOOL)showsDimmedSign;
-(NSString *)lastRoadDescription;
-(void)dealloc;
-(void)setDelegate:(id<MNGuidanceCurrentRoadDisplayDelegate>)arg1 ;
-(id<MNGuidanceCurrentRoadDisplayDelegate>)delegate;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

