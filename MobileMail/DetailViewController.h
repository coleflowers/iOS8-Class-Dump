/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIToolbarDelegate.h>
#import <MobileMail/MFFreezableContent.h>

@class UIViewController, UIView, UIToolbar, UIWindow, NSString;

@interface DetailViewController : UIViewController <UIToolbarDelegate, MFFreezableContent> {

	UIViewController* _contentViewController;
	UIView* _contentContainerView;
	UIToolbar* _toolbar;
	UIView* _frozenContentSnapshotView;
	UIWindow* _snapshotWindow;

}

@property (nonatomic,retain) UIViewController * contentViewController; 
@property (nonatomic,retain,readonly) UIToolbar * toolbar;                          //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain,readonly) UIView * contentContainerView;                //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (assign,nonatomic) BOOL contentScrollEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)freezeContent;
-(void)unfreezeContent;
-(void)bringFrozenViewToFront;
-(void)_getFrameForToolbar:(CGRect*)arg1 contentView:(CGRect*)arg2 ;
-(BOOL)contentScrollEnabled;
-(UIView *)contentContainerView;
-(void)setContentScrollEnabled:(BOOL)arg1 ;
-(id)rasterizableContentSubviews;
-(void)dealloc;
-(id)init;
-(long long)positionForBar:(id)arg1 ;
-(void)loadView;
-(UIViewController *)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(UIToolbar *)toolbar;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end

