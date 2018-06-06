/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIViewController.h>

@class TKBaseListComponent, TKOverlayShieldView, UIViewController, TKTheme, UIScrollView, TKCompositeView, TKOverlayComponent;

@interface TKOverlayView : UIViewController {

	TKBaseListComponent* _contentModel;
	TKOverlayShieldView* _shield;
	UIViewController* _view;
	CGRect _startSize;
	BOOL _scrollable;
	UIViewController* _containerViewController;
	TKTheme* _theme;
	UIScrollView* _scroller;
	TKCompositeView* _contentView;
	TKOverlayComponent* _model;
	/*^block*/id _callback;

}

@property (__weak) UIViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (retain) TKTheme * theme;                                         //@synthesize theme=_theme - In the implementation block
@property (retain) UIScrollView * scroller;                                 //@synthesize scroller=_scroller - In the implementation block
@property (retain) TKCompositeView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (retain) TKOverlayComponent * model;                              //@synthesize model=_model - In the implementation block
@property (assign) BOOL scrollable;                                         //@synthesize scrollable=_scrollable - In the implementation block
@property (copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
+(CGRect)rectForViewFrame:(CGRect)arg1 withOrientation:(long long)arg2 ;
-(void)setContentComponent:(id)arg1 ;
-(void)setScrollable:(BOOL)arg1 ;
-(id)viewForModel:(id)arg1 ;
-(void)setContentComponents:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 withFrame:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(BOOL)scrollable;
-(void)setScroller:(UIScrollView *)arg1 ;
-(UIViewController *)containerViewController;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(void)hide;
-(TKCompositeView *)contentView;
-(void)setContentView:(TKCompositeView *)arg1 ;
-(void)loadView;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(TKOverlayComponent *)model;
-(UIScrollView *)scroller;
-(void)setModel:(TKOverlayComponent *)arg1 ;
-(id)callback;
-(TKTheme *)theme;
-(void)setTheme:(TKTheme *)arg1 ;
-(void)setCallback:(id)arg1 ;
@end
