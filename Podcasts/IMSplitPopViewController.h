/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMSplitViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIBarButtonItem, UIPopoverController, NSString;

@interface IMSplitPopViewController : IMSplitViewController <UIPopoverControllerDelegate> {

	id _delegate;
	UIBarButtonItem* _barButtonPopSource;
	UIPopoverController* _popover;
	CGSize _popoverContentSize;
	BOOL _popoverMode;
	int _style;
	Class _popoverBackgroundViewClass;

}

@property (assign,nonatomic) id<IMSplitPopViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize popoverContentSize;                                  //@synthesize popoverContentSize=_popoverContentSize - In the implementation block
@property (assign,nonatomic) BOOL popoverMode;                                           //@synthesize popoverMode=_popoverMode - In the implementation block
@property (nonatomic,readonly) UIPopoverController * popover;                            //@synthesize popover=_popover - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonPopSource;                     //@synthesize barButtonPopSource=_barButtonPopSource - In the implementation block
@property (assign,nonatomic) int style;                                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) Class popoverBackgroundViewClass;                           //@synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)releaseViews;
-(void)setupModeForOrientation:(long long)arg1 ;
-(void)setupSplitMode;
-(void)setupPopoverMode;
-(void)onPopoverButtonClick:(id)arg1 ;
-(BOOL)popoverMode;
-(void)setPopoverMode:(BOOL)arg1 ;
-(UIBarButtonItem *)barButtonPopSource;
-(void)dealloc;
-(void)setDelegate:(id<IMSplitPopViewControllerDelegate>)arg1 ;
-(id<IMSplitPopViewControllerDelegate>)delegate;
-(int)style;
-(void)viewDidLayoutSubviews;
-(void)setStyle:(int)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setPopoverBackgroundViewClass:(Class)arg1 ;
-(Class)popoverBackgroundViewClass;
-(CGSize)popoverContentSize;
-(void)setPopoverContentSize:(CGSize)arg1 ;
-(UIPopoverController *)popover;
@end

